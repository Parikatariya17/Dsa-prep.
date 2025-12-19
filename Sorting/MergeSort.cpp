#include <iostream>
#include <vector>
using namespace std;

void Display(vector<int>& arr){
    for(int x:arr){
        cout<<x<<' ';
    }
}

void merging(vector<int>& arr,int low,int mid,int high){
    int l = low,i = low,h = mid+1;
    vector<int>temp;
    while(l<=mid && h<=high){
        if(arr[l]<=arr[h]){
            temp.push_back(arr[l]);
            l++;
        }else{
            temp.push_back(arr[h]);
            h++;
        }
    }
    if(l>mid){
        for(int k = h;k<=high;k++){
            temp.push_back(arr[k]);
        }
    }else{
        for(int k = l;k<=mid;k++){
            temp.push_back(arr[k]);
        }
    }
    int k = 0;
    for(int j = low;j<=high;j++){
        arr[j] = temp[k];
        k++;
    }
}

void mergesort(vector<int>& arr,int low,int high){
        if(low<high){
            int mid = (low+high)/2;
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);
            //combine
            merging(arr,low,mid,high);
        }
}

int main(){
    vector<int>arr = {10, 5, 2, 7, 1, 9};
    int n = 6;
    mergesort(arr, 0, n - 1);
    Display(arr);
}