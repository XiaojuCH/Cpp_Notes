/*
�κ���ҵ:
-���������"+""-""*""/" ʵ���������ļӼ��˳�����
-�� 1/8 + 7/8 = 1
-�� 1/8 - 7/8 = -6/8
-�� 1/8 * 7/8 = 7/64
-�� 1/8 / 7/8 = 1/7;
*/

#include<iostream>


class Calculate
{
    public:
        Calculate();
        Calculate(int n , int d); //num��den�ֱ��Ƿ��Ӻͷ�ĸ����д> <
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