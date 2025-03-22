#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int>arr,int target){
    int n = arr.size();
    for(int i =0;i<n;i++){
        if(arr[i]==target) return i;
    }
    return -1;
}

int main(){
    vector<int>arr = {2,4,5,1,3};
    cout<<"Found at index: "<<linearSearch(arr,4);

    return 0;
}