#include <bits/stdc++.h> 
using namespace std; 
#define NO_OF_CHARS 256 

// int *counting(char* s) 
// {   
//     char res;
//     int *count[255]={0};
    
//     for(int i=0;i<strlen(s);i++)
//     {
//         count[s[i]]++;
//     }
// return count;
// }

int firstNonRepeating(char *s){
    int index=-1,i;
    int count[255]={0};
    // int count=counting(s);
    for(int i=0;i<strlen(s);i++)
    {
        count[s[i]]++;
    }
    for(i=0;i<strlen(s);i++)
    {
        if(count[s[i]]==1){
            index=i;
            break;
        }
    }
    return index;
}


/* Driver program to test above function */
int main() 
{ 
    char str[]="aauubrree";
    int result;
    result=firstNonRepeating(str);
    cout<<str[result];
	
	return 0; 
}
