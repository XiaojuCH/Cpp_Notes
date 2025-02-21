//实现复数加法
#include<iostream>

class Complex
{
    public:
        Complex();
        Complex(double r , double i);
        void print();
        Complex complex_add(Complex &d);

    private:
        double real;
        double imag;
};



int main()
{
    Complex c1(3,4);
    Complex c2(5,-10);
    Complex c3;

    c3 = c2.Complex::complex_add(c1);
    c3.print();

    return 0;
}

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double r , double i)
{
    real = r;
    imag = i;
}

void Complex::print()
{
    std::cout << "结果是:(" << real << "," << imag << "i)" << "\n";
}

Complex Complex::complex_add(Complex &d)
{
    Complex c;
    c.real = real + d.real;
    c.imag = imag + d.imag;

    return c;
}
