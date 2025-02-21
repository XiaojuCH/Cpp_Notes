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
    std::cout << "进入基类构造器.........\n";
    std::cout << "我在基类构造器里干了某些事.........\n\n";
}

BaseClass::~BaseClass()
{
    std::cout << "进入基类析构器.........\n";
    std::cout << "我在基类析构器里干了某些事.........\n\n";
}

SubClass::SubClass()
{
    std::cout << "进入子类构造器.........\n";
    std::cout << "我在子类构造器里干了某些事.........\n\n";
}

SubClass::~SubClass()
{
    std::cout << "进入子类析构器.........\n";
    std::cout << "我在子类析构器里干了某些事.........\n\n";
}

void BaseClass::doSomething()
{
    std::cout << "正在完成事情中……" << "\n";
    std::cout << "搞定!" << "\n" << std::endl;
}