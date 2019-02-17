#include<iostream>
#include<queue>

using namespace std;

void showpq(priority_queue <int> pq){
   // priority_queue <int> p=pq;
   while(!pq.empty()){
      cout<<pq.top()<<"\t";
      pq.pop();
   }
}

int main(){
   priority_queue <int> pq;
   pq.push(10);
   pq.push(2);
   pq.push(4);
   pq.push(3);
   pq.push(11);
   showpq(pq);
   cout<<pq.top();
   cout<<"\npopped element"<<"\n";
   pq.pop();
   showpq(pq);
}
