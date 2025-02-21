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
        std::cout << "请选择需要进行的操作:"<<'\n';
        std::cout << "1.打印数据到屏幕"<<'\n';
        std::cout << "2.录入数据"<<'\n';
        std::cout << "3.退出程序"<<'\n';

        std::cin >> User_Input ;
        FILE *fp = nullptr;

        switch(User_Input)
        {
            case 1:
                fp = fopen("UID.txt","r");
                if(fp == NULL)
                {
                    printf("读取文件失败!\n");
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
                    printf("创建文件失败!\n");
                    return 1;
                }

                std::cout << "请输入姓名: ";
                std::cin >> uid.name;
                std::cout << "请输入id: ";
                std::cin >> uid.id;
                std::cout << "请输入性别(F/M): ";
                std::cin >> uid.sex;

                fprintf(fp,"%s\n",uid.name.c_str());
                fprintf(fp,"%s\n",uid.id.c_str());
                fprintf(fp,"%c\n",uid.sex);
                fprintf(fp,"---------------------------\n");

                std::cout << "输入成功!" << "\n";

                fclose(fp);
                fp = nullptr;
                break;

            case 3:
                std::cout << "正在关闭程序……" << std::endl;
                if (fp != nullptr) fclose(fp);
                return 0;

            default :
                std::cout << "无效选项!请重新选择" << std::endl;
                break;
        }
    }

    return 0;
}