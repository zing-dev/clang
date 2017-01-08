
//
// Created by zhang on 2017/1/5.
//

//C 标准库的 float.h 头文件包含了一组与浮点值相关的依赖于平台的常量。
// 这些常量是由 ANSI C 提出的，这让程序更具有可移植性。在讲解这些常量之前，最好先弄清楚浮点数是由下面四个元素组成的：
//S	符号 ( +/- )
//b	指数表示的基数，2 表示二进制，10 表示十进制，16 表示十六进制，等等...
//e	指数，一个介于最小值 emin 和最大值 emax 之间的整数。
//p	精度，基数 b 的有效位数


//基于以上 4 个组成部分，一个浮点数的值如下：
//floating-point = ( S ) p x be
//或
//floating-point = (+/-) precision x baseexponent

#include <stdio.h>
#include <float.h>

int float_main()
{
    printf("The maximum value of float = %.10e\n", FLT_MAX);
    printf("The minimum value of float = %.10e\n", FLT_MIN);

    char *string = "The number of digits in the number = %.10e\n";
    printf(string, FLT_MANT_DIG);

//    FLT_ROUNDS	定义浮点加法的舍入模式，它可以是下列任何一个值：
//    -1 - 无法确定
//    0 - 趋向于零
//    1 - 去最近的值
//    2 - 趋向于正无穷
//    3 - 趋向于负无穷
    printf("FLT_ROUNDS : %d\n",FLT_ROUNDS);
//    FLT_RADIX 2	这个宏定义了指数表示的基数。基数 2 表示二进制，基数 10 表示十进制，基数 16 表示十六进制。
    printf("FLT_RADIX : %d\n",FLT_RADIX);
//    FLT_MANT_DIG // 2
    printf("FLT_MANT_DIG : %d\n",FLT_MANT_DIG); // 24
//    DBL_MANT_DIG
    printf("DBL_MANT_DIG : %d\n",DBL_MANT_DIG); //53
//    LDBL_MANT_DIG
    printf("LDBL_MANT_DIG : %d\n",LDBL_MANT_DIG); //64
//    这些宏定义了 FLT_RADIX 基数中的位数。
//    FLT_DIG 6
    printf("FLT_DIG : %d\n",FLT_DIG); //6
//    DBL_DIG 10
    printf("DBL_DIG : %d\n",DBL_DIG); //15
//    LDBL_DIG 10
    printf("LDBL_DIG : %d\n",LDBL_DIG); //18
//    这些宏定义了舍入后不会改变表示的十进制数字的最大值（基数 10）。
//    FLT_MIN_EXP
//    DBL_MIN_EXP
//    LDBL_MIN_EXP
//    这些宏定义了基数为 FLT_RADIX 时的指数的最小负整数值。
//    FLT_MIN_10_EXP -37
//    DBL_MIN_10_EXP -37
//    LDBL_MIN_10_EXP -37
//    这些宏定义了基数为 10 时的指数的最小负整数值。
//    FLT_MAX_EXP
//    DBL_MAX_EXP
//    LDBL_MAX_EXP
//    这些宏定义了基数为 FLT_RADIX 时的指数的最大整数值。
//    FLT_MAX_10_EXP +37
//    DBL_MAX_10_EXP +37
//    LDBL_MAX_10_EXP +37
//    这些宏定义了基数为 10 时的指数的最大整数值。
//    FLT_MAX 1E+37
//            DBL_MAX 1E+37
//    LDBL_MAX 1E+37
//    这些宏定义最大的有限浮点值。
//    FLT_EPSILON 1E-5
//            DBL_EPSILON 1E-9
//    LDBL_EPSILON 1E-9
//    这些宏定义了可表示的最小有效数字。
//    FLT_MIN 1E-37
    printf("FLT_MIN : %.40lf\n",FLT_MIN);
//    DBL_MIN 1E-37
    printf("DBL_MIN : %.40lf\n",DBL_MIN);
//    LDBL_MIN 1E-37
//    这些宏定义了最小的浮点值。
}