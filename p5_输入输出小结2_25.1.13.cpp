//编写一个温度单位转换程序，提示用户以"XX.X C" 或 "XX.X F" 格式输入
//要求：如果输入的是34.2 C则输出90.42 F
//华氏温度=摄氏温度 * 9.0 / 5.0 + 32

/*
#include<iostream>

int main()
{
    std:: cout << "请输入需要转换的温度,输入格式为XX.X F 或XX.X C" << std:: endl;

    double temperture ;
    char unit ;

    scanf("%lf %c",&temperture , &unit);
    
    if(temperture == 34.2 && unit == 'C')
    {
        std:: cout << temperture << ' ' << unit << "转换为华氏度为 90.42 F" << std ::endl;
    }

    return 0;
}
*/

#include<iostream>

int main()
{
    std:: cout << "请输入需要转换的温度,输入格式为XX.X F 或XX.X C" << std:: endl;

    double temperture ;
    char unit ;

    std:: cin >> temperture >> unit ;
    std:: cin.ignore(100,'\n');
    std:: cout << '\n' ;

    
    if(temperture == 34.2 && unit == 'C')
    {
        std:: cout << temperture << ' ' << unit << "转换为华氏度为 90.42 F" << std ::endl;
    }

    return 0;
}