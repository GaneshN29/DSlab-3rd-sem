##include <iostream>
#define n 100
using namespace std;
class Stack {
    private:
    int top;
    int arr[n];
    public:
    Stack(){
        top=-1;
    }
    void push(int elem){
        if(top<n){
            arr[++top]=elem;
        }
        else{
            cout<<"Overflow"<<endl;
        }
    }

    int pop(){
        if(top!=0)
            return arr[top--];
            else{
        cout<<"Underflow"<<endl;
        return -1;}
    }
    void display(){
        for(int i=top;i>=0;i--){
            if(arr[i]<=10)
                cout<<arr[i];
            else
            {
                char c=arr[i]+55;
                cout<<c;
            }

        }
    }
};

int main(){
    Stack s;
    cout<<"Enter number:";
    int numb;
    cin>>numb;
    int base,div;
    cout<<"Enter the base:";
    cin>>base;
    do{
        div=numb%base;
        numb=numb/base;
        s.push(div);
    }   while(numb>=base);
    s.push(numb);
    s.display();
}