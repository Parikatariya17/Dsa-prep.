#include <iostream>
#include <vector>
using namespace std;

void IterativeBS(vector<int> arr,int target){
    int low = 0,high = arr.size()-1;
    while(low<=high){
        int mid = (low) + ((high-low)/2);
        if(arr[mid] == target){
            cout<<"find element at index "<<mid;
            return;
        }else if(arr[mid] < target){
            low = mid+1;
        }else{
            high = mid - 1;
        }
    }
    cout<<"Element not found"<<endl;
}

void Recursive(vector<int>arr , int low , int high,int target){
    if(low>high){
        cout<<"Element not found"<<endl;
        return;
    }
    if(low<=high){
        int mid = (low) + ((high-low)/2);
        if(arr[mid] == target){
            cout<<"find element at index "<<mid;
            return;
        }else if(arr[mid] < target){
            Recursive(arr,mid+1,high,target);
        }
        else{
            Recursive(arr,low,mid-1,target);
        }
    }
}

int main(){
    vector<int>arr = {3,4,6,7,9,12,16,17};
    int target = 4;
    // IterativeBS(arr,target);
    Recursive(arr,0,arr.size()-1,target);
}