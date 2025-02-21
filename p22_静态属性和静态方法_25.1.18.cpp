#include<iostream>
#include<string>


class Pets
{
    public:
        static int petCount();
        Pets(std::string theName);
        ~Pets();

    protected:
        std::string name;

    private:
        static int count;
};

class Dogs : public Pets
{
    public:
        Dogs(std::string theName);
};

class Cats : public Pets
{
    public:
        Cats(std::string theName);
};

int Pets::count = 0;

int main()
{
    Dogs dog("Tom");
    Cats cat("Jerry");

    std::cout << "\n已经诞生了" << Pets::petCount() << "只宠物\n" << std::endl;

    {
        Dogs dog2("Tom_2");
        Cats cat2("Jerry_2");
        std::cout << "\n现在呢,已经诞生了" << Pets::petCount() << "只宠物\n" << std::endl;
    }

        std::cout << "\n现在还剩下" << Pets::petCount() << "只宠物\n\n" << std::endl;

    return 0;
}

Pets::Pets(std::string theName)
{
    name = theName;
    count++;
    std::cout << "一只宠物出生了,名字叫做:" << name << std::endl;
}

Pets::~Pets()
{
    count--;
    std::cout << name << "挂掉了" << std::endl;
}

Dogs::Dogs(std::string theName) : Pets(theName)
{

};

Cats::Cats(std::string theName) : Pets(theName)
{

};

int Pets::petCount()
{
    return count;
}