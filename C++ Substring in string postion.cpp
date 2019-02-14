
#include <iostream>
#include<string>

using namespace std;


int main()
{
    string str="geeksForgeeks";
    string str1="geeks";
    size_t found=str.find(str1); //find the index of string 
    if(found != string::npos)
        cout<<"first occurence "<<found<<"\n";
    //npos is used to find the maximum position of a string
    string str2="geeks";
    size_t founding=str.find(str2,found+1);
    if(found != string:: npos){
        cout<<"second occurence "<<founding<<"\n";
    }
    
   return 0;
}
