#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&arr){
    int n = arr.size();
    for(int i =0;i<n-1;i++){
        bool flag = true;
        for(int j =0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }
}

void selectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i = 0;i<n-1;i++){
        int min_index =i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }

}

int main(){
    vector<int>arr = {1,1,7,6,5};
    selectionSort(arr);
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
