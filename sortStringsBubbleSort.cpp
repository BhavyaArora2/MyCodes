#include<bits/stdc++.h> 
using namespace std; 
#define MAX 100 

void sortStrings(char arr[][MAX], int n) 
{ 
    char temp[MAX]; 
  
    // Sorting strings using bubble sort 
    for (int i=0; i<n-1; i++) 
    { 
        for (int j=0; j<n-i-1; j++) 
        { 
            if (strcmp(arr[j], arr[j+1]) > 0) 
            { 
                strcpy(temp, arr[j]); 
                strcpy(arr[j], arr[j+1]); 
                strcpy(arr[j+1], temp); 
            } 
        } 
    } 
}

int main(){
    char str[][100]={"dbc","burrito","nachos","waffle"};
    int n=sizeof(str)/sizeof(str[0]);
    sortStrings(str,n);
    for(int i=0;i<n;i++){
        cout<<str[i]<<"\n";
    }
    return 0;
}
