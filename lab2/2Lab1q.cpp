#include <iostream>
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
            else{
        cout<<"Stack Underflow!"<<endl;
        return -1;}
    }
};

int main(){
    Stack s;
    int c=0,i;
    string a;
    cout<<"Enter String:";
    cin>>a;
    for(int i=0;i<a.length();i++)
        s.push(a[i]);
   for(i=0; i<a.length(); i++){
    if(a[i]==s.pop()){
        c++;
    }
   }
    if(c == a.length())
        cout<<"String is a palindrome.";
    else
        cout<<"String is not a palindrome.";
}
