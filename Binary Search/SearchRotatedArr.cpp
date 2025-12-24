#include <iostream>
#include <vector>
using namespace std;

void Search(vector<int>arr,int target){
    int low = 0,high = arr.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            cout<<"Found at index: "<<mid<<endl;
            return;
        }else if(arr[mid] <= arr[high]){ //right sorted
            if(arr[high] >= target && arr[mid] < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }else{          //left sorted
            if(arr[low] <= target && arr[mid]>target){
                 high = mid-1; 
            }else{
               low = mid+1;
            }
        }
    }
        cout<<"Not Found "<<endl;
}

int main(){
    vector<int>arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    Search(arr,target);
}