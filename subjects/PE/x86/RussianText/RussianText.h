// RussianText.h
// Generated by decompiling RussianText.exe
// using Reko decompiler version 0.8.0.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (40208B uint32 dw40208B) (4020A4 char b4020A4) (4020F8 word32 dw4020F8))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: (fn void ((ptr32 Eq_4)))
	T_2 (in fn004011FC : ptr32)
	T_3 (in signature of fn004011FC : void)
	T_146 (in fn004011FC : ptr32)
Eq_4: (struct "Eq_4" (0 word32 dw0000) (4 ptr32 ptr0004))
	T_4 (in dwArg04 : (ptr32 Eq_4))
	T_5 (in dwArg04 : word32)
	T_148 (in fp - 0x0000000C : word32)
Eq_33: (fn Eq_35 ())
	T_33 (in GetProcessHeap : ptr32)
	T_34 (in signature of GetProcessHeap : void)
Eq_35: HANDLE
	T_35 (in GetProcessHeap() : HANDLE)
	T_40 (in Mem35[esp_19 - 0x0000000C + 0x00000000:word32] : word32)
	T_44 (in hHeap : HANDLE)
	T_50 (in Mem35[esp_19 - 0x0000000C + 0x00000000:HANDLE] : HANDLE)
Eq_41: BOOL
	T_41 (in eax_36 : Eq_41)
	T_61 (in HeapFree(*(esp_19 - 0x0000000C), *(esp_19 - 0x00000008), *(esp_19 - 0x00000004)) : BOOL)
Eq_42: (fn Eq_41 (Eq_35, Eq_45, Eq_46))
	T_42 (in HeapFree : ptr32)
	T_43 (in signature of HeapFree : void)
Eq_45: DWORD
	T_45 (in dwFlags : DWORD)
	T_55 (in Mem35[esp_19 - 0x00000008 + 0x00000000:DWORD] : DWORD)
Eq_46: LPVOID
	T_46 (in lpMem : LPVOID)
	T_60 (in Mem35[esp_19 - 0x00000004 + 0x00000000:LPVOID] : LPVOID)
Eq_78: (segment "Eq_78" (2C (ptr32 (arr word32)) ptr002C))
	T_78 (in fs : selector)
Eq_89: (fn int32 ((ptr32 char)))
	T_89 (in printf : ptr32)
	T_90 (in signature of printf : void)
Eq_106: size_t
	T_106 (in 0x0000009C : word32)
	T_109 (in Mem31[esp_30 + 0x00000000:word32] : word32)
	T_127 (in _Size : size_t)
	T_139 (in Mem37[esp_30 + 0x00000000:size_t] : size_t)
Eq_115: (fn word32 ())
	T_115 (in fn00401158 : ptr32)
	T_116 (in signature of fn00401158 : void)
	T_153 (in fn00401158 : ptr32)
Eq_123: (fn (ptr32 void) ((ptr32 void), (ptr32 void), Eq_106))
	T_123 (in memcpy : ptr32)
	T_124 (in signature of memcpy : void)
Eq_141: (fn void ())
	T_141 (in _InitTermAndUnexPtrs : ptr32)
	T_142 (in signature of _InitTermAndUnexPtrs : void)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in fn004011FC : ptr32)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (fn T_6 (T_5)))
T_3: (in signature of fn004011FC : void)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: 
T_4: (in dwArg04 : (ptr32 Eq_4))
  Class: Eq_4
  DataType: (ptr32 Eq_4)
  OrigDataType: (ptr32 (struct (0 T_162 t0000) (4 T_166 t0004)))
T_5: (in dwArg04 : word32)
  Class: Eq_4
  DataType: (ptr32 Eq_4)
  OrigDataType: word32
T_6: (in fn004011FC(dwArg04) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in eax : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in 0x0040208B : ptr32)
  Class: Eq_8
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_9 t0000)))
T_9: (in Mem0[0x0040208B:word32] : word32)
  Class: Eq_9
  DataType: uint32
  OrigDataType: up32
T_10: (in 0x00000000 : word32)
  Class: Eq_9
  DataType: uint32
  OrigDataType: up32
T_11: (in globals->dw40208B < 0x00000000 : bool)
  Class: Eq_11
  DataType: bool
  OrigDataType: bool
T_12: (in esp_19 : ptr32)
  Class: Eq_12
  DataType: ptr32
  OrigDataType: ptr32
T_13: (in SCZO_20 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in C_21 : bool)
  Class: Eq_14
  DataType: bool
  OrigDataType: bool
T_15: (in eax_22 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in SZO_23 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in Z_24 : bool)
  Class: Eq_17
  DataType: bool
  OrigDataType: bool
T_18: (in __CRTL_TLS_GetValue : ptr32)
  Class: Eq_18
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_19: (in signature of __CRTL_TLS_GetValue : void)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: 
T_20: (in 0x00000000 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_21: (in eax_22 == 0x00000000 : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_22: (in 0x00000004 : word32)
  Class: Eq_22
  DataType: ui32
  OrigDataType: ui32
T_23: (in esp_19 - 0x00000004 : word32)
  Class: Eq_23
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_26 t0000)))
T_24: (in 0x00000000 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in esp_19 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in Mem30[esp_19 - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_27: (in 0x00000008 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in 0x00000008 : word32)
  Class: Eq_28
  DataType: ui32
  OrigDataType: ui32
T_29: (in esp_19 - 0x00000008 : word32)
  Class: Eq_29
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_32 t0000)))
T_30: (in 0x00000000 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in esp_19 - 0x00000008 + 0x00000000 : word32)
  Class: Eq_31
  DataType: ptr32
  OrigDataType: ptr32
T_32: (in Mem32[esp_19 - 0x00000008 + 0x00000000:word32] : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_33: (in GetProcessHeap : ptr32)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: (ptr32 (fn T_35 ()))
T_34: (in signature of GetProcessHeap : void)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: 
T_35: (in GetProcessHeap() : HANDLE)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: HANDLE
T_36: (in 0x0000000C : word32)
  Class: Eq_36
  DataType: ui32
  OrigDataType: ui32
T_37: (in esp_19 - 0x0000000C : word32)
  Class: Eq_37
  DataType: (ptr32 Eq_35)
  OrigDataType: (ptr32 (struct (0 T_40 t0000)))
T_38: (in 0x00000000 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in esp_19 - 0x0000000C + 0x00000000 : word32)
  Class: Eq_39
  DataType: ptr32
  OrigDataType: ptr32
T_40: (in Mem35[esp_19 - 0x0000000C + 0x00000000:word32] : word32)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: word32
T_41: (in eax_36 : Eq_41)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: BOOL
T_42: (in HeapFree : ptr32)
  Class: Eq_42
  DataType: (ptr32 Eq_42)
  OrigDataType: (ptr32 (fn T_61 (T_50, T_55, T_60)))
T_43: (in signature of HeapFree : void)
  Class: Eq_42
  DataType: (ptr32 Eq_42)
  OrigDataType: 
T_44: (in hHeap : HANDLE)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: 
T_45: (in dwFlags : DWORD)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: 
T_46: (in lpMem : LPVOID)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: 
T_47: (in esp_19 - 0x0000000C : word32)
  Class: Eq_47
  DataType: (ptr32 Eq_35)
  OrigDataType: (ptr32 (struct (0 T_50 t0000)))
T_48: (in 0x00000000 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in esp_19 - 0x0000000C + 0x00000000 : word32)
  Class: Eq_49
  DataType: ptr32
  OrigDataType: ptr32
T_50: (in Mem35[esp_19 - 0x0000000C + 0x00000000:HANDLE] : HANDLE)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: HANDLE
T_51: (in 0x00000008 : word32)
  Class: Eq_51
  DataType: ui32
  OrigDataType: ui32
T_52: (in esp_19 - 0x00000008 : word32)
  Class: Eq_52
  DataType: (ptr32 Eq_45)
  OrigDataType: (ptr32 (struct (0 T_55 t0000)))
T_53: (in 0x00000000 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in esp_19 - 0x00000008 + 0x00000000 : word32)
  Class: Eq_54
  DataType: ptr32
  OrigDataType: ptr32
T_55: (in Mem35[esp_19 - 0x00000008 + 0x00000000:DWORD] : DWORD)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: DWORD
T_56: (in 0x00000004 : word32)
  Class: Eq_56
  DataType: ui32
  OrigDataType: ui32
T_57: (in esp_19 - 0x00000004 : word32)
  Class: Eq_57
  DataType: (ptr32 Eq_46)
  OrigDataType: (ptr32 (struct (0 T_60 t0000)))
T_58: (in 0x00000000 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in esp_19 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_59
  DataType: ptr32
  OrigDataType: ptr32
T_60: (in Mem35[esp_19 - 0x00000004 + 0x00000000:LPVOID] : LPVOID)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: LPVOID
T_61: (in HeapFree(*(esp_19 - 0x0000000C), *(esp_19 - 0x00000008), *(esp_19 - 0x00000004)) : BOOL)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: BOOL
T_62: (in 0x0040208B : ptr32)
  Class: Eq_62
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_63 t0000)))
T_63: (in Mem35[0x0040208B:word32] : word32)
  Class: Eq_9
  DataType: uint32
  OrigDataType: word32
T_64: (in 0x00000004 : word32)
  Class: Eq_64
  DataType: ui32
  OrigDataType: ui32
T_65: (in esp_19 - 0x00000004 : word32)
  Class: Eq_65
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_68 t0000)))
T_66: (in 0x00000000 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in esp_19 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_67
  DataType: ptr32
  OrigDataType: ptr32
T_68: (in Mem40[esp_19 - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_9
  DataType: uint32
  OrigDataType: word32
T_69: (in esp_41 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in SCZO_42 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in C_43 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in eax_44 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in SZO_45 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in Z_46 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in __CRTL_TLS_ExitThread : ptr32)
  Class: Eq_75
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_76: (in signature of __CRTL_TLS_ExitThread : void)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: 
T_77: (in eax : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in fs : selector)
  Class: Eq_78
  DataType: (ptr16 Eq_78)
  OrigDataType: (ptr16 (segment (2C T_80 t002C)))
T_79: (in 0x002C : word16)
  Class: Eq_79
  DataType: (memptr (ptr16 Eq_78) (ptr32 (arr word32)))
  OrigDataType: (memptr T_78 (struct (0 T_80 t0000)))
T_80: (in Mem0[fs:0x002C:word32] : word32)
  Class: Eq_80
  DataType: (ptr32 (arr word32))
  OrigDataType: (ptr32 (struct (0 (arr T_167) a0000)))
T_81: (in 0x0040208B : ptr32)
  Class: Eq_81
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_82 t0000)))
T_82: (in Mem0[0x0040208B:word32] : word32)
  Class: Eq_9
  DataType: uint32
  OrigDataType: ui32
T_83: (in 0x00000004 : word32)
  Class: Eq_83
  DataType: ui32
  OrigDataType: ui32
T_84: (in globals->dw40208B * 0x00000004 : word32)
  Class: Eq_84
  DataType: ui32
  OrigDataType: ui32
T_85: (in Mem0[fs:0x002C:word32][Mem0[0x0040208B:word32] * 0x00000004] : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_86: (in eax : int32)
  Class: Eq_86
  DataType: int32
  OrigDataType: int32
T_87: (in argc : int32)
  Class: Eq_87
  DataType: int32
  OrigDataType: int32
T_88: (in argv : (ptr32 (ptr32 char)))
  Class: Eq_88
  DataType: (ptr32 (ptr32 char))
  OrigDataType: (ptr32 (ptr32 char))
T_89: (in printf : ptr32)
  Class: Eq_89
  DataType: (ptr32 Eq_89)
  OrigDataType: (ptr32 (fn T_93 (T_92)))
T_90: (in signature of printf : void)
  Class: Eq_89
  DataType: (ptr32 Eq_89)
  OrigDataType: 
T_91: (in ptrArg04 : (ptr32 char))
  Class: Eq_91
  DataType: (ptr32 char)
  OrigDataType: 
T_92: (in 0x004020A4 : word32)
  Class: Eq_91
  DataType: (ptr32 char)
  OrigDataType: (ptr32 char)
T_93: (in printf(&globals->b4020A4) : int32)
  Class: Eq_93
  DataType: int32
  OrigDataType: int32
T_94: (in 0x00000000 : word32)
  Class: Eq_86
  DataType: int32
  OrigDataType: word32
T_95: (in dwArg04 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in esp_29 : ptr32)
  Class: Eq_96
  DataType: ptr32
  OrigDataType: ptr32
T_97: (in fp : ptr32)
  Class: Eq_97
  DataType: ptr32
  OrigDataType: ptr32
T_98: (in 0xFFFFFFF0 : word32)
  Class: Eq_98
  DataType: int32
  OrigDataType: int32
T_99: (in fp + 0xFFFFFFF0 : word32)
  Class: Eq_96
  DataType: ptr32
  OrigDataType: ptr32
T_100: (in ebx_11 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_101: (in 0x00000000 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_102: (in dwArg04 != 0x00000000 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in esp_30 : (ptr32 Eq_106))
  Class: Eq_103
  DataType: (ptr32 Eq_106)
  OrigDataType: (ptr32 (struct (0 T_106 t0000)))
T_104: (in 0x00000004 : word32)
  Class: Eq_104
  DataType: ui32
  OrigDataType: ui32
T_105: (in esp_29 - 0x00000004 : word32)
  Class: Eq_103
  DataType: (ptr32 Eq_106)
  OrigDataType: ptr32
T_106: (in 0x0000009C : word32)
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: word32
T_107: (in 0x00000000 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in esp_30 + 0x00000000 : word32)
  Class: Eq_108
  DataType: ptr32
  OrigDataType: ptr32
T_109: (in Mem31[esp_30 + 0x00000000:word32] : word32)
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: word32
T_110: (in 0x00000004 : word32)
  Class: Eq_110
  DataType: ui32
  OrigDataType: ui32
T_111: (in esp_30 - 0x00000004 : word32)
  Class: Eq_111
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_114 t0000)))
T_112: (in 0x00000000 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in esp_30 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_113
  DataType: ptr32
  OrigDataType: ptr32
T_114: (in Mem33[esp_30 - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_115: (in fn00401158 : ptr32)
  Class: Eq_115
  DataType: (ptr32 Eq_115)
  OrigDataType: (ptr32 (fn T_117 ()))
T_116: (in signature of fn00401158 : void)
  Class: Eq_115
  DataType: (ptr32 Eq_115)
  OrigDataType: 
T_117: (in fn00401158() : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in 0x00000008 : word32)
  Class: Eq_118
  DataType: ui32
  OrigDataType: ui32
T_119: (in esp_30 - 0x00000008 : word32)
  Class: Eq_119
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_122 t0000)))
T_120: (in 0x00000000 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in esp_30 - 0x00000008 + 0x00000000 : word32)
  Class: Eq_121
  DataType: ptr32
  OrigDataType: ptr32
T_122: (in Mem37[esp_30 - 0x00000008 + 0x00000000:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_123: (in memcpy : ptr32)
  Class: Eq_123
  DataType: (ptr32 Eq_123)
  OrigDataType: (ptr32 (fn T_140 (T_131, T_136, T_139)))
T_124: (in signature of memcpy : void)
  Class: Eq_123
  DataType: (ptr32 Eq_123)
  OrigDataType: 
T_125: (in _Dst : (ptr32 void))
  Class: Eq_125
  DataType: (ptr32 void)
  OrigDataType: 
T_126: (in _Src : (ptr32 void))
  Class: Eq_126
  DataType: (ptr32 void)
  OrigDataType: 
T_127: (in _Size : size_t)
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: 
T_128: (in esp_30 - 0x00000008 : word32)
  Class: Eq_128
  DataType: (ptr32 (ptr32 void))
  OrigDataType: (ptr32 (struct (0 T_131 t0000)))
T_129: (in 0x00000000 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in esp_30 - 0x00000008 + 0x00000000 : word32)
  Class: Eq_130
  DataType: ptr32
  OrigDataType: ptr32
T_131: (in Mem37[esp_30 - 0x00000008 + 0x00000000:(ptr32 void)] : (ptr32 void))
  Class: Eq_125
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_132: (in 0x00000004 : word32)
  Class: Eq_132
  DataType: ui32
  OrigDataType: ui32
T_133: (in esp_30 - 0x00000004 : word32)
  Class: Eq_133
  DataType: (ptr32 (ptr32 void))
  OrigDataType: (ptr32 (struct (0 T_136 t0000)))
T_134: (in 0x00000000 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in esp_30 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_135
  DataType: ptr32
  OrigDataType: ptr32
T_136: (in Mem37[esp_30 - 0x00000004 + 0x00000000:(ptr32 void)] : (ptr32 void))
  Class: Eq_126
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_137: (in 0x00000000 : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in esp_30 + 0x00000000 : word32)
  Class: Eq_138
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 word32)
T_139: (in Mem37[esp_30 + 0x00000000:size_t] : size_t)
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: size_t
T_140: (in memcpy(*(esp_30 - 0x00000008), *(esp_30 - 0x00000004), *esp_30) : (ptr32 void))
  Class: Eq_140
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_141: (in _InitTermAndUnexPtrs : ptr32)
  Class: Eq_141
  DataType: (ptr32 Eq_141)
  OrigDataType: (ptr32 (fn T_143 ()))
T_142: (in signature of _InitTermAndUnexPtrs : void)
  Class: Eq_141
  DataType: (ptr32 Eq_141)
  OrigDataType: 
T_143: (in _InitTermAndUnexPtrs() : void)
  Class: Eq_143
  DataType: void
  OrigDataType: void
T_144: (in 0x00000000 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_145: (in dwArg04 != 0x00000000 : bool)
  Class: Eq_145
  DataType: bool
  OrigDataType: bool
T_146: (in fn004011FC : ptr32)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (fn T_149 (T_148)))
T_147: (in 0x0000000C : word32)
  Class: Eq_147
  DataType: ui32
  OrigDataType: ui32
T_148: (in fp - 0x0000000C : word32)
  Class: Eq_4
  DataType: (ptr32 Eq_4)
  OrigDataType: ptr32
T_149: (in fn004011FC(fp - 0x0000000C) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_150: (in 0xFFFFFFF4 : word32)
  Class: Eq_150
  DataType: int32
  OrigDataType: int32
T_151: (in fp + 0xFFFFFFF4 : word32)
  Class: Eq_96
  DataType: ptr32
  OrigDataType: ptr32
T_152: (in dwLoc08 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_153: (in fn00401158 : ptr32)
  Class: Eq_115
  DataType: (ptr32 Eq_115)
  OrigDataType: (ptr32 (fn T_154 ()))
T_154: (in fn00401158() : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_155: (in 0x0000001C : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in fn00401158() + 0x0000001C : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in 0x004020F8 : ptr32)
  Class: Eq_157
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_158 t0000)))
T_158: (in Mem14[0x004020F8:word32] : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_159: (in 0x82727349 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in 0x00000000 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in dwArg04 + 0x00000000 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in Mem15[dwArg04 + 0x00000000:word32] : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_163: (in 0x004020E4 : ptr32)
  Class: Eq_163
  DataType: ptr32
  OrigDataType: ptr32
T_164: (in 0x00000004 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in dwArg04 + 0x00000004 : word32)
  Class: Eq_165
  DataType: ptr32
  OrigDataType: ptr32
T_166: (in Mem16[dwArg04 + 0x00000004:word32] : word32)
  Class: Eq_163
  DataType: ptr32
  OrigDataType: word32
T_167:
  Class: Eq_167
  DataType: word32
  OrigDataType: (struct 0004 (0 T_85 t0000))
*/
typedef struct Globals {
	uint32 dw40208B;	// 40208B
	char b4020A4;	// 4020A4
	word32 dw4020F8;	// 4020F8
} Eq_1;

typedef void (Eq_2)(Eq_4 *);

typedef struct Eq_4 {
	word32 dw0000;	// 0
	ptr32 ptr0004;	// 4
} Eq_4;

typedef HANDLE (Eq_33)();

typedef HANDLE Eq_35;

typedef BOOL Eq_41;

typedef BOOL (Eq_42)(HANDLE, DWORD, LPVOID);

typedef DWORD Eq_45;

typedef LPVOID Eq_46;

typedef struct Eq_78 {
	word32 (* ptr002C)[];	// 2C
} Eq_78;

typedef int32 (Eq_89)(char *);

typedef size_t Eq_106;

typedef word32 (Eq_115)();

typedef void (Eq_123)(void, void, size_t);

typedef void (Eq_141)();

