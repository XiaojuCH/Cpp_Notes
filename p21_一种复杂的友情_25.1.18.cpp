#include<iostream>
#include<string>

class Lovers
{
    public:
        Lovers(std::string theName);
        void kiss(Lovers *lover);
        void ask( Lovers *lovers , std::string doSomething);
        friend class Others;
    protected:
        std::string name;
};

class Boyfriend : public Lovers
{
    public:
        Boyfriend(std::string theName);
};

class Girlfriend : public Lovers
{
    public:
        Girlfriend(std::string theName);
};

class Others
{
    public:
        Others(std::string theName);
        void kiss(Lovers *lover);
        std::string name;
};



int main()
{
    Boyfriend boyfriend("A君");
    Girlfriend girlfriend("小B");
    Others others("小c");

    girlfriend.kiss(&boyfriend);
    girlfriend.ask(&boyfriend,"洗衣服啦");

    std::cout << "当当当路人c闪亮登场。。。。。。" << std::endl;
    others.kiss(&girlfriend);

    return 0;
}

void Lovers:: kiss(Lovers *lover)
{
    std::cout << name << "亲一下" << lover->name << std::endl;
}

void Lovers::ask( Lovers *lovers , std::string doSomething)
{
    std::cout << "宝贝儿 " << lovers->name << " 帮我 " << doSomething << std::endl;
}

Lovers::Lovers(std::string theName)
{
    name = theName;
}

Boyfriend::Boyfriend(std::string theName) : Lovers(theName)
{

}

Girlfriend::Girlfriend(std::string theName) : Lovers(theName)
{

}

Others::Others(std::string theName)
{
    name = theName;
}

void Others::kiss(Lovers *lover)
{
    std::cout << name << "亲一下" << lover->name << std::endl;
}