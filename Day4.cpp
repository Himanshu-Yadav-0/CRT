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

int maxelem(vector<int>arr){
    int max = arr[0];
    int secondmax = arr[1];
    if(arr.size()==1){
        return max = arr[0];
    }

    if(secondmax>max){
        swap(max,secondmax);
    }
    for(int i =2 ;i<arr.size();i++){
        if(arr[i]>max){
            secondmax = max;
            max = arr[i];
        }else if(secondmax <arr[i] && arr[i]!=max){
            secondmax = arr[i];
        }
    }
    return secondmax;
}

bool sortedandrotated(vector<int>arr){
    int count =0;
    for(int i =0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1%arr.size()])count++;
    }
    return count<=1;
}

int main(){
    vector<int>arr = {10,12,15,1,2,20};
    // cout<<"Found at index: "<<binarySearch(arr,20);
    cout<<"sorted and rotated or not:"<<sortedandrotated(arr);

    return 0;
}