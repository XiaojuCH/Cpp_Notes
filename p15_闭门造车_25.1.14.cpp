//�Լ����һ��Ů��

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
        std::cout << "���ڴ�ɨ�С�������Ϊ" << i << "%" << "\n";
    }
    std::cout << "��ɨ���!" << std::endl;
}

void MAID::Introduce()
{
    std::cout << "�ҵ�������:" << name << "�ҵĳ�����:" << looks << std::endl;
}