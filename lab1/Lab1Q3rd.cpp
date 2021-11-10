#include<iostream>
using namespace std;
class time{
public:
    int hr,minu,sec;
    void read(){
    cout<<"Enter The Time in HH:MM:SS Format:\n";
    cin>>hr>>minu>>sec;
    }
    void disp(){
        cout<<"Time: ";
    cout<<hr<<":"<<minu<<":"<<sec<<"\n";
    }
    void add(time t1,time t2){
    int H=t1.hr+t2.hr;
    int M=t1.minu+t2.minu;
    int S=t1.sec+t2.sec;
    sec=S%60;
    minu=(M+S/60)%60;
    hr=(H+M/60);
    cout<<"Sum of Two Time: ";
    cout<<hr<<":"<<minu<<":"<<sec<<"\n";
    }
    void sub(time t1,time t2){
    sec=t1.sec-t2.sec;
    minu=t1.minu-t2.minu;
    hr=t1.hr-t2.hr;
         if (sec<0){
            minu-=1;
            sec+=60;
        }
        if(minu<0){
            hr-=1;
            minu+=60;
        }
        if(hr<0){
            hr+=24;
        }
        cout<<"Difference of Two Time: ";
    cout<<hr<<":"<<minu<<":"<<sec<<"\n";
    }
};
int main(){
time t1,t2,t3;
t1.read();
t1.disp();
t2.read();
t2.disp();
t3.add(t1,t2);
t3.sub(t1,t2);
}
