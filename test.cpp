#include<iostream>
using namespace std;

void bubbleSortWithArray(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]=temp;
            }
        }
    } 
    for(int i =0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[] = {2,4,5,1,3};
   
    bubbleSortWithArray(arr,5);
}