#include <iostream>

using namespace std;

int main()
{
   int numItems,i ,stdntDgr[10],ttlDgr=0,mxNm=0;
        cout<<"please enter the number of items : ";
        cin>>numItems;
        for(i=0;i<numItems;i++){
            cout<<"Pls enter the item number "<<i+1<<endl;
            cin>>stdntDgr[i];
            ttlDgr+=stdntDgr[i];
            if(stdntDgr[i]>mxNm){
                mxNm=stdntDgr[i];
            }
        }
        cout<<"the total degree are "<<ttlDgr<<endl;
        cout<<"the max number is "<<mxNm<<endl;
}
