#include<iostream>
using namespace std;
class student{
    public:
char name[10];
int roll;
double grade;
void read(){
cout<<"Enter the name:";
cin>>name;
cout<<"\nEnter the roll no:";
cin>>roll;
cout<<"\nEnter the grade:";
cin>>grade;
}
void disp(){
    cout<<roll<<"\t\t";
cout<<name<<"\t\t";
cout<<grade<<"\n";
}

};
int main(){
student s[10],temp;
int i,j,k,n;
cout<<"Enter the No of student:";
cin>>n;
cout<<"\n";
for(int i=0; i<n; i++){
        cout<<"Enter the detail of "<<i+1<<" Student:\n";
    s[i].read();
    }
    for(int j=0; j<n; j++){
        for(int k=j+1; k<n; k++){
            if(s[j].roll>s[k].roll){
                    temp=s[j];
                    s[j]=s[k];
                    s[k]=temp;
                }
            }
        }
cout<<"Roll.No\t\t"<<"Name\t\t"<<"Grade\n";
        for(int i=0; i<n; i++){
      s[i].disp();
    }
}
