#include<bits/stdc++.h>
 #include<iostream>
 using namespace std;
 
void isPalindrome(string s){
    
    int l=0,h=s.length()-1;
    cout<<h<<"\n";
    
    while(l<h){
        if((s[l]) != (s[h])){
            cout<<s[l]<<"\t"<<s[h]; 
            cout<<"No";
            return ;
        }
        l++;
        h--;
    } 
    cout<<"Yes";
   
 }
 
 int main(){
    string s="Malayalam";
    transform(s.begin(), s.end(), s.begin(),::toupper);
    isPalindrome(s);
    return 0;
 }
 
 
 
 
 
