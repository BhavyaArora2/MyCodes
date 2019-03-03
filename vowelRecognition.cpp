 In this task you have to find the presence of vowels in all possible substrings of the given string. For each given string you have to print the total number of vowels.
 Print the vowel sum
 1
baceb
SAMPLE OUTPUT 
16
"b, ba, bac, bace, a, ac, ace, aceb, c, ce, ceb, e, eb, baceb" now the number of vowels in each substring will be 0, 1, 1, 2, 1, 1, 2, 2, 0, 1, 1, 1, 1, 2 
/*  -----------------------code begins---------------------------  */
#include<iostream>
using namespace std;
#include<string.h>
#include<bits/stdc++.h>

int main(){
    int t;

    cin>>t;
    for(int k=0;k<t;k++){
        
    string s;
    long long int sum=0;
    cin>>s;
    // cout<<"\n";
    long long int n=s.length();
    
    for(int j=0;j<n;j++){
            if((s[j]=='A') || (s[j]=='a') || (s[j]=='e') || (s[j]=='E') || (s[j]=='i') || (s[j]=='I') ||(s[j]=='O')|| (s[j]=='o')|| (s[j]=='u')|| (s[j]=='U'))
            {
                sum+=((j+1)*(n-j));
            }
        }
    
    cout<<sum<<"\n";
    
    }
    return 0;
}
