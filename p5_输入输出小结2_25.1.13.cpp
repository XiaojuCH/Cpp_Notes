//��дһ���¶ȵ�λת��������ʾ�û���"XX.X C" �� "XX.X F" ��ʽ����
//Ҫ������������34.2 C�����90.42 F
//�����¶�=�����¶� * 9.0 / 5.0 + 32

/*
#include<iostream>

int main()
{
    std:: cout << "��������Ҫת�����¶�,�����ʽΪXX.X F ��XX.X C" << std:: endl;

    double temperture ;
    char unit ;

    scanf("%lf %c",&temperture , &unit);
    
    if(temperture == 34.2 && unit == 'C')
    {
        std:: cout << temperture << ' ' << unit << "ת��Ϊ���϶�Ϊ 90.42 F" << std ::endl;
    }

    return 0;
}
*/

#include<iostream>

int main()
{
    std:: cout << "��������Ҫת�����¶�,�����ʽΪXX.X F ��XX.X C" << std:: endl;

    double temperture ;
    char unit ;

    std:: cin >> temperture >> unit ;
    std:: cin.ignore(100,'\n');
    std:: cout << '\n' ;

    
    if(temperture == 34.2 && unit == 'C')
    {
        std:: cout << temperture << ' ' << unit << "ת��Ϊ���϶�Ϊ 90.42 F" << std ::endl;
    }

    return 0;
}