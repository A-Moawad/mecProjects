#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 12;
    int searchedNum=8;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int number,low=0,heigh=n-1;

     cout<<sizeof(arr)/sizeof(arr[0])<<"\n";      //size of array


    while(low<=heigh){
        int mid= (low+heigh)/2;
        if(arr[mid]== searchedNum){
            cout<< "the index is " <<mid<<"\n";
            return mid;
    }
        else if(searchedNum>arr[mid]){
            cout<<"Now i am in the right side "<<"\n";
            low = mid+1;
        }
        else{
            cout<<"Now i am in the left side "<<"\n";

            heigh=mid-1;

    }
    }
    return 0;
}



