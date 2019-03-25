#include<Stdio.h>
#include<stdlib.h>

void insertion_sort(float a[],int n){
    int j,i;
    float key;
    
    for(j=1;j<n;j++){
        i=j-1;
        key=a[j];
        while(i>=0 && a[i] < key){
           a[i+1]=a[i];
           i--;
        }
        a[i+1]=key;
    }
}

void shannonFano_Encoding(int begin,int end,float a[]){
	int high,low;
	float highSum,lowSum;	
	high=begin;
	low=end;
	highSum=a[high];
	lowSum=a[low];
	while(high!=low){
		if(highSum>lowSum){
			--low;
			lowSum+=a[low];
			printf("lowsum is :%f\n",lowSum);
		}
		else if(highSum<lowSum){
			++high;
			highSum=highSum+a[high];
			printf("%f",highSum);
		}
}
for(int i=begin;i<high;i++){
	a[i]=1;
}
for(int i=low;i<end;i++){
	a[i]=0;
}
for(int k=0;k<end;k++){
	printf("%d ",a[k]);
}
}
int main(){
	int n=2,i=0;
	float sum=0.0;
	
// *********enter symbols******************
//	char s[];
//	printf("enter the symbols\n");
//	for(int i=0;i<n;i++)
//	{
//	scanf("%s\n",s);
//	strcpy(s[i],ch);	
//	}
//***************probs scanning************
//	printf("enter probabilities  for each symbol");
//	for(i=0;i<n;i++){
//		scanf("%f",&a[i]);
//		sum+=a[i];
//	}
//	printf("%f",sum);
//	 if(sum==1){
//			printf("correct");
//		}
//	else{
//			printf("probs are not valid");
//		}

//***************Sorting using insertion sort*******************
float a[]={0.2,0.4,0.03,0.2,0.1,0.07};
int k=sizeof(a)/sizeof(int);

	insertion_sort(a,k)	;
	printf("decending order");
	for(int i=0;i<k;i++){
		printf("%.2f ",a[i]);
	}
	shannonFano_Encoding(0,n,a);
	return 0;
}
