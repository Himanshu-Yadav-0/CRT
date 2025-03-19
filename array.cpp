#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(69);
    arr.push_back(96);
    arr.push_back(-8);
    arr[6] = 100;
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
