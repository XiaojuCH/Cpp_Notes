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
    Boyfriend boyfriend("A��");
    Girlfriend girlfriend("СB");
    Others others("Сc");

    girlfriend.kiss(&boyfriend);
    girlfriend.ask(&boyfriend,"ϴ�·���");

    std::cout << "������·��c�����ǳ�������������" << std::endl;
    others.kiss(&girlfriend);

    return 0;
}

void Lovers:: kiss(Lovers *lover)
{
    std::cout << name << "��һ��" << lover->name << std::endl;
}

void Lovers::ask( Lovers *lovers , std::string doSomething)
{
    std::cout << "������ " << lovers->name << " ���� " << doSomething << std::endl;
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
    std::cout << name << "��һ��" << lover->name << std::endl;
}