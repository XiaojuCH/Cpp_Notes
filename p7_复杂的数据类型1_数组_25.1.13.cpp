// #include<iostream>

// int main()
// {
//     int a[10] , sum = 0 , avag , i = 0;
//     std::cout << "������10����������" << std::endl;
//     while(std::cin.peek() != '\n' && i <= 10)
//     {
//         std::cin >> a[i];
//         sum += a[i];
//         i++;
//     }
//     avag = sum / i;

//     std::cout << sum << '\n' << avag << std::endl;

//     return 0;
// }

#include<iostream>



int main()
{
    const unsigned short ITEM = 10;
    int a[ITEM] , sum = 0 ;
    float avag;
    std::cout << "������10����������" << std::endl;
    for(int i = 0 ; i < 10 ; i++)
    {
        std::cout << "�������"<< i+1 <<"������"<< std::endl;

        while(!(std::cin >> a[i]))
        {
            std::cin.clear();
            std::cin.ignore(100,'\n');
            std::cout << "������һ���Ϸ���ֵ" << std::endl;
        }
    }
    
    for(int j = 0 ; j < ITEM ; j++)
    {
        sum += a[j];
    }

    avag = (float)sum / ITEM;

    std::cout << sum << '\n' << avag << std::endl;

    return 0;
}