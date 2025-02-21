#include<iostream>

double clac( double a);
double clac( double a , double b);
double clac( double a , double b , double c);

int main()
{
    std:: cout << "请输入一个或两个或三个数(用空格隔开)" << std:: endl;
    double a = 0 , b  = 0 , c = 0;
    int count = 0;
    
    // 检查输入的数值个数
    if(std::cin >> a) count++;
    if(std::cin.peek() != '\n' && std::cin >> b) count++;
    if(std::cin.peek() != '\n' && std::cin >> c) count++;

    if(count == 1) std:: cout << clac(a) << std:: endl;
    if(count == 2) std:: cout << clac(a , b) << std:: endl;
    if(count == 3) std:: cout << clac(a , b , c) << std:: endl;

    return 0;
}

double clac( double a)
{
    a *= a;
    return a;
}

double clac( double a , double b)
{
    double c = a * b;
    return c;
}

double clac( double a , double b , double c)
{
    double d = a + b + c;
    return d;
}