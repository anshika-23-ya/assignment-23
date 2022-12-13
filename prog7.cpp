//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{

    int a,b,c;
    cout<<"Enter the value of a,b,c";
    cin>>a>>b>>c;
    float avg = (a+b+c)/3;
    cout<<"The average of three value is"<<avg;
}