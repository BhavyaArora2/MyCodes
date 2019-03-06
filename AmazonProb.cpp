//Q. Replace every element with the greatest element on right side and the last element by -1

#include <iostream>
using namespace std;

int main() {
	int a[]={16, 17, 4, 3, 5, 2};
	
    int n=sizeof(a)/sizeof(int);
    
    int max=a[n-1];
    a[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        int temp;
        temp=a[i];
        a[i]=max;
         if(temp>max)
            max=temp;
    }
    
    for(int k=0;k<n;k++){
       cout<<a[k]<<"\t";
   }
	return 0;
}

