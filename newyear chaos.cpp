#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the minimumBribes function below.
int bribes(int a[],int n) {
      int i=0,j,key,count=0;
    
    for(i=0;i<n-1;i++){
        key=a[i];
        j=i+1;
       
            if(a[i]-(i+1)>2){
                printf("Too chaotic\n");
                return 0;
            }
          
          else{
           for(j;j<n;j++){
          if(key>a[j]){
            ++count;
          }
         }
     }
 }


return count;
}

int main(){
        int testcase,res,n,a[10];
        scanf("%d",&testcase);
       
        while(testcase!=0){
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
            res=bribes(a,n);
            printf("%d\n",res);
            testcase--;
        }
    
    }

