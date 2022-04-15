#include <iostream>
using namespace std;

int main()
{
    int num1,num2 ;
    cout<<"enter num1:\n";
    cin>>num1;
    char op;
    cout<<"enter the operator:\n";
    char op;
    cout<<"enter num2:\n";
    cin>>num2;
    
        char op;
    
    if(op=='+')
        cout<<num1<<op<<num2<<" = "<<num1+num2;
    else if(op=='-')
        cout<<num1<<op<<num2<<" = "<<num1-num2;
    else if(op=='*')
        cout<<num1<<op<<num2<<" = "<<num1*num2;
    else if(op=='/')
        cout<<num1<<op<<num2<<" = "<<num1/num2;
    
    return 0;
}
