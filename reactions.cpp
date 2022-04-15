#include <iostream>

using namespace std;

int main()
{

int love, sad, haha;
cout<<"enter the number of love reaction:"<<endl;
cin>>love;
cout<<"enter the number of sad reaction:"<<endl;
cin>>sad;
cout<<"enter the number of haha reaction:"<<endl;
cin>>haha;

if(sad>love & sad>haha)
    cout<<"Sad setuation "<<endl;
else if(love>sad & love>haha)
    cout<<" Achievement "<<endl;
else 
    cout<<"Comics";

}