#include <iostream>
#include <vector>
using namespace std;

int floor(vector<int>arr , int x){
    int low = 0,high = arr.size()-1,res = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return arr[mid];
        }else if(arr[mid]<x){
            res = arr[mid];
            low = mid+1;
        }else{
            high = mid - 1;
        }
    }
    return res;
}

int ceil(vector<int>arr , int x){
    int low = 0,high = arr.size()-1,res = -1;
    while(low<=high){
        int mid = (low+high)/2;
         if(arr[mid] == x){
            return arr[mid];
        }else if(arr[mid]<x){
            low = mid+1;
        }else{
            res = arr[mid];
            high = mid - 1;
        }
    }
    return res;
}

int main(){
    vector<int>arr = {3, 4, 4, 7, 8, 10};
    int target = 1;
    int first = floor(arr,target),second = ceil(arr,target);
    cout<<"Floor value is: "<<first<<endl<<"ceil value is: "<<second<<endl;
}