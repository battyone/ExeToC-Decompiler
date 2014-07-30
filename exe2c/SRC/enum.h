// Copyright(C) 1999-2005 LiuTaoTao��bookaa@rorsoft.com

//	enum.h
#ifndef ENUM__H
#define ENUM__H

#define	BIT32_is_4	4
#define	ESP_UNKNOWN	11
#define	ESP_IGNORE	13
#define	Not_EBP_based	11
#define	INVALID_STACK	11

typedef	DWORD	ea_t;



enum JxxType
{
	JMP_jmp	=	1,
	JMP_jle	=	2,
	JMP_jng	=	2,
	JMP_jnl	=	3,	
	JMP_jge	=	3,	
	JMP_jl	=	4,	
	JMP_jg	=	5,
	JMP_jna	=	6,
	JMP_jbe	=	6,
	JMP_jnb	=	7,
	JMP_jae	=	7,
	JMP_jb	=	8,
	JMP_ja	=	9,

	JMP_jo,
	JMP_jno,
	JMP_jp,
	JMP_jnp,
	JMP_jnle,
	JMP_jz,
	JMP_jnz,
	JMP_js,
	JMP_jns,

	JMP_case,

};

enum enum_COMP
{
	COMP_unknown	=	0,
	COMP_for		=	1,
	COMP_if			=	2,
	COMP_if_else	=	3,
	COMP_while  	=	4,
	COMP_do_while  	=	5,
	COMP_long_if	=	6,
	COMP_for1,      //do while �͵�for��ʡ���˵�һ���ж�
	COMP_switch_case,
	COMP_switch_case_multcomp,	//	����compare��switch_case
};

enum HLType
{
    i_Nothing = 0,
	i_Jump	=	0x101,
	i_Label =	0x102,
	i_Begin	,
	i_End	,
	i_Assign,
	i_Var	,
	i_Unknown,
	i_RetPar,		//�����ķ���ֵ��������i_Returnǰ
	i_Return,		//����������־
	i_Add, i_Sub, i_Xor, i_Sar, i_And, i_Shl, i_Shr, i_Imul,
	i_Readpointto,
	i_Writepointto,
	
	i_Cmp,		//��ʱ�ģ�����Ҫȥ����
	i_Test,		//��ʱ�ģ�����Ҫȥ����
	i_Lea,		//��ʱ�ģ�����Ҫȥ����
	i_Address,	//���ԶԸ� [eax+ebx*4+8888],�������ֳ�˭����pointer��Ҫ���i_GetAddr
	i_JmpAddr,	//��ʱ������switch case

	i_GetAddr,
	i_Call,
	i_CallApi,
    i_CallThis, //���call�Ǹ�ecx->func1��Ҫ�õ�ecx��
	i_CallPara,	//��call�Ĳ��������ǽ���i_Call
	i_CallRet,	//��call�ķ���ֵ�����ǽ���i_Call
	i_CplxBegin,
	i_CplxEnd,
	i_Nop,

	i_SignExpand,	//	for movsx
	i_NosignExpand,	//	for movzx

    i_EspReport,
};
	
	
enum
{
	enum_EAX	=	0,
	enum_AL		=	0,
	enum_AH		=	1,
	enum_AX		=	0,
	enum_ECX	=	4,
	enum_CL		=	4,
	enum_CH		=	5,
	enum_CX		=	4,
	enum_EBX	=	8,
	enum_BL		=	8,
	enum_BH		=	9,
	enum_BX		=	8,
	enum_EDX	=	0x0c,
	enum_DL		=	0x0c,
	enum_DH		=	0x0d,
	enum_DX		=	0x0c,
	enum_EBP	=	0x10,
	enum_BP		=	0x10,
	enum_ESP	=	0x14,
	enum_SP		=	0x14,
	enum_ESI	=	0x18,
	enum_SI		=	0x18,
	enum_EDI	=	0x1c,
	enum_DI		=	0x1c,

};
#endif // ENUM__H