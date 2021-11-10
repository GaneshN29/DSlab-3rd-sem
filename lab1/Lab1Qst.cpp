#include<iostream>

using namespace std;
int length(char *d){
    int b=0;
for(int i=0; d[i]!='\0'; i++){
    b++;
}
return b;
}
void add(char *s,char *m,int j){
    char f[10];
    int u=0,y;
    y=length(m);
for(int i=0; i<j; i++){
    f[u]=s[i];
    u++;
}
for(int i=0; i<y; i++){
    f[u]=m[i];
    u++;
}
for(int i=j; i<length(s); i++){
    f[u]=s[i];
    u++;
}
f[u]='\0';
cout<<f;
}
void rem(char *s,char *h){
int r,l,loc=-1;
bool flag=false;
r=length(s);
l=length(h);
    for (int i=0; i<=r-l;i++){
        for (int j=i;j<i+l;j++){ //this loop takes length of substring and check at each i th position for substring//
            flag=true;
            if(s[j]!=h[j-i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            loc=i;
            break;
        }
    }
    if (loc==-1){
        cout<<"Substring not found in string";
    }
    else{
        for(int i=0;i<(r-loc-l);i++){ //transfer after substring element forward//
        s[loc+i]=s[loc+l+i];
    }
    s[r-l]='\0';
    cout<<s;
    }
}
void comp(char *s,char *k){
if(s==k){
    cout<<"both string are equal";
}
else{
    if(s>k){
    cout<<"string 1 is greater than string 2";
}
if(s<k){
      cout<<"string 2 is greater than string 1";
}
}
}
void cat(char *s,char *k){
    int o,p;
    o=length(s);
    p=length(k);
for(int i=0; k[i]!='\0'; i++){
    s[i+o]=k[i];
}
s[p+o]='\0';
cout<<s;
}
int main(){
    int a,b=0,g,j,c=0,e,q,o,p;
char s[100],k[100],m[100],h[100],l[100],x[100];
cout<<"Enter the string1:";
cin>>s;
cout<<"Enter the string2:";
cin>>k;
cout<<"\nlength of string1:";
o=length(s);
cout<<o;
cout<<"\n"<<"length of string2:";
p=length(k);
cout<<p;
cout<<"\nString after concatenation:\n";
cat(s,k);
cout<<"\nString after comparing:\n";
comp(s,k);
cout<<"\nEnter the string:";
cin>>x;
cout<<"\nEnter the substring:";
cin>>m;
cout<<"\nenter the position to insert:";
cin>>j;
add(x,m,j-1);
cout<<"\n";
cout<<"Enter the string:";
cin>>l;
cout<<"\nEnter the substring to be deleted:";
cin>>h;
cout<<"\n";
rem(l,h);
};

