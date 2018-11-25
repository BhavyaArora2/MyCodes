#include <stdio.h>

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int Partition(int a[],int l,int h){
    int i=l-1;
    int j;
    int x=a[h];
    int temp;
    for(j=l;j<h;j++){
        if(a[j]<x){
            ++i;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return i+1;
}

void Quicksort(int a[],int l,int h){
if (l<h){
    int q=Partition(a,l,h);
    Quicksort(a,l,q-1);
    Quicksort(a,q+1,h);

  }
}


void Printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main(void) {
	// your code goes here
	int a[]={4,2,6,3};
	int n=sizeof(a)/sizeof(int);
	int l=0;
	int h=n-1;
	Quicksort(a,l,h);
    Partition(a,l,h);
    // printf("value i+1 %d",ab);

	Printarray(a,n);
	return 0;
}
