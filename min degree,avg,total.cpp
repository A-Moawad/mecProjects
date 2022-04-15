                                         //Total
                                         //avg
                                         //minimum degree
#include <iostream>

using namespace std;

int main()
{
    float NumOfSubject,MinDegree=1000,Avg,degree ,TotalDegree;
    cout<<"enter the numaber of subject:";
    cin>>NumOfSubject;
    for(int i=0;i<NumOfSubject;i++){
        cout<<"enter the degree of the subject number "<<i+1<<endl;
        cin>>degree;
        
        
        if(degree<MinDegree)
            MinDegree=degree;
        
        TotalDegree=TotalDegree+degree;
        
    }
    cout<<"The TotalDegree is "<<TotalDegree<<endl;
    cout<<"The Avg is "<<(TotalDegree/NumOfSubject)<<endl;
    cout<<"the min degree is "<<MinDegree;

    return 0;
}
