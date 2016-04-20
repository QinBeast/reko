﻿#region License
/* 
 * Copyright (C) 1999-2016 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Core;
using Reko.Core.Services;
using System;

namespace Reko.ImageLoaders.MzExe.Pe
{
    public class i386Relocator : Relocator
    {
        private const ushort RelocationAbsolute = 0;
        private const ushort RelocationHigh = 1;
        private const ushort RelocationLow = 2;
        private const ushort RelocationHighLow = 3;

        private DecompilerEventListener dcSvc;

        public i386Relocator(IServiceProvider services)
        {
            this.dcSvc = services.RequireService<DecompilerEventListener>();
        }

        public override void ApplyRelocation(uint baseOfImage, uint page, ImageReader rdr, RelocationDictionary relocations)
		{
			ushort fixup = rdr.ReadLeUInt16();
			uint offset = page + (fixup & 0x0FFFu);
            var imgR = Program.CreateImageReader(Address.Ptr32(offset));
            var imgW = Program.CreateImageWriter(Address.Ptr32(offset));
            switch (fixup >> 12)
			{
			case RelocationAbsolute:
				// Used for padding to 4-byte boundary, ignore.
				break;
			case RelocationHighLow:
			{
				uint n = (uint) (imgR.ReadUInt32() + (baseOfImage - Program.ImageMap.BaseAddress.ToLinear()));
				imgW.WriteUInt32(offset, n);
				relocations.AddPointerReference(offset, n);
				break;
			}
            case 0xA:
            break;
			default:
                dcSvc.Warn(
                    dcSvc.CreateAddressNavigator(Program, Address.Ptr32(offset)),
                    string.Format(
                        "Unsupported PE fixup type: {0:X}",
                        fixup >> 12));
                break;
			}
        }
    }
}