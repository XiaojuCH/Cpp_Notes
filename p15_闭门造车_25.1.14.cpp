//自己设计一个女仆

#include<iostream>



class MAID 
{
    public:
        std::string name;
        std::string looks;
        void Cleaning();
        void Introduce();
};


int main()
{
    MAID mymaid;

    mymaid.name = "kasugano sora";
    mymaid.looks = "pretty";

    mymaid.Introduce();
    //system("cls");
    mymaid.Cleaning();


    return 0;
}

void MAID::Cleaning()
{
    for(int i = 0 ; i < 100 ; i += 10)
    {
        std::cout << "正在打扫中……进度为" << i << "%" << "\n";
    }
    std::cout << "打扫完成!" << std::endl;
}

void MAID::Introduce()
{
    std::cout << "我的名字是:" << name << "我的长相是:" << looks << std::endl;
}