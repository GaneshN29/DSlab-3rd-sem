#include<iostream>
using namespace std;
#define n 10
class stack{
public:
    int top;
int  a[n];
   public: stack(){
    top=0;
    }
    void push(int x){
        if(top<n)
    a[top++]=x;
    else
        cout<<"stack overflowed\n";
    }
    int pop(){
    if(top!=0){
        return a[--top];
    }
    else
        cout<<"stack empty\n";
    }
    void display(){
    int i;
    if(top==-1){cout<<"Empty Stack\n";return;}
    else{
    cout<< "Contents of stack\n";
    for(i=0;i<=top;i++)
        cout<<a[i]<<" ";}
    }
};
int main(){
stack s;
s.push(4);
s.push(5);
s.push(7);
s.push(8);
cout<<s.pop()<<"\n";
s.display();
}
