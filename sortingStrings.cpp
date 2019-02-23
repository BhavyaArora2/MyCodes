#include<iostream>
using namespace std;

int main(){

string s="helloworld";
    int n=sizeof(s)/sizeof(s[0]);
    sort(s.begin(),s.end());
    cout<<s;
    
	//alternate method
//    char s[]={'h','e','l','l','o','w','o','r','l','d'};
//    int n=sizeof(s)/sizeof(s[0]);
//    sort(s,s+n);
//    cout<<s;
    return 0;
}
