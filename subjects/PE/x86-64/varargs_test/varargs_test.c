// varargs_test.c
// Generated by decompiling varargs_test.exe
// using Reko decompiler version 0.8.1.0.

#include "varargs_test.h"

// 0000000140001000: Register word64 fn0000000140001000(Register word64 rbx, Register word64 rsi, Register word64 rdi, Register out ptr64 rcxOut, Register out ptr64 rdxOut, Register out ptr64 r8Out, Register out ptr64 r9Out, Register out Eq_10 xmm0Out)
word64 fn0000000140001000(word64 rbx, word64 rsi, word64 rdi, ptr64 & rcxOut, ptr64 & rdxOut, ptr64 & r8Out, ptr64 & r9Out, union Eq_10 & xmm0Out)
{
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	ui64 rax_6 = globals->t40003000 ^ fp - 200;
	Eq_10 xmm0_10 = globals->t40002260;
	Eq_21 stackArg8 = <invalid>;
	Eq_21 stackArg16 = <invalid>;
	Eq_21 stackArg24 = <invalid>;
	Eq_21 stackArg32 = <invalid>;
	fn0000000140001140(rax_6, 0x140002210, 0x03, rbx, rsi, rdi, 0x140002250, 0x140002240, stackArg8, stackArg16, stackArg24, stackArg32);
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	Eq_21 stackArg8 = <invalid>;
	Eq_21 stackArg16 = <invalid>;
	Eq_21 stackArg24 = <invalid>;
	Eq_21 stackArg32 = <invalid>;
	ptr64 r9_43 = fn00000001400010D0(fp - 0x80, 0x140002228, fp - 0x7C, rbx, rsi, rdi, fp - 0x70, fp - 0x50, stackArg8, stackArg16, stackArg24, stackArg32);
	ptr64 r8_56;
	ptr64 rcx_58;
	ptr64 rdx_59;
	word64 rax_57 = fn00000001400011B0(rax_6 ^ fp - 200, rbx, rsi, rdi, qwLocD0, out rcx_58, out rdx_59, out r8_56);
	rcxOut = rcx_58;
	rdxOut = rdx_59;
	r8Out = r8_56;
	r9Out = r9_43;
	xmm0Out = xmm0_10;
	return rax_57;
}

// 00000001400010C0: Register ptr64 fn00000001400010C0()
ptr64 fn00000001400010C0()
{
	return 0x140003628;
}

// 00000001400010D0: Register ptr64 fn00000001400010D0(Register ptr64 rax, Register ptr64 rcx, Register ptr64 rdx, Register word64 rbx, Register word64 rsi, Register word64 rdi, Register ptr64 r8, Register ptr64 r9, Stack Eq_21 qwArg08, Stack Eq_21 qwArg10, Stack Eq_21 qwArg18, Stack Eq_21 qwArg20)
ptr64 fn00000001400010D0(ptr64 rax, ptr64 rcx, ptr64 rdx, word64 rbx, word64 rsi, word64 rdi, ptr64 r8, ptr64 r9, Eq_21 qwArg08, Eq_21 qwArg10, Eq_21 qwArg18, Eq_21 qwArg20)
{
	word64 rax_32;
	_acrt_iob_func();
	ui64 * rax_35 = fn00000001400010C0();
	ptr64 r9_47;
	_stdio_common_vfscanf();
	return r9_47;
}

// 0000000140001130: Register ptr64 fn0000000140001130()
ptr64 fn0000000140001130()
{
	return 0x140003620;
}

// 0000000140001140: void fn0000000140001140(Register ui64 rax, Register ptr64 rcx, Register uint64 rdx, Register word64 rbx, Register word64 rsi, Register word64 rdi, Register ptr64 r8, Register ptr64 r9, Stack Eq_21 qwArg08, Stack Eq_21 qwArg10, Stack Eq_21 qwArg18, Stack Eq_21 qwArg20)
void fn0000000140001140(ui64 rax, ptr64 rcx, uint64 rdx, word64 rbx, word64 rsi, word64 rdi, ptr64 r8, ptr64 r9, Eq_21 qwArg08, Eq_21 qwArg10, Eq_21 qwArg18, Eq_21 qwArg20)
{
	word64 rax_30;
	_acrt_iob_func();
	ui64 * rax_33 = fn0000000140001130();
	_stdio_common_vfprintf();
}

// 00000001400011B0: Register word64 fn00000001400011B0(Register Eq_13 rcx, Register word64 rbx, Register word64 rsi, Register word64 rdi, Stack word64 qwArg00, Register out Eq_85 rcxOut, Register out ptr64 rdxOut, Register out ptr64 r8Out)
word64 fn00000001400011B0(Eq_13 rcx, word64 rbx, word64 rsi, word64 rdi, word64 qwArg00, union Eq_85 & rcxOut, ptr64 & rdxOut, ptr64 & r8Out)
{
	if (rcx == globals->t40003000)
	{
		Eq_85 rcx_8 = __rol(rcx, 0x10);
		if (((word16) rcx_8 & ~0x00) == 0x00)
		{
			rcxOut = rcx_8;
			rdxOut = rdx;
			r8Out = r8;
			return rax;
		}
		rcx = __ror(rcx_8, 0x10);
	}
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	Eq_21 stackArg8 = <invalid>;
	ptr64 r8_25;
	Eq_85 rcx_27;
	ptr64 rdx_28;
	word64 rax_26 = fn000000014000147C(rcx, rbx, rsi, rdi, qwArg00, stackArg8, out rcx_27, out rdx_28, out r8_25);
	rcxOut = rcx_27;
	rdxOut = rdx_28;
	r8Out = r8_25;
	return rax_26;
}

// 00000001400011D4: void fn00000001400011D4(Register word64 rax, Register word64 rdx, Register word64 rbx, Register ptr64 rbp, Register word64 rsi, Register word64 rdi, Register ui64 r8, Register ptr64 r9, Register Eq_170 xmm0, Register Eq_171 xmm1)
void fn00000001400011D4(word64 rax, word64 rdx, word64 rbx, ptr64 rbp, word64 rsi, word64 rdi, ui64 r8, ptr64 r9, Eq_170 xmm0, Eq_171 xmm1)
{
	set_app_type();
	fn0000000140001920();
	_set_fmode(dwLoc28);
	int32 * rax_17 = __p__commode();
	*rax_17 = (word32) fn0000000140001ABC();
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	Eq_21 stackArg8 = <invalid>;
	word64 r8_34;
	word64 r9_35;
	ptr64 rbp_37;
	int32 * rbx_38;
	word64 rdx_40;
	word128 xmm0_42;
	word128 xmm1_43;
	Eq_201 rax_36 = fn000000014000164C(0x01, rdx, rax_17, rbp, r8, r9, xmm0, xmm1, stackArg8, out rdx_40, out rbx_38, out rbp_37, out r8_34, out r9_35, out xmm0_42, out xmm1_43);
	if ((byte) rax_36 != 0x00)
	{
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		Eq_21 stackArg8 = <invalid>;
		Eq_21 stackArg16 = <invalid>;
		fn0000000140001B5C(rbx_38, rsi, rdi, stackArg8, stackArg16);
		word64 rdx_72 = fn0000000140001854(rax_36, 0x140001BA8, rbx_38);
		word64 rax_77 = fn0000000140001918();
		word64 rax_81;
		word64 r8_82;
		word64 rdx_83;
		word64 r9_84;
		configure_narrow_argv();
		if ((word32) rax_81 == 0x00)
		{
			fn0000000140001928(qwLoc30);
			if ((word32) (word64) fn0000000140001958() != 0x00)
				__setusermatherr(&globals->t40001ABC);
			fn0000000140001DD0();
			fn0000000140001DD0();
			word64 rax_120 = fn0000000140001ABC();
			word64 rcx_129;
			word64 rax_130;
			word64 r8_133;
			word64 rdx_136;
			word64 r9_139;
			configthreadlocale();
			byte al_143 = fn0000000140001938();
			word64 rax_148 = DPB(rax_130, al_143, 0);
			if (al_143 != 0x00)
				initialize_narrow_environment();
			fn0000000140001ABC();
			return;
		}
	}
	else
	{
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		Eq_21 stackArg8 = <invalid>;
		fn0000000140001974(0x07, rbx_38, rbp_37, qwLoc30, stackArg8, qwLoc20, out rcx_210, out rdx_211, out r8_212);
		int3();
	}
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	Eq_21 stackArg8 = <invalid>;
	fn0000000140001974(0x07, rbx_38, rbp_37, qwLoc30, stackArg8, qwLoc20, out rcx_216, out rdx_217, out r8_218);
	int3();
	int3();
	fn0000000140001290();
}

// 0000000140001290: void fn0000000140001290()
void fn0000000140001290()
{
	fn000000014000193C();
}

// 00000001400012A0: void fn00000001400012A0()
void fn00000001400012A0()
{
	fn0000000140001B14(tLoc30);
	word64 rax_8 = fn0000000140001ABC();
	set_new_mode();
}

// 00000001400012BC: void fn00000001400012BC(Register word64 rax, Register ptr64 rdx, Register (ptr64 int32) rbx, Register ptr64 rbp, Register word64 rsi, Register word64 rdi, Register word64 r8, Register word64 r9, Register word128 xmm0, Stack Eq_21 qwArg08, Stack Eq_21 qwArg10)
void fn00000001400012BC(word64 rax, ptr64 rdx, int32 * rbx, ptr64 rbp, word64 rsi, word64 rdi, word64 r8, word64 r9, word128 xmm0, Eq_21 qwArg08, Eq_21 qwArg10)
{
	struct Eq_253 * rax_21 = DPB(rax, al, 0);
	fn0000000140001600(ecx, edx);
	if (al == 0x00)
	{
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		Eq_21 stackArg8 = <invalid>;
		rax_21 = fn0000000140001974(0x07, rbx, rbp, qwLoc40, stackArg8, qwLoc30, out rcx_325, out rdx, out r8);
		int3();
		al = (byte) rax_21;
	}
	fn00000001400015C4(gs);
	uint64 rcx_164 = (uint64) globals->dw400035B0;
	struct Eq_253 * rax_119 = DPB(rax_21, al, 0);
	word64 rsi_110 = DPB(rsi, 0x00, 0);
	byte bLoc18_265 = 0x00;
	int32 * rbx_42 = DPB(rbx, al, 0);
	word32 ecx_37 = (word32) rcx_164;
	if (ecx_37 == 0x01)
	{
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		Eq_21 stackArg8 = <invalid>;
		rax_119 = fn0000000140001974(0x07, rbx_42, rbp, qwLoc40, stackArg8, qwLoc30, out rcx_164, out rdx, out r8);
		ecx_37 = (word32) rcx_164;
	}
	Eq_427 rcx_163 = DPB(rcx_164, ecx_37, 0);
	if (ecx_37 == 0x00)
	{
		globals->dw400035B0 = 0x01;
		int32 eax_64 = _initterm_e(&globals->t400021B8, &globals->t400021D0);
		rax_119 = DPB(rax_119, eax_64, 0);
		if (eax_64 != 0x00)
			return;
		_initterm(&globals->t400021A0, &globals->t400021B0);
		globals->dw400035B0 = 0x02;
		rdx = 0x1400021B0;
		rcx_163.u1 = 0x1400021A0;
	}
	else
	{
		rsi_110 = DPB(rsi, 0x01, 0);
		bLoc18_265 = 0x01;
	}
	byte sil_227 = (byte) rsi_110;
	fn00000001400017B4(cl);
	fn0000000140001964();
	word64 rsi_231 = DPB(rsi_110, sil_227, 0);
	Eq_469 rcx_118 = DPB(rcx_163, al, 0);
	if (rax_119->t0000 != 0x00)
	{
		rax_119 = fn0000000140001718(rax_119, out rcx_118, out rdx, out r8, out r9);
		if ((byte) rax_119 != 0x00)
		{
			Eq_473 rbx_101 = rax_119->t0000;
			fn0000000140001BF4();
			rbx_101();
		}
	}
	struct Eq_253 * rax_134;
	fn000000014000196C();
	rax_134 = rax_119;
	if (rax_119->t0000 != 0x00)
	{
		rax_134 = fn0000000140001718(rax_119, out rcx_118, out rdx, out r8, out r9);
		if ((byte) rax_134 != 0x00)
			register_thread_local_exe_atexit_callback();
	}
	word64 rcx_167;
	word64 rax_169;
	word64 rdx_176;
	word64 r8_183;
	word64 r9_191;
	_p___argv();
	word64 rcx_194;
	word64 rax_195;
	word64 rdx_196;
	word64 r8_197;
	word64 r9_198;
	_p___argc();
	get_initial_narrow_environment();
	word64 r8_211;
	word64 r9_212;
	word64 rcx_214;
	word64 rdx_215;
	word128 xmm0_216;
	word64 rax_213 = fn0000000140001000(rax_195, rsi_110, rax_169, out rcx_214, out rdx_215, out r8_211, out r9_212, out xmm0_216);
	fn0000000140001AC0(rax);
	uint64 rbx_222 = (uint64) (word32) rax_213;
	word32 ebx_247 = (word32) rbx_222;
	if ((byte) rax_213 != 0x00)
	{
		if (sil_227 == 0x00)
			cexit();
		fn00000001400017D8(dl);
	}
	else
		exit((uint64) ebx_247);
}

// 0000000140001434: Register Eq_21 Win32CrtStartup()
Eq_21 Win32CrtStartup()
{
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	Eq_21 stackArg8 = <invalid>;
	Eq_21 stackArg28 = <invalid>;
	Eq_21 stackArg32 = <invalid>;
	word64 rax_6 = fn000000014000186C(stackArg8, qwLoc20, dwLoc18, stackArg28, stackArg32);
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	Eq_21 stackArg8 = <invalid>;
	Eq_21 stackArg16 = <invalid>;
	fn00000001400012BC(rax_6, rdx, rbx, rbp, rsi, rdi, r8, r9, xmm0, stackArg8, stackArg16);
	return <invalid>;
}

// 0000000140001448: Register Eq_21 fn0000000140001448(Stack Eq_606 tArg00, Stack Eq_21 tArg08)
Eq_21 fn0000000140001448(Eq_606 tArg00, Eq_21 tArg08)
{
	SetUnhandledExceptionFilter(tLoc28);
	UnhandledExceptionFilter(tLoc28);
	GetCurrentProcess();
	TerminateProcess(tArg00, tArg08);
	return <invalid>;
}

// 000000014000147C: Register word64 fn000000014000147C(Register Eq_13 rcx, Register word64 rbx, Register word64 rsi, Register word64 rdi, Stack word64 qwArg00, Stack Eq_21 qwArg08, Register out ptr64 rcxOut, Register out ptr64 rdxOut, Register out ptr64 r8Out)
word64 fn000000014000147C(Eq_13 rcx, word64 rbx, word64 rsi, word64 rdi, word64 qwArg00, Eq_21 qwArg08, ptr64 & rcxOut, ptr64 & rdxOut, ptr64 & r8Out)
{
	word32 dwLoc34_63 = SLICE(qwLoc38, word32, 32);
	word64 qwLoc38_64 = SEQ(dwLoc34_63, tLoc38);
	if (IsProcessorFeaturePresent(tLoc38) == 0x00)
	{
		fn0000000140001550(&globals->t400030E0, rbx, rsi, rdi, qwLoc38_64);
		globals->qw400031D8 = qwArg00;
		globals->ptr40003178 = fp + 0x08;
		globals->qw40003050 = globals->qw400031D8;
		globals->t40003160 = rcx;
		globals->dw40003040 = 0xC0000409;
		globals->dw40003044 = 0x01;
		globals->dw40003058 = 0x01;
		globals->qw40003060 = 0x02;
		word64 rax_71 = DPB(0x08, fn0000000140001448(tLoc40, tLoc38), 0);
		rcxOut = rcx_50;
		rdxOut = rdx_51;
		r8Out = r8_15;
		return rax_71;
	}
	else
		__fastfail(0x02);
}

// 0000000140001550: void fn0000000140001550(Register (ptr64 Eq_645) rcx, Register word64 rbx, Register word64 rsi, Register word64 rdi, Stack word64 qwArg08)
void fn0000000140001550(struct Eq_645 * rcx, word64 rbx, word64 rsi, word64 rdi, word64 qwArg08)
{
	RtlCaptureContext(tLoc58);
	Eq_692 rsi_15 = rcx->t00F8;
	uint64 rdi_16 = 0x00;
	do
	{
		word32 edi_53 = (word32) rdi_16;
		Eq_712 rax_25 = RtlLookupFunctionEntry(rsi_15, fp + 0x08, null);
		if (rax_25 == null)
			return;
		ui64 v16_30 = qwLoc20 & 0x00;
		KERNEL32.dll!RtlVirtualUnwind();
		rdi_16 = (uint64) (edi_53 + 0x01);
		qwLoc20 = v16_30;
	} while ((word32) rdi_16 < 0x02);
}

// 00000001400015C4: void fn00000001400015C4(Register (ptr32 Eq_399) gs)
void fn00000001400015C4(struct Eq_399 * gs)
{
	if ((word32) fn0000000140001DC4() != 0x00)
	{
		word64 rcx_17 = gs->ptr0030->qw0008;
		do
		{
			__lock();
			word64 rax_24;
			if (!__cmpxchg(globals->qw400035B8, rcx_17, 0x00, out rax_24))
				goto l00000001400015F2;
		} while (rcx_17 != rax_24);
	}
	else
	{
l00000001400015F2:
	}
}

// 0000000140001600: void fn0000000140001600(Register word32 ecx, Register word32 edx)
void fn0000000140001600(word32 ecx, word32 edx)
{
	byte al_15 = (byte) (word32) globals->b400035F0;
	if (ecx == 0x00)
		al_15 = 0x01;
	globals->b400035F0 = al_15;
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	Eq_21 stackArg8 = <invalid>;
	Eq_21 stackArg16 = <invalid>;
	Eq_21 stackArg24 = <invalid>;
	fn0000000140001BFC(edx, 0x01, stackArg8, stackArg16, stackArg24);
	if (fn0000000140001938() == 0x00)
		return;
	if (fn0000000140001938() != 0x00)
		return;
	fn0000000140001938();
}

// 000000014000164C: Register (ptr64 Eq_253) fn000000014000164C(Register up32 ecx, Register word64 rdx, Register (ptr64 int32) rbx, Register ptr64 rbp, Register ui64 r8, Register ptr64 r9, Register Eq_170 xmm0, Register Eq_171 xmm1, Stack Eq_21 qwArg08, Register out Eq_13 rdxOut, Register out (ptr64 int32) rbxOut, Register out ptr64 rbpOut, Register out Eq_216 r8Out, Register out ptr64 r9Out, Register out Eq_170 xmm0Out, Register out Eq_171 xmm1Out)
struct Eq_253 * fn000000014000164C(up32 ecx, word64 rdx, int32 * rbx, ptr64 rbp, ui64 r8, ptr64 r9, Eq_170 xmm0, Eq_171 xmm1, Eq_21 qwArg08, union Eq_13 & rdxOut, int32 & rbxOut, ptr64 & rbpOut, union Eq_216 & r8Out, ptr64 & r9Out, union Eq_170 & xmm0Out, union Eq_171 & xmm1Out)
{
	int32 * rbx_11 = (uint64) ecx;
	word32 ebx_42 = (word32) rbx_11;
	uint64 rbx_85 = DPB(rbx_11, ebx_42, 0);
	if (ecx > 0x01)
	{
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		Eq_21 stackArg8 = <invalid>;
		struct Eq_253 * rcx_18;
		fn0000000140001974(0x05, rbx_11, fp - 0x08, qwLoc50, stackArg8, qwLoc40, out rcx_18, out rdx_178, out r8_179);
		int3();
		int3();
		int3();
		int3();
		Eq_216 r8_24;
		Eq_13 rdx_27;
		ptr64 r9_28;
		struct Eq_253 * rax_25 = fn0000000140001718(rcx_18, out rcx_180, out rdx_27, out r8_24, out r9_28);
		rdxOut = rdx_27;
		rbxOut = rbx_11;
		rbpOut = fp - 0x08;
		r8Out = r8_24;
		r9Out = r9_28;
		xmm0Out = xmm0;
		xmm1Out = xmm1;
		return rax_25;
	}
	else
	{
		Eq_13 rdx_102;
		struct Eq_253 * rax_151;
		Eq_216 r8_103;
		word64 rax_33 = fn0000000140001DC4();
		if ((word32) rax_33 != 0x00 && ebx_42 == 0x00)
		{
			word64 rax_87;
			initialize_onexit_table();
			if ((word32) rax_87 != 0x00)
				rax_151 = DPB(rax_87, 0x00, 0);
			else
			{
				word64 rax_101;
				initialize_onexit_table();
				rax_151 = DPB(rax_101, (word32) rax_101 == 0x00, 0);
			}
		}
		else
		{
			rdx_102 = globals->t40003000;
			uint64 rax_55 = (uint64) ((word32) (uint64) (word32) rdx_102 & 0x3F);
			r8_103 = __ror(r8 | ~0x00, (byte) (uint64) (0x40 - (word32) rax_55)) ^ rdx_102;
			globals->t400035C0 = SEQ(r8_103, r8_103);
			globals->t400035D0 = r8_103;
			Eq_170 owLoc28_132 = SEQ(r8_103, r8_103);
			globals->t400035D8 = owLoc28_132;
			globals->t400035E8 = r8_103;
			rax_151 = DPB(rax_55, 0x01, 0);
			xmm0 = owLoc28_132;
			xmm1 = DPB(xmm1, r8_103, 0);
		}
		rdxOut = rdx_102;
		rbxOut = rbx;
		rbpOut = rbp;
		r8Out = r8_103;
		r9Out = r9;
		xmm0Out = xmm0;
		xmm1Out = xmm1;
		return rax_151;
	}
}

// 0000000140001718: Register uint64 fn0000000140001718(Register (ptr64 Eq_253) rcx, Register out (ptr64 Eq_253) rcxOut, Register out (ptr64 Eq_480) rdxOut, Register out (ptr64 Eq_253) r8Out, Register out (ptr64 Eq_480) r9Out)
uint64 fn0000000140001718(struct Eq_253 * rcx, struct Eq_253 & rcxOut, struct Eq_480 & rdxOut, struct Eq_253 & r8Out, struct Eq_480 & r9Out)
{
	uint64 rax_88;
	struct Eq_253 * r8_23 = rcx;
	union Eq_473 * rax_11 = (union Eq_473 *) 23117;
	if (globals->w40000000 == 23117)
	{
		rax_11 = (int64) globals->dw4000003C;
		rdx = &globals->w40000000;
		rcx = rax_11 + 0x0000000140000000;
		if (rcx->t0000 == 0x4550)
		{
			rax_11 = (union Eq_473 *) 0x020B;
			if (rcx->w0018 == 0x020B)
			{
				struct Eq_253 * rax_30 = DPB(0x020B, (word32) rcx->w0006, 0);
				rdx = rcx + 0x18 + DPB(0x020B, (word32) Mem0[rcx + 0x14:word16], 0);
				r8_23 = rcx - 0x140000000;
				rcx = rax_30 * 0x05;
				r9 = rdx + rax_30 * 0x28;
				for (; rdx != r9; rdx += 0x28)
				{
					rcx = (uint64) rdx->dw000C;
					word32 ecx_49 = (word32) rcx;
					rcx = DPB(rcx, ecx_49, 0);
					if (r8_23 >= rcx)
					{
						rax_30 = (uint64) ((word32) (uint64) rdx->dw0008 + ecx_49);
						if (r8_23 < rax_30)
							goto l000000014000178F;
					}
				}
				rdx = null;
l000000014000178F:
				if (rdx == null)
					rax_88 = DPB(rax_30, 0x00, 0);
				else if (rdx->dw0024 < 0x00)
					rax_88 = DPB(rax_30, 0x00, 0);
				else
					rax_88 = DPB(rax_30, 0x01, 0);
l00000001400017AC:
				rcxOut = rcx;
				rdxOut = rdx;
				r8Out = r8_23;
				r9Out = r9;
				return rax_88;
			}
		}
	}
	rax_88 = DPB(rax_11, 0x00, 0);
	goto l00000001400017AC;
}

// 00000001400017B4: void fn00000001400017B4(Register byte cl)
void fn00000001400017B4(byte cl)
{
	if ((word32) fn0000000140001DC4() != 0x00 && cl == 0x00)
		globals->qw400035B8 = 0x00;
}

// 00000001400017D8: void fn00000001400017D8(Register byte dl)
void fn00000001400017D8(byte dl)
{
	if (globals->b400035F0 == 0x00 || dl == 0x00)
	{
		fn0000000140001938();
		fn0000000140001938();
	}
}

// 0000000140001804: Register Eq_201 fn0000000140001804(Register Eq_201 rax, Register Eq_201 rcx, Register (ptr64 int32) rbx, Register out ptr64 rdxOut)
Eq_201 fn0000000140001804(Eq_201 rax, Eq_201 rcx, int32 * rbx, ptr64 & rdxOut)
{
	ptr64 rdx_22;
	word32 eax_33;
	Eq_13 rdx_7 = globals->t40003000;
	Eq_13 rdx_17 = __ror(rdx_7 ^ globals->t400035C0, (byte) (uint64) ((word32) (uint64) (word32) rdx_7 & 0x3F));
	if (rdx_17 == ~0x00)
	{
		word64 rax_30;
		crt_atexit();
		eax_33 = (word32) rax_30;
	}
	else
	{
		word64 rax_25;
		register_onexit_function();
		eax_33 = (word32) rax_25;
	}
	Eq_201 rcx_32 = 0x00;
	if (eax_33 == 0x00)
		rcx_32 = rcx;
	rdxOut = rdx_22;
	return rcx_32;
}

// 0000000140001854: Register word64 fn0000000140001854(Register Eq_201 rax, Register Eq_201 rcx, Register (ptr64 int32) rbx)
word64 fn0000000140001854(Eq_201 rax, Eq_201 rcx, int32 * rbx)
{
	word64 rdx_10;
	fn0000000140001804(rax, rcx, rbx, out rdx_10);
	return rdx_10;
}

// 000000014000186C: Register word64 fn000000014000186C(Stack Eq_21 qwArg08, Stack ui64 qwArg10, Stack Eq_586 qwArg18, Stack Eq_21 dwArg1C, Stack Eq_21 qwArg20)
word64 fn000000014000186C(Eq_21 qwArg08, ui64 qwArg10, Eq_586 qwArg18, Eq_21 dwArg1C, Eq_21 qwArg20)
{
	word32 dwArg1C_65 = SLICE(qwArg18, word32, 32);
	Eq_13 rax_14 = globals->t40003000;
	if (rax_14 == 769630770)
	{
		GetSystemTimeAsFileTime(tLoc28);
		ui64 v14_26 = qwArg10 & 0x00 ^ (uint64) GetCurrentThreadId() ^ (uint64) GetCurrentProcessId();
		QueryPerformanceCounter(tLoc28);
		ui64 rax_35 = (uint64) dwArg18 << 0x20 ^ SEQ(dwArg1C_65, dwArg18) ^ v14_26 ^ fp + 0x08;
		rax_14 = rax_35 & 0xFFFFFFFF;
		if ((rax_35 & 0xFFFFFFFF) == 769630770)
			rax_14.u0 = 769630771;
		globals->t40003000 = rax_14;
	}
	word64 rax_49 = ~rax_14;
	globals->qw40003008 = rax_49;
	return rax_49;
}

// 0000000140001918: Register uint64 fn0000000140001918()
uint64 fn0000000140001918()
{
	return 0x01;
}

// 0000000140001920: void fn0000000140001920()
void fn0000000140001920()
{
}

// 0000000140001928: void fn0000000140001928(Stack Eq_238 tArg00)
void fn0000000140001928(Eq_238 tArg00)
{
	InitializeSListHead(tArg00);
}

// 0000000140001938: Register byte fn0000000140001938()
byte fn0000000140001938()
{
	return 0x01;
}

// 000000014000193C: void fn000000014000193C()
void fn000000014000193C()
{
	ui64 * rax_5 = fn0000000140001130();
	*rax_5 |= 0x04;
	ui64 * rax_11 = fn00000001400010C0();
	*rax_11 |= 0x02;
}

// 0000000140001958: Register word32 fn0000000140001958()
word32 fn0000000140001958()
{
	return (word32) (uint64) (globals->dw40003014 == 0x00);
}

// 0000000140001964: void fn0000000140001964()
void fn0000000140001964()
{
}

// 000000014000196C: void fn000000014000196C()
void fn000000014000196C()
{
}

// 0000000140001974: Register Eq_1127 fn0000000140001974(Register word32 ecx, Register (ptr64 int32) rbx, Register ptr64 rbp, Stack Eq_238 qwArg00, Stack Eq_21 qwArg08, Stack word64 qwArg10, Register out Eq_241 rcxOut, Register out Eq_242 rdxOut, Register out Eq_243 r8Out)
Eq_1127 fn0000000140001974(word32 ecx, int32 * rbx, ptr64 rbp, Eq_238 qwArg00, Eq_21 qwArg08, word64 qwArg10, union Eq_241 & rcxOut, union Eq_242 & rdxOut, union Eq_243 & r8Out)
{
	word32 dwLoc05C4_106 = SLICE(ptrLoc05C8, word32, 32);
	word32 ebx_99 = (word32) (uint64) ecx;
	Eq_353 ptrLoc05C8_107 = SEQ(dwLoc05C4_106, tLoc05C8);
	word32 dwLoc05C4_110 = SLICE(ptrLoc05C8_107, word32, 32);
	word32 dwLoc05C4_119 = SLICE(ptrLoc05C8_107, word32, 32);
	word32 dwLoc05C4_125 = SLICE(ptrLoc05C8_107, word32, 32);
	if (IsProcessorFeaturePresent(tLoc05C8) == 0x00)
	{
		globals->dw40003610 &= 0x00;
		memset(ptrLoc05C8_107, dwLoc05C0, tLoc05B8);
		RtlCaptureContext(SEQ(dwLoc05C4_110, tLoc05C8));
		Eq_712 rax_27 = RtlLookupFunctionEntry(qwLoc03E0, fp + 0x10, null);
		Eq_353 ptrLoc05C8_124 = SEQ(dwLoc05C4_125, tLoc05C8);
		if (rax_27 != null)
		{
			KERNEL32.dll!RtlVirtualUnwind();
			ptrLoc05C8_124 = SEQ(dwLoc05C4_119, tLoc05C8);
		}
		memset(ptrLoc05C8_124, dwLoc05C0, tLoc05B8);
		Eq_624 eax_69 = IsDebuggerPresent();
		SetUnhandledExceptionFilter(ptrLoc05C8_124);
		Eq_616 eax_80 = UnhandledExceptionFilter(ptrLoc05C8_124);
		Eq_1127 rax_145 = DPB(fp - 0x04D8, eax_80, 0);
		if (eax_80 == 0x00)
		{
			rax_145.u0 = (uint64) (0x00 - (-(eax_69 == 0x01) == 0x00));
			globals->dw40003610 &= (word32) rax_145;
		}
		rcxOut = fp - 0x0588;
		rdxOut.u0 = 0x00;
		r8Out.u0 = 0x98;
		return rax_145;
	}
	else
		__fastfail((word32) (uint64) ebx_99);
}

// 0000000140001ABC: Register uint64 fn0000000140001ABC()
uint64 fn0000000140001ABC()
{
	return 0x00;
}

// 0000000140001AC0: void fn0000000140001AC0(Register word64 rax)
void fn0000000140001AC0(word64 rax)
{
	struct Eq_1220 * rax_8 = DPB(rax, GetModuleHandleW(tLoc28), 0);
	if (rax_8 == null || rax_8->w0000 != 23117)
		return;
	struct Eq_1234 * rax_18 = rax_8 + (int64) rax_8->dw003C / 0x0040;
	if (rax_18->dw0000 != 0x4550 || (rax_18->w0018 != 0x020B || rax_18->dw0084 <= 0x0E))
		;
}

// 0000000140001B14: void fn0000000140001B14(Stack Eq_353 tArg00)
void fn0000000140001B14(Eq_353 tArg00)
{
	SetUnhandledExceptionFilter(tArg00);
}

// 0000000140001B24: void fn0000000140001B24(Register (ptr64 (ptr64 Eq_1261)) rcx, Register (ptr64 int32) rbx, Register word64 rsi, Register word64 rdi)
void fn0000000140001B24(struct Eq_1261 ** rcx, int32 * rbx, word64 rsi, word64 rdi)
{
	struct Eq_1261 * rax_6 = *rcx;
	if (rax_6->dw0000 != ~0x1F928C9C || rax_6->dw0018 != 0x04)
		return;
	uint64 rcx_11 = (uint64) rax_6->dw0020;
	word32 ecx_15 = (word32) rcx_11;
	rcx_11 = DPB(rcx_11, ecx_15, 0);
	struct Eq_1283 * rax_20 = DPB(rax_6, rcx_11 + ~0x1993051F, 0);
	if (rcx_11 > ~0x19930521 && ecx_15 != 0x01994000)
		return;
	api-ms-win-crt-runtime-l1-1-0.dll!terminate();
	int3();
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	Eq_21 stackArg8 = <invalid>;
	Eq_21 stackArg16 = <invalid>;
	fn0000000140001B5C(rbx, rsi, rdi, stackArg8, stackArg16);
}

// 0000000140001B5C: void fn0000000140001B5C(Register (ptr64 int32) rbx, Register word64 rsi, Register word64 rdi, Stack Eq_21 qwArg08, Stack Eq_21 qwArg10)
void fn0000000140001B5C(int32 * rbx, word64 rsi, word64 rdi, Eq_21 qwArg08, Eq_21 qwArg10)
{
	word64 * rbx_12;
	for (rbx_12 = &globals->qw40002680; rbx_12 < &globals->qw40002680; ++rbx_12)
	{
		<anonymous> * rdi_19 = *rbx_12;
		if (rdi_19 != null)
		{
			fn0000000140001BF4();
			rdi_19();
		}
	}
}

// 0000000140001BA8: void fn0000000140001BA8(Register word64 rbx, Register word64 rsi, Register word64 rdi, Stack word64 qwArg08, Stack word64 qwArg10)
void fn0000000140001BA8(word64 rbx, word64 rsi, word64 rdi, word64 qwArg08, word64 qwArg10)
{
	word64 * rbx_12;
	for (rbx_12 = &globals->qw40002690; rbx_12 < &globals->qw40002690; ++rbx_12)
	{
		<anonymous> * rdi_19 = *rbx_12;
		if (rdi_19 != null)
		{
			fn0000000140001BF4();
			rdi_19();
		}
	}
}

// 0000000140001BF4: void fn0000000140001BF4()
void fn0000000140001BF4()
{
	globals->ptr40002190();
}

// 0000000140001BFC: void fn0000000140001BFC(Register word32 edx, Register Eq_768 ebx, Stack Eq_21 qwArg08, Stack Eq_21 qwArg10, Stack Eq_21 qwArg18)
void fn0000000140001BFC(word32 edx, Eq_768 ebx, Eq_21 qwArg08, Eq_21 qwArg10, Eq_21 qwArg18)
{
	word32 ebx_137 = (word32) rbx;
	globals->dw4000301C = 0x02;
	__cpuid(0x00, 0x00, &0x00, &ebx_137, &0x00, &edx);
	globals->dw40003018 = 0x01;
	rdx_163 = (uint64) ((word32) (uint64) ebx_137 ^ 1970169159);
	ui32 edx_52 = (word32) rdx_163;
	ui32 r8d_108 = (word32) (uint64) globals->dw40003614;
	__cpuid(0x01, 0x00, &0x01, &ebx_137, &0x00, &edx_52);
	byte bLoc20_235 = SLICE(dwLoc20 & 0x00, byte, 0);
	bLoc20_235 = SLICE(dwLoc20 & 0x00, byte, 0);
	word32 r11d_96 = (word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ebx_137 ^ 1752462657) | (word32) ((uint64) ((word32) ((uint64) edx) ^ 0x69746E65))) | 0x444D4163);
	uint64 rdx_163 = DPB(rdx_163, edx_52, 0);
	rdx_163 = DPB(rdx_163, edx_52, 0);
	rdx_163 = DPB(rdx_163, edx_52, 0);
	rdx_163 = DPB(rdx_163, edx_52, 0);
	rdx_163 = DPB(rdx_163, edx_52, 0);
	rdx_163 = DPB(rdx_163, edx_52, 0);
	uint64 rdx_162 = DPB(rdx_163, edx_52, 0);
	rdx_162 = DPB(rdx_163, edx_52, 0);
	rdx_162 = DPB(rdx_163, edx_52, 0);
	uint64 rdx_161 = DPB(rdx_162, edx_52, 0);
	rdx_161 = DPB(rdx_162, edx_52, 0);
	if ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) edx ^ 0x49656E69) | 1818588270) | edx_52) == 0x00)
	{
		globals->qw40003020 |= ~0x00;
		r8d_108 = (word32) (uint64) (r8d_108 | 0x04);
		globals->dw40003614 = r8d_108;
		if (~0x000106BF == 0x00 || (~0x0002065F == 0x00 || ~0x0002066F == 0x00))
		{
l0000000140001CDE:
			r8d_108 = (word32) (uint64) (r8d_108 | 0x01);
			globals->dw40003614 = r8d_108;
			goto l0000000140001CE9;
		}
		if (true)
		{
			ebx_137 = 0x00010001;
			if (!__bt(0x00010001, 0xFFFCF9B0))
				goto l0000000140001CDE;
		}
	}
l0000000140001CE9:
	if (r11d_96 == 0x00 && true)
	{
		r8d_108 = (word32) (uint64) (r8d_108 | 0x04);
		globals->dw40003614 = r8d_108;
	}
	if (false)
	{
		__cpuid(0x07, 0x00, &0x07, &ebx_137, &0x00, &edx_52);
		bLoc20_235 = SLICE(ebx_137, byte, 0);
		bLoc20_235 = SLICE(ebx_137, byte, 0);
		if (!__bt(ebx_137, 0x09))
			globals->dw40003614 = (word32) (uint64) (r8d_108 | 0x02);
	}
	if (!__bt(0x00, 0x14))
	{
		globals->dw40003018 = 0x02;
		globals->dw4000301C = 0x06;
		if (!__bt(0x00, 0x1B) && !__bt(0x00, 0x1C))
		{
			word64 edx_eax_160 = __xgetbv(0x00);
			if (((byte) (DPB(rdx_161, edx_eax_160, 0) << 0x20 | DPB(0x07, edx_eax_160, 0)) & 0x06) == 0x06)
			{
				ui32 eax_195 = (word32) (uint64) ((word32) (uint64) globals->dw4000301C | 0x08);
				globals->dw40003018 = 0x03;
				globals->dw4000301C = eax_195;
				if ((bLoc20_235 & 0x20) != 0x00)
				{
					globals->dw40003018 = 0x05;
					globals->dw4000301C = (word32) (uint64) (eax_195 | 0x20);
				}
			}
		}
	}
}

// 0000000140001DC4: Register uint64 fn0000000140001DC4()
uint64 fn0000000140001DC4()
{
	return (uint64) (globals->dw40003030 != 0x00);
}

// 0000000140001DD0: void fn0000000140001DD0()
void fn0000000140001DD0()
{
}

// 0000000140001E7C: void fn0000000140001E7C(Register int64 rdx, Register word64 rbx, Register word64 rsi, Register word64 rdi, Register (ptr64 Eq_1580) r9)
void fn0000000140001E7C(int64 rdx, word64 rbx, word64 rsi, word64 rdi, struct Eq_1580 * r9)
{
	fn0000000140001E9C(rdx, r9, rbx, rsi, rdi, r9->ptr0038, qwLoc30);
}

// 0000000140001E9C: void fn0000000140001E9C(Register int64 rcx, Register (ptr64 Eq_1580) rdx, Register word64 rbx, Register word64 rsi, Register word64 rdi, Register (ptr64 Eq_1588) r8, Stack word64 qwArg00)
void fn0000000140001E9C(int64 rcx, struct Eq_1580 * rdx, word64 rbx, word64 rsi, word64 rdi, struct Eq_1588 * r8, word64 qwArg00)
{
	word32 r11d_29 = (word32) (uint64) ((word32) (uint64) r8->dw0000 & ~0x07);
	int64 r9_13 = rcx;
	int64 r10_16 = rcx;
	if ((r8->dw0000 & 0x04) != 0x00)
		r10_16 = (int64) r8->dw0004 + rcx & (int64) ((word32) ((uint64) (-((word32) ((uint64) r8->dw0008)))));
	word64 rdx_33 = (int64) r11d_29 + r10_16;
	struct Eq_1618 * rcx_37 = (uint64) rdx->ptr0010->dw0008 + rdx->qw0008;
	if ((rcx_37->b0003 & 0x0F) != 0x00)
		r9_13 = rcx + (uint64) ((word32) rcx_37->b0003 & ~0x0F);
	Eq_13 r9_48 = r9_13 ^ rdx_33;
	fn00000001400011B0(r9_48, rbx, rsi, rdi, qwArg00, out rcx_82, out rdx_83, out r8_84);
}

// 0000000140001F10: void fn0000000140001F10(Register (ptr64 code) rax)
void fn0000000140001F10(<anonymous> * rax)
{
	rax();
}

// 0000000140001F12: void fn0000000140001F12(Register (ptr64 word64) rcx, Register word64 rdx, Register word64 rbp)
void fn0000000140001F12(word64 * rcx, word64 rdx, word64 rbp)
{
	word64 rax_11 = *rcx;
	seh_filter_exe();
}

// 0000000140001F30: void fn0000000140001F30(Register word64 rcx)
void fn0000000140001F30(word64 rcx)
{
}

