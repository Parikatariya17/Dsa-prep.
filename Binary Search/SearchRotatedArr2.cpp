#include <iostream>
#include <vector>
using namespace std;

void Search(vector<int>arr,int target){
     int low = 0,high = arr.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            cout<<"True "<endl;
            return;
        }else if(arr[mid] == arr[low] == arr[high]){
            low++;
            high--;
            continue;
        }
        else if(arr[mid] <= arr[high]){        //sorted right side
            if(arr[high] >= target && arr[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }else{
            if(arr[mid]>target && arr[low]<=target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
    }
    cout<<"false"<<endl;
}


int main(){
    vector<int>arr = {1,1,1,1,2,1};
    int target = 2;
    Search(arr,target);
}