#include<iostream>
#include<string>

class BaseClass
{
    public:
        BaseClass();
        ~BaseClass();

        void doSomething();
};

class SubClass : public BaseClass
{
    public:
        SubClass();
        ~SubClass();
};


int main()
{
    SubClass subclass;
    subclass.doSomething();

    return 0;
}


BaseClass::BaseClass()
{
    std::cout << "������๹����.........\n";
    std::cout << "���ڻ��๹���������ĳЩ��.........\n\n";
}

BaseClass::~BaseClass()
{
    std::cout << "�������������.........\n";
    std::cout << "���ڻ��������������ĳЩ��.........\n\n";
}

SubClass::SubClass()
{
    std::cout << "�������๹����.........\n";
    std::cout << "�������๹���������ĳЩ��.........\n\n";
}

SubClass::~SubClass()
{
    std::cout << "��������������.........\n";
    std::cout << "�������������������ĳЩ��.........\n\n";
}

void BaseClass::doSomething()
{
    std::cout << "������������С���" << "\n";
    std::cout << "�㶨!" << "\n" << std::endl;
}