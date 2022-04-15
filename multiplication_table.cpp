
#include <iostream>
#include <string>
using namespace std;
 int main(){
     int num;
     cout<<"please enter a number\n";
     cin>>num;
     
     for(int i=1;i<=12;i++)
     {
         cout<<num<<" * "<<i<<" = "<<num*i<<endl;
     }
 }