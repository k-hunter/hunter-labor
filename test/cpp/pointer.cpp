#include <iostream>

using namespace std;
int main()
{
    int a = 123;
    int *p = &a;//取a的地址给p指针,int* p =&a;

    int b = a;
    //int *q = &b;
    int* q = &b;
    //int q0 = &b;

    cout<<"a=:"<<a<<endl;
    cout<<"&a=:"<<&a<<endl;
    
    cout<<"b=:"<<b<<endl;
    //cout<<"*b=:"<<*b<<endl;
    cout<<"&b=:"<<&b <<endl;

    cout<<"取p的值，p=:"<<p<<endl;//输出p,p = a 的地址
    cout<<"取p的地址，&p=:"<<&p<<endl;//输出p,p = a 的地址
    cout<<"取*p的值？？？，就是a的值，a=*p=:"<<*p <<endl;// *p ,取a 的值。
    cout<<"取*p的地址，就是取a的地址，&a=&*p=:"<<&*p <<endl;

    cout<<"q=:"<<q<<endl;
    cout<<"*q=:"<<*q<<endl;
    cout<<"----------修改a,b,值，通过*p修改a 的值------------------"<<endl;
    
    
    
    //p=222;
    b = 333;
    *p=444;

    cout<<"a=:"<<a<<endl;
    cout<<"&a=:"<<&a<<endl;
    cout<<"b=:"<<b<<endl;
    //cout<<"*b=:"<<*b<<endl;
    cout<<"&b=:"<<&b <<endl;//值被覆盖了，但地址不变
    
    cout<<"取p的值，p=:"<<p<<endl;//输出p,p = a 的地址
    cout<<"取p的地址，&p=:"<<&p<<endl;//输出p,p = a 的地址
    cout<<"取*p的值？？？，就是a的值，a=*p=:"<<*p <<endl;// *p ,取a 的值。
    cout<<"取*p的地址，就是取a的地址，&a=&*p=:"<<&*p <<endl;




    return 0;
    //cout<<"hello world"<<endl;

}
