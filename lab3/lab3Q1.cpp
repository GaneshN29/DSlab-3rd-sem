#include<iostream>
#define size 20
using namespace std;
class queue{
int front, rear;
int q[20];
public:
void insert(int x);
int del();
void display();
queue(){
front=0;
rear=0;
}};
void queue::insert(int x){
if(rear==size-1){
cout<<"Queue overflow\n";
return;
}
q[rear++]=x;
}
int queue::del(){
if(front>rear){
 cout<<"Empty queue\n";
  return -1;
}
return q[front++];
}
void queue::display(){
int i;
if(front>rear){
cout<<"Empty queue\n";
return;
}
cout<<"Contents:";
for(i=front;i<rear;i++)
cout<<q[i]<<" ";
}
int main(){
queue a;
a.insert(5);
a.insert(8);
a.insert(9);
a.insert(2);
a.del();
a.del();
a.display();
}
