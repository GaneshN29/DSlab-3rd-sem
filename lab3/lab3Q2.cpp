#include<iostream>
using namespace std;
class sparse{
    public:
int a[10][3];
void read(int a[10][3],int m);
void print(int a[10][3],int m);
void trans(int a[10][3],int m);
};
void sparse::read(int a[10][3],int m){
int i,j,e,n,nonZ;
cout<<"Enter the row,column and number of non-zero Element:\n";
cin>>e>>n>>nonZ;
a[0][0]=e;
a[0][1]=n;
a[0][2]=nonZ;
cout<<"Enter the value of row,column and non-zero Element:\n";
for(i=1; i<m; i++){
  for(j=0; j<3; j++){
    cin>>a[i][j];
  }
}
}
void sparse::trans(int a[10][3],int m){
    int temp,i,j,k;
    temp=a[0][0];
    a[0][0]=a[0][1];
    a[0][1]=temp;
for(i=1; i<m; i++){
    temp=a[i][0];
    a[i][0]=a[i][1];
    a[i][1]=temp;
  }
  for(i=1; i<m; i++){
        for(j=i+1;j<m; j++){
  if(a[i][0]>a[j][0]){
    for(k=0; k<3; k++){
        temp=a[i][k];
    a[i][k]=a[j][k];
    a[j][k]=temp;
    }
  }
  }}
}
void sparse::print(int a[10][3],int m){
    int i,j;
    cout<<"Row\tCol\tValue\n";
for(i=0; i<m; i++){
  for(j=0; j<3; j++){
    cout<<a[i][j]<<"\t";
  }
  cout<<"\n";
  }
}
int main(){
sparse g;
int a[10][3],e;
cout<<"Enter the number of non zero element:\n";
cin>>e;
e=e+1;
g.read(a,e);
cout<<"Sparse matrix before transpose:\n";
g.print(a,e);
g.trans(a,e);
cout<<"Sparse matrix after transpose:\n";
g.print(a,e);
}
