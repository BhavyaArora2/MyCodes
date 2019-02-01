#include <stdio.h>

int main() {
	//code
    
    int trials;
    scanf("%d\n",&trials);
    
	for(int t=0;t<trials;t++){
	    
	int a[1000],n;    
    
    scanf("%d\n",&n);
            
	    for(int i=0;i<n;i++)
	        scanf("%d ",&a[i]);
   
   
   
	  //correct      
	   int globalSum=a[0], localSum=0;     
    for(int i=0;i<n;i++){
        localSum=localSum+a[i];
        
       if(globalSum<localSum)
           {
               globalSum=localSum;
 
           }
       if(localSum<0)
           {localSum=0;

           }
     }
     printf("%d\n",globalSum);
	}
	return 0;
}
