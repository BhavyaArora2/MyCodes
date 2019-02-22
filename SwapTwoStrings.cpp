#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string str1 = "geeks";
    string str2="obscure";
    
    string str3;
   
   str3=str1;
   str1=str2;
   str2=str3;
    
    cout<<str1<<"\t"<<str2<<"\t";
    return 0;
    
    
}
