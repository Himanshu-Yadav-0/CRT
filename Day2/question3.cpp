#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number ";
    int n = 0;
    cin>>n;
    for(int i =0 ;i<n;i++){
        for(int k = 0 ;k<i;k++){
            cout<<" ";
        }
        for(int j = n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
