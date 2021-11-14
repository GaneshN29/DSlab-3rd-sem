#include <iostream>
using namespace std;
#define n 20
class Stack {
    private:
    int top;
    char arr[n];
    public:
    Stack(){
        top=-1;
    }
    void push(int elem){
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
        cout<<"Stack Underflow!"<<endl;
        return -1;
    }

    int peek(){
        if(top!=-1)
            return arr[top];
        else{
            cout<<"Underflow"<<endl;
            return -1;
        }
    }

    void display(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
};
