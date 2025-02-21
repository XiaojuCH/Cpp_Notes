/*
课后作业:
-重载运算符"+""-""*""/" 实现有理数的加减乘除运算
-如 1/8 + 7/8 = 1
-如 1/8 - 7/8 = -6/8
-如 1/8 * 7/8 = 7/64
-如 1/8 / 7/8 = 1/7;
*/

#include<iostream>


class Calculate
{
    public:
        Calculate();
        Calculate(int n , int d); //num和den分别是分子和分母的缩写> <
        void print();

    private:
        int num;
        int den;
};

Calculate operator+ (Calculate &d)
{
    Calculate c3;

};

int main()
{


    return 0;
}

Calculate::Calculate()
{
    num = 0;
    den = 0;
}

Calculate::Calculate(int n , int d)
{
    num = n;
    den = d;
}

void Calculate::print()
{
    std::cout << num << den << "\n";
}