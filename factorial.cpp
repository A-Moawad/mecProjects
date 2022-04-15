


#include <iostream>

using namespace std;

int main()
{
    //factorial with while
        int nmbr,factorial=1;
        cout <<"Please enter a number :";
        cin>>nmbr;
        while (nmbr>0){
             factorial=factorial *=nmbr;
            nmbr--;
        }
        cout<<"The Factorial is "<<factorial;
    return 0;
}
