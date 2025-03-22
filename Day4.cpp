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

int binarySearch(vector<int>arr, int target){
    int low = 0;
    int high = arr.size();
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            high = mid-1;
        }else
            low = mid+1;
    }
    return -1;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,100,120};
    cout<<"Found at index: "<<binarySearch(arr,20);

    return 0;
}