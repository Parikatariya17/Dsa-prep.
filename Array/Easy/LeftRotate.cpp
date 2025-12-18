#include <iostream>
#include <vector>
using namespace std;

void Display(vector<int>& arr){
    for(int x:arr){
        cout<<x<<' ';
    }
}

void RotatebyOne(vector<int>& arr , int n){
    int x = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = x;
    Display(arr);
}


int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    RotatebyOne(arr,n);
}