#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    vector<int>arr;
    while(n){
        arr.push_back(n%10);
        n/=10;
    }
    cout<<"before reversing"<<endl;
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<arr.size()/2;i++){
        swap(arr[i],arr[arr.size()-1-i]);
    }
    cout<<"after reversing"<<endl;
    for(int i: arr){
        cout<<i<<" ";
    }

}