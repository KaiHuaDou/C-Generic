#ifndef C_Generic_Header
	#define G void*
	#define Get_G(x) (&x)
	#define Set_G(x) (*x)
	#define Generic
	#define Get_Generic(x) (&x)
	#define Set_Generic(x) (*x)
#endif
/*
ʹ��˵����
1. ���巺�ͱ���
   G generic_var = Set_G(value);
   G generic_var; 
2.��ȡ����ֵ
   var = Get_G(generic_var);
3.���÷���ֵ
   generic_var = Set_G(value);
*/
