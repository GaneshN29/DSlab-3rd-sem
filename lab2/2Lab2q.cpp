#include <iostream>
#include<string.h>
using namespace std;
#define n 22
class Stack {
    private:
    int top;
    char arr[n];
    public:
    Stack(){
        top=-1;
    }
    void push(char elem){
        if(top!=n-1){
            arr[++top]=elem;
        }
        else{
            cout<<"Overflow"<<endl;
        }
    }

    int pop(){
        if(top!=-1)
            return arr[top--];
            else{
        cout<<"Stack Underflow!"<<endl;
        return -1;}
    }
};

int main(){
    Stack s;
    int c=0,i,g;
    char a[10];
    cout<<"Enter String:";
    cin>>a;
    g=strlen(a);
    for(int i=0;i<g;i++)
        s.push(a[i]);
   for(i=0; i<g; i++){
    if(a[i]==s.pop()){
        c++;
    }
   }
    if(c==g)
        cout<<"String is a palindrome.";
    else
        cout<<"String is not a palindrome.";
}