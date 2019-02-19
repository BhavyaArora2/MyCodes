#include <iostream>

using namespace std;

struct Node{
    int key;
    string str;
};

Node hashh[1003];

int hashFunc(int key){
    return (key%1003);
}

void add(int key,string str){
    int index=hashFunc(key);
    while(hashh[index].key!=-1){
        index=(index+1)%1003;
    }
    hashh[index]={key,str};
}

string getName(int key){
    int index=hashFunc(key);
    while(hashh[index].key!=key){
        index=(index+1)%1003;
    }
    return hashh[index].str;
}

int main() {
    int N,roll_no,q;
    string s,a;
    cin>>N;
    cout<<"\n";
    for(int i=0;i<N;i++){
        hashh[i]={-1,""};
    }
    for(int i=0;i<N;i++){
        cin>>roll_no >>s ;
        cout<<"\n";
        add(roll_no,s);
    }
    
    cin>>q;
    cout<<a<<"\n";
    for(int i=0;i<q;i++){
        cin>>roll_no;
        cout<<"\n";
        a=getName(roll_no);
        cout<<a<<"\n";
    }
	return 0;
}



