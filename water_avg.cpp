#include <iostream>

using namespace std;

int main()
{
   float weight,pounds,liters,water,ounces;
   cout<<"Enter your weight in Kg:";
   cin>>weight;
   pounds=weight*2.2;
   ounces=pounds*2/3;
   liters=ounces*0.0296;
   
   cout<<ounces<<endl;
   cout<<"Water avg you need is "<<int(liters)<<" liters\n\n\n";
   
   

    return 0;
}
