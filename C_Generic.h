#ifndef C_Generic_Header
	#define G void*
	#define Get_G(x) (&x)
	#define Set_G(x) (*x)
	#define Generic
	#define Get_Generic(x) (&x)
	#define Set_Generic(x) (*x)
#endif
/*
使用说明：
1. 定义泛型变量
   G generic_var = Set_G(value);
   G generic_var; 
2.获取泛型值
   var = Get_G(generic_var);
3.设置泛型值
   generic_var = Set_G(value);
*/
