#include<iostream>
#include<string>

int main()
{
    struct UID {
        std::string name;
        std::string id;
        char sex;
    };
    char line[256];

    struct UID uid;
    int User_Input;

    while(1)
    {
        std::cout << "��ѡ����Ҫ���еĲ���:"<<'\n';
        std::cout << "1.��ӡ���ݵ���Ļ"<<'\n';
        std::cout << "2.¼������"<<'\n';
        std::cout << "3.�˳�����"<<'\n';

        std::cin >> User_Input ;
        FILE *fp = nullptr;

        switch(User_Input)
        {
            case 1:
                fp = fopen("UID.txt","r");
                if(fp == NULL)
                {
                    printf("��ȡ�ļ�ʧ��!\n");
                }

                while(fgets(line,sizeof(line),fp) != NULL)
                {
                    std::cout << line ;
                }
                
                fclose(fp);
                fp = nullptr;
                break;

            case 2:
                fp = fopen("UID.txt","a");
                if(fp == NULL)
                {
                    printf("�����ļ�ʧ��!\n");
                    return 1;
                }

                std::cout << "����������: ";
                std::cin >> uid.name;
                std::cout << "������id: ";
                std::cin >> uid.id;
                std::cout << "�������Ա�(F/M): ";
                std::cin >> uid.sex;

                fprintf(fp,"%s\n",uid.name.c_str());
                fprintf(fp,"%s\n",uid.id.c_str());
                fprintf(fp,"%c\n",uid.sex);
                fprintf(fp,"---------------------------\n");

                std::cout << "����ɹ�!" << "\n";

                fclose(fp);
                fp = nullptr;
                break;

            case 3:
                std::cout << "���ڹرճ��򡭡�" << std::endl;
                if (fp != nullptr) fclose(fp);
                return 0;

            default :
                std::cout << "��Чѡ��!������ѡ��" << std::endl;
                break;
        }
    }

    return 0;
}