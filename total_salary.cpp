#include <iostream>

using namespace std;

int main()
{

double salary, total_salary, extra_work;
cout<<"Welcome to our company.\n";
cout<<"if you worked exera time at least 10h or\n";
cout<<"acheived at least 5000 extra sales click 1,\n";
cout<<"if not click anything.";
cin>>extra_work;
if(extra_work==1){
    cout<<"Please enter your salary:";
    cin>>salary;
    total_salary=salary+salary*0.1;
    cout<<"Your Total Salary is "<<total_salary;
}
else
    cout<<"Please enter your salary:";
    cin>>salary;
    cout<<"your Total Salary is "<<salary;

}