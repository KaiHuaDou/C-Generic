# C-Generic
### 用4行代码在C语言里面实现泛型

------
使用说明：
1. 定义泛型变量
   `G generic_var = Set_G(value);`
   `G generic_var;`
2. 获取泛型值 `var = Get_G(generic_var);`
3. 设置泛型值 `generic_var = Set_G(value);`
4. `Generic`宏的目的在于表明泛型，无实际作用。

------

思路：

使用指针，并将其封装为宏。

