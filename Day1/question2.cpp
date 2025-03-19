#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 3 Numbers one by one";
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)cout<<a<<" is the greatest";
    if(a<b && b>c)cout<<b<<" is the greatest";
    if(c>b && a<c)cout<<c<<" is the greatest";
    return 0;
}
