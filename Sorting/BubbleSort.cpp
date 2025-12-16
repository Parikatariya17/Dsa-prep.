#include <iostream>
#include<vector>

using namespace std;

void BubbleSort(vector<int>&arr , int n){
    for(int i = 0 ; i < n-1;i++){
        int flag = 0;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

void RecursiveBubbleSort(vector<int>& arr,int n){
    if(n == 1){
        return;
    }
    int count = 0;
    for(int j = 0; j < n-1;j++){
        if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                count = 1;
        }
    }

    if(count == 0){
        return;
    }

    RecursiveBubbleSort(arr,n-1);

}

void Display(vector<int>& arr){
    for(int x:arr){
        cout<<x<<' ';
    }
}

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    // BubbleSort(arr,n);
    RecursiveBubbleSort(arr,n);
    Display(arr);
}