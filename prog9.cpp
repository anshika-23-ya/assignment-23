//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a=6,b=9;

    a= a+b;
    b=a-b;
    a=a-b;
    cout<<"a"<<a<<"b"<<b<<endl;
}
