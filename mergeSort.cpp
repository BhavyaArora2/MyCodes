#include <stdio.h>

//Time complexity is O(nlogn)
void merge(int a[],int l, int m,int h){
    //find out n1 and n2
    //copy the divided array ie left and right
    //compare and put it into final array
    int n1=m-l+1;
    int n2=h-m;
    int L[10],R[10];
    int i,j,k;
    for(int i=0;i<n1;i++){
        L[i]=a[i+l];
        // printf("left%d\n",L[i]);
    }
    for(int i=0;i<n2;i++){
       R[i]=a[m+1+i];
    //   printf("right%d\n",R[i]);
    }
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l,int h){
    if (l < h)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = (l+h)/2;

        // Sort first and second halves
        mergeSort(a, l, m);
        mergeSort(a, m+1, h);

        merge(a, l, m, h);
    }
}


void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}

int main(void) {
    int a[]={1,4,2,3};
    int n=sizeof(a)/sizeof(int);
    //merge short
    int l=0,h=n-1;
    mergeSort(&a,l,h);
    printarray(a,n);
	return 0;
}
