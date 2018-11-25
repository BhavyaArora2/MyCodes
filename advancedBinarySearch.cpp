#include <iostream>
using namespace std;

 void BinarySearch(int a[],int l,int h,int key,int n){
    int m=(l+h)/2;
    int flag=1;
    int count=1;

    if(h>l){
        if(key==a[m]){
            l=m;
            flag=0;
            int pos;
            cout<<"1st position :"<<m;

            for(int i=0;i<5;i++)
            {
                if(a[i]==l)
                {
                    count++;
                }
                else
                {
                    continue;
                }
            }
                for(int i=0;i<5;i++){
                    if(a[i]==a[i-1])
                    {
                      pos=i;
                    }
                }
                    cout<<"2nd position :"<<pos<<"count=:"<<count;

        }
        else if(key<a[m]){
             BinarySearch(a,l,m,key,n);
        }
        else{
            BinarySearch(a,m+1,h,key,n);
        }
    }
    else if(flag==1){
        cout<<"-1 -1 0 " ;
    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int a[1000];
    int key;


    cin>>n;
    cout<<"\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\n";
    cout<<"\n";
    cin>>key;


    int l=0,h=n-1;
    BinarySearch(a,l,h,key,n);

    return 0;

}
