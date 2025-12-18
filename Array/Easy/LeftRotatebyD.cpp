#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Display(vector<int>& arr){
    for(int x:arr){
        cout<<x<<' ';
    }
    cout<<endl;
}

void RotateLeft(vector<int>arr , int n,int k){
        // Normalize k if greater than n
        k = k % n;
    while(k--){
        int x = arr[0];
        for(int i = 1 ;i< n;i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = x;
    }
    Display(arr);
}

void RotateRight(vector<int>arr , int n,int k){
        // Normalize k if greater than n
        k = k % n;
    while ((k--))
    {
        int x = arr[n-1];
        for(int i = n-2;i>=0;i--){
            arr[i+1] = arr[i];
        }
        arr[0] = x;
    }
    Display(arr);
}

void reversed(vector<int>& nums,int start,int end){
      while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
}

void OptimizedRotateLeft(vector<int>arr , int n,int k){
        reversed(arr,0,n);
        reversed(arr,0,n-k);
        reversed(arr,n-k,n);
        Display(arr);
}

void OptimizedRotateRight(vector<int>arr , int n,int k){
    reversed(arr,0,n);
    reversed(arr,0,k);
    reversed(arr,k,n);
    Display(arr);
}

int main(){
    vector<int> arr={1, 2, 3, 4, 5, 6, 7};
    int n=arr.size();
    int d=2; 
    //time-> (k*n) , space -> 1
    // RotateLeft(arr,n,d);
    // RotateRight(arr,n,d);

    //time -> (n) , space -> 1
    OptimizedRotateLeft(arr,n,d);
    OptimizedRotateRight(arr,n,d);
}