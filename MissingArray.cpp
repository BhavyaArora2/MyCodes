
#include<stdio.h>
#include<stdlib.h>

int main(){
int trial;

scanf("%d\n",&trial);
for(int t=0;t<trial;t++){
    int n;
    
    scanf("%d\n",&n);
    int sum=0;
int arr[1000000];

for(int i=0;i<(n-1);i++){
            scanf("%d ",&arr[i]);
        }

if(n==2){
        if(arr[0]==1){
            printf("2\n");
        }
        else if(arr[0]==2){
            printf("1\n");
    }
}
else{
        for(int i = 0; i <n; i++)
        {sum += arr[i];}
            
        // the total sum of numbers between 1 and arr.length.
        int total = (n + 1) * n / 2;
        
        
        printf("%d\n",(total - sum) );
    }
}
return 0;
}
