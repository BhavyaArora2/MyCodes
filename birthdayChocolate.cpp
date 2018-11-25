#include <stdio.h>

int main()
{
    int s_count,s[1000],d,m,R=0;
    scanf("%d",&s_count);

    for(int i=0;i<s_count;i++)
     scanf("%d",&s[i]);
    scanf("%d %d",&d,&m);

    int sum=0;

    for(int i=0;i<s_count;i++){
        int sum=0;
        for(int j=0;j<m;j++){
             sum+=s[i+j];
            printf("i=%d j=%d\n",i,j);
            if(sum==d)
               { R++;}
            printf("R=%d\n",R);
        }
    }

    printf("%d",R);
	return 0;
}
