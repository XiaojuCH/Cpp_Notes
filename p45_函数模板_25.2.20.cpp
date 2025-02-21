#include<iostream>
#include<string>

template<class T>
void swap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i1 = 100;
    int i2 = 200;

    std::cout << i1 << i2 << std::endl;
    swap(i1,i2);
    std::cout << i1 << i2 << std::endl;

    std::string s1 = "Ð¡¾Ñ";
    std::string s2 = "´ó¾Ñ";

    std::cout << s1 << s2 << std::endl;
    swap(s1,s2);
    std::cout << s1 << s2 << std::endl;

    return 0;
}