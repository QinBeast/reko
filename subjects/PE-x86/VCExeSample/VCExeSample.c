// VCExeSample.c
// Generated by decompiling VCExeSample.exe
// using Reko decompiler version 0.7.0.0.

#include "VCExeSample.h"

// 00401000: Register int32 main(Stack int32 argc, Stack (ptr (ptr char)) argv)
int32 main(int32 argc, char * * argv)
{
	test1(*argv, argc, "test123", 1.0F);
	return 0x00;
}

// 00401030: void test1(Stack (ptr char) arg1, Stack int32 arg2, Stack (ptr char) arg3, Stack real32 arg4)
void test1(char * arg1, int32 arg2, char * arg3, real32 arg4)
{
	printf("%s %d %s %f", arg1, arg2, arg3, (real64) arg4);
	return;
}

// 00401060: void test2(Stack word32 dwArg04)
void test2(word32 dwArg04)
{
	test1("1", 0x02, "3", globals->r4020E8);
	if (dwArg04 == 0x00)
		test1("5", 0x06, "7", globals->r4020E4);
	return;
}

// 004010B0: void indirect_call_test3(Stack (ptr Eq_52) c)
void indirect_call_test3(cdecl_class * c)
{
	c->vtbl->method04(c, 1000);
	return;
}

// 004010D0: void test4()
void test4()
{
	globals->gbl_c->vtbl->method00(globals->gbl_c);
	return;
}

// 004010F0: void test5()
void test5()
{
	globals->gbl_c->vtbl->method04(globals->gbl_c, 999, globals->r4020EC);
	return;
}

// 00401120: void test6(Stack Eq_63 c, Stack int32 a, Stack int32 b)
void test6(Eq_63 c, int32 a, int32 b)
{
	c->vtbl->method04(c, c->vtbl->sum(c, a, b));
	return;
}

// 00401160: void test7(Stack real64 rArg04)
void test7(real64 rArg04)
{
	if (1.0 < rArg04)
		globals->gbl_thiscall->vtbl->set_double(globals->gbl_thiscall, rArg04);
	globals->gbl_thiscall->vtbl->modify_double(globals->gbl_thiscall, 0x0D, rArg04);
	return;
}

// 004011B0: Register word32 nested_if_blocks_test8(Stack real64 rArg04, FpuStack real64 rArg0)
word32 nested_if_blocks_test8(real64 rArg04, real64 rArg0)
{
	globals->gbl_thiscall->vtbl->modify_double(globals->gbl_thiscall, ~0x00, rArg04);
	if (globals->r4020F8 != rArg04 && globals->r4020F0 > rArg04)
		globals->gbl_thiscall->vtbl->set_double(globals->gbl_thiscall, rArg04);
	test6(globals->gbl_c, 0x06, 0x07);
	return ebp;
}

// 00401230: void loop_test9(Stack real32 rArg04, FpuStack real64 rArg0)
void loop_test9(real32 rArg04, real64 rArg0)
{
	int32 dwLoc08_12 = 0x00;
	while (true)
	{
		globals->gbl_thiscall->vtbl->modify_double(globals->gbl_thiscall, dwLoc08_12, (real64) rArg04);
		if (rArg0 <= (real64) dwLoc08_12)
			break;
		rArg0 = (real64) rArg04;
		globals->gbl_thiscall->vtbl->set_double(globals->gbl_thiscall, rArg0);
		dwLoc08_12 = dwLoc08_12 + 0x01;
	}
	return;
}

// 004012A0: void const_div_test10(Stack word32 dwArg04)
void const_div_test10(word32 dwArg04)
{
	uint32 eax_16 = 0x0A;
	uint32 ecx_19 = 0x03;
	if (dwArg04 != 0x00)
	{
		eax_16 = 0x03;
		ecx_19 = 0x01;
	}
	globals->dw40301C = ecx_19;
	globals->dw403020 = eax_16;
	return;
}

// 004012D0: void loop_test11(Register word32 ecx, Register word32 ebp)
void loop_test11(word32 ecx, word32 ebp)
{
	struct Eq_223 * ebp_19 = fp - 0x04;
	while (*(ebp_19 - 0x04) > 0x00)
	{
		ui32 eax_26 = *(ebp_19 - 0x04);
		ui32 eax_27 = eax_26 & 0x80000001;
		if ((eax_26 & 0x80000001) < 0x00)
			eax_27 = ((eax_26 & 0x80000001) - 0x01 | ~0x01) + 0x01;
		if (eax_27 == 0x00)
		{
			*(ebp_19 - 0x08) = (real32) ebp_19->r0008;
			real64 rLoc1_44 = (real64) *(ebp_19 - 0x08);
			*(fp - 0x10) = ecx;
			*(fp - 0x10) = (real32) rLoc1_44;
			loop_test9(rArg00, rArg0);
		}
		else
		{
			*(fp - 0x14) = ebp_19->r0008;
			ebp_19 = nested_if_blocks_test8(rArg00, rArg0);
		}
		word32 ecx_38 = *(ebp_19 - 0x04);
		*(ebp_19 - 0x04) = ecx_38 - 0x01;
		ecx = ecx_38 - 0x01;
	}
	return;
}

// 004015E4: Register word32 fn004015E4(Register word32 ebx, Register word32 esi, Register word32 edi)
word32 fn004015E4(word32 ebx, word32 esi, word32 edi)
{
	Eq_316 eax_122;
	struct Eq_317 * ebp_10 = fn004017DC(ebx, esi, edi, dwLoc0C, 4202888, 0x14);
	*(fp - 0x0C) = globals->dw40338C;
	void * eax_16 = _decode_pointer(*(fp - 0x0C));
	*(ebp_10 - 0x1C) = (void **) eax_16;
	if (eax_16 == (void *) ~0x00)
	{
		*(fp - 0x0C) = ebp_10->dw0008;
		eax_122 = _onexit(*(fp - 0x0C));
	}
	else
	{
		*(fp - 0x0C) = 0x08;
		ptr32 esp_47;
		word32 esi_48;
		word32 eax_49;
		word32 ecx_50;
		struct Eq_364 * ebp_51;
		byte SCZO_52;
		byte Z_53;
		byte SZO_54;
		byte C_55;
		word32 ebx_56;
		word32 edi_57;
		lock();
		*(ebp_51 - 0x04) = *(ebp_51 - 0x04) & 0x00;
		*(esp_47 - 0x04) = globals->dw40338C;
		*(ebp_51 - 0x1C) = (void **) _decode_pointer(*(esp_47 - 0x04));
		*(esp_47 - 0x08) = globals->dw403388;
		*(ebp_51 - 0x20) = (void **) _decode_pointer(*(esp_47 - 0x08));
		*(esp_47 - 0x0C) = ebp_51 - 0x20;
		*(esp_47 - 0x10) = ebp_51 - 0x1C;
		*(esp_47 - 0x14) = ebp_51->dw0008;
		Eq_316 eax_84 = __dllonexit(*(esp_47 - 0x14), *(esp_47 - 0x10), *(esp_47 - 0x0C));
		*(ebp_51 - 0x24) = (_onexit_t *) eax_84;
		*(esp_47 - 0x18) = *(ebp_51 - 0x1C);
		ptr32 esp_90;
		word32 esi_91;
		word32 eax_92;
		word32 ecx_93;
		ptr32 ebp_94;
		byte SCZO_95;
		byte Z_96;
		byte SZO_97;
		byte C_98;
		word32 ebx_99;
		word32 edi_100;
		encode_pointer();
		globals->dw40338C = eax_92;
		*(esp_90 - 0x08) = *(ebp_94 - 0x20);
		word32 esp_106;
		word32 esi_107;
		word32 eax_108;
		word32 ecx_109;
		byte SCZO_111;
		byte Z_112;
		byte SZO_113;
		byte C_114;
		word32 ebx_115;
		word32 edi_116;
		encode_pointer();
		globals->dw403388 = eax_108;
		*(ebp_10 - 0x04) = ~0x01;
		fn0040167A();
		eax_122 = (Eq_316) *(ebp_10 - 0x24);
	}
	fn00401821(ebp_10, 0x14, dwArg00, dwArg04, dwArg08, dwArg0C);
	return eax_122;
}

// 0040167A: void fn0040167A()
void fn0040167A()
{
	word32 esp_4;
	word32 ecx_5;
	unlock();
	return;
}

// 00401683: void fn00401683(Register word32 ebx, Register word32 esi, Register word32 edi, Stack word32 dwArg04)
void fn00401683(word32 ebx, word32 esi, word32 edi, word32 dwArg04)
{
	fn004015E4(ebx, esi, edi);
	return;
}

// 00401695: void fn00401695()
void fn00401695()
{
	word32 * esi_12 = &globals->dw402158;
	if (false)
	{
		do
		{
			<anonymous> * eax_34 = *esi_12;
			if (eax_34 != null)
			{
				word32 esp_47;
				word32 edi_49;
				word32 eax_50;
				byte SCZO_51;
				byte C_52;
				byte SZO_53;
				byte Z_54;
				eax_34();
			}
			esi_12 = esi_12 + 0x01;
		} while (esi_12 < &globals->dw402158);
	}
	return;
	return;
}

// 004016F0: Register word32 fn004016F0(Stack word32 dwArg04)
word32 fn004016F0(word32 dwArg04)
{
	if (dwArg04->w0000 == 23117)
	{
		struct Eq_600 * eax_21 = dwArg04 + dwArg04->dw003C / 0x0040;
		if (eax_21->dw0000 == 0x4550)
			return (word32) (eax_21->w0018 == 0x010B);
	}
	return 0x00;
}

// 00401720: Register (ptr Eq_617) fn00401720(Stack word32 dwArg04, Stack word32 dwArg08)
Eq_617 * fn00401720(word32 dwArg04, word32 dwArg08)
{
	struct Eq_620 * ecx_6 = dwArg04 + dwArg04->dw003C / 0x0040;
	uint32 esi_14 = (word32) ecx_6->w0006;
	uint32 edx_15 = 0x00;
	struct Eq_617 * eax_22 = &(ecx_6 + ((word32) ecx_6->w0014 + 0x18) / 22)->w0006 + 0x03;
	if (true)
	{
		do
		{
			uint32 ecx_49 = eax_22->dw0000;
			if (dwArg08 >= ecx_49 && dwArg08 < eax_22->dw0008 + ecx_49)
				return eax_22;
			edx_15 = edx_15 + 0x01;
			eax_22 = eax_22 + 0x01;
		} while (edx_15 < esi_14);
	}
	eax_22 = null;
	return eax_22;
}

// 00401762: void fn00401762(Register word32 ebx, Register word32 esi, Register word32 edi)
void fn00401762(word32 ebx, word32 esi, word32 edi)
{
	struct Eq_317 * ebp_10 = fn004017DC(ebx, esi, edi, dwLoc0C, 4202920, 0x08);
	*(ebp_10 - 0x04) = *(ebp_10 - 0x04) & 0x00;
	*(fp - 0x0C) = 0x00400000;
	if (fn004016F0(dwArg00) != 0x00)
	{
		*(fp - 0x0C) = ebp_10->dw0008 - 0x00400000;
		*(fp - 0x10) = 0x00400000;
		if (fn00401720(dwArg00, dwArg04) != 0x00)
		{
			*(ebp_10 - 0x04) = ~0x01;
l004017C8:
			fn00401821(ebp_10, 0x08, dwArg00, dwArg04, dwArg08, dwArg0C);
			return;
		}
	}
	*(ebp_10 - 0x04) = ~0x01;
	goto l004017C8;
}

// 004017DC: Register ptr32 fn004017DC(Register word32 ebx, Register word32 esi, Register word32 edi, Stack word32 dwArg00, Stack word32 dwArg04, Stack word32 dwArg08)
ptr32 fn004017DC(word32 ebx, word32 esi, word32 edi, word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	ptr32 esp_14 = fp - 0x08 - dwArg08;
	*(esp_14 - 0x04) = ebx;
	*(esp_14 - 0x08) = esi;
	*(esp_14 - 0x0C) = edi;
	*(esp_14 - 0x10) = globals->dw403010 ^ fp + 0x08;
	*(esp_14 - 0x14) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 00401821: void fn00401821(Register (ptr Eq_317) ebp, Stack word32 dwArg00, Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10)
void fn00401821(Eq_317 * ebp, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	fs->dw0000 = *(ebp - 0x10);
	ebp->dw0000 = dwArg00;
	return;
}

// 00401858: void fn00401858(Register word32 eax)
void fn00401858(word32 eax)
{
	word32 esp_14;
	word32 esi_15;
	byte SZO_16;
	byte C_17;
	byte SCZO_18;
	word32 eax_19;
	byte Z_20;
	controlfp_s();
	if (eax_19 != 0x00)
	{
		*(fp - 0x0C) = 0x00;
		*(fp - 0x10) = 0x00;
		*(fp - 0x14) = 0x00;
		*(fp - 0x18) = 0x00;
		*(fp - 0x1C) = 0x00;
		_invoke_watson(*(fp - 0x1C), *(fp - 0x18), *(fp - 0x14), *(fp - 0x10), *(fp - 0x0C));
	}
	return;
}

// 00401881: void fn00401881()
void fn00401881()
{
	return;
}

// 00401884: void fn00401884()
void fn00401884()
{
	ui32 eax_8 = globals->dw403010;
	if (eax_8 != 0xBB40E64E && (eax_8 & 0xFFFF0000) != 0x00)
		globals->dw403014 = ~eax_8;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0C);
		ui32 esi_58 = dwLoc08 & 0x00 ^ dwLoc0C & 0x00 ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount();
		QueryPerformanceCounter(fp - 0x14);
		ui32 esi_68 = esi_58 ^ (dwLoc10 ^ dwLoc14);
		if (esi_68 == 0xBB40E64E)
			esi_68 = ~0x44BF19B0;
		else if ((esi_68 & 0xFFFF0000) == 0x00)
			esi_68 = esi_68 | esi_68 << 0x10;
		globals->dw403010 = esi_68;
		globals->dw403014 = ~esi_68;
	}
	return;
}

