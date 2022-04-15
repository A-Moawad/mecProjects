#include <iostream>

using namespace std;

int main()
{

char grade;
cout<<"please,enter your grade A,B,C,D.... "<<endl;
cin>>grade;


if(grade == 'A'|grade == 'a')
    cout<<"Your grade in range from 90 to 100 ";
else if(grade == 'B'| grade == 'b')
    cout<<" Your grade in range from 80 to 89.99";
else if(grade == 'C'| grade == 'c') 
    cout<<"Your grade in range from 70 to 79.99";
else if(grade == 'D'| grade == 'd')
    cout<<"Your grade in range from 60 to 69.99";
else if(grade == 'E'| grade == 'e')
    cout<<"Your grade in range from 50 to 59.99";
else 
    cout<<"Failed";

}