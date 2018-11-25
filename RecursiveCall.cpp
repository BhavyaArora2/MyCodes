#include <stdio.h>
#include<stdlib.h>


 void PRINTNUM(int n){
    if(n>0){
    printf("%d \n",n);
    }
    else{
        exit(0);
    }
    PRINTNUM(n-1);

}

int main(void) {

	int n;
	scanf("%d",&n);
	PRINTNUM(n);

	return 0;
}
