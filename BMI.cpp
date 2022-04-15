

#include <iostream>

using namespace std;   

int main()
{
    float weight,height,bmi;
    cout<<"Enter your weight in Kg: ";
    cin>>weight;
    for(int i=0;i<100;i++){
        if(weight<0||weight>250){
            cout<<"Please,enter correct value:";
            cin>>weight;
    }
    }
    cout<<"Enter your height in meter: ";
    cin>>height;
    for(int i=0;i<100;i++){
        if(height<1||height>2){
            cout<<"Please,enter correct value:";
            cin>>height;
        }
    }
    bmi=weight/(height*height);


    if(bmi<18.5)
        cout<<"Underweight";
    else if(bmi>=18.5 && bmi<=24.9)
        cout<<"Normal";
    else if(bmi>=25 && bmi<30)
        cout<<"Overweight";
    else 
         cout<<"Very Overweight\n";
 
  
return 0;
}
