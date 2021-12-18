#include <iostream>
using namespace std;

class Sparse{
    public:
    int row;
    int column;
    int value;
    void set(int r, int c, int v){
        row=r;column=c;value=v;
    }
    void FTranspose(Sparse a[], Sparse b[]){
        int r=a[0].row;
        int c=a[0].column;
        int v=a[0].value;
        b[0].set(a[0].column,a[0].row,a[0].value);
for(int i=1; i<=v;i++){
    b[i].set(a[i].column,a[i].row,a[i].value);
}
for(int i=1; i<=v;i++){
    for(int j=i+1; j<=v;j++){
        if(b[i].row>b[j].row){
            Sparse temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
}
    }
    void display(){
        cout<<row<<" "<<column<<" "<<value<<"\n";
    }
};
int main(){
    //Accepting the input in the Square Matrix form
    int m,n;
    cout<<"Enter the size of the matrix:\n";
    cin>>m>>n;
    int arr[m][n];
    int coun=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter ["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];
            if(arr[i][j]!=0)
                coun++;
        }
    }

    //Developing a sparse matrix
    Sparse s[coun+1];
    s[0].set(m,n,coun);
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                s[++k].set(i,j,arr[i][j]);
            }
        }
    }

    //Original Matrix
    cout<<"Matrix before Transposing\n";
    for(int k=0;k<=coun;k++){
        s[k].display();
    }

    Sparse b[coun+1],temp;
    cout<<"Matrix after Transposing\n";
    temp.FTranspose(s,b);
    for(int k=0;k<=coun;k++){
        b[k].display();
    }
}
