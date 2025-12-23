#include <iostream>
#include <vector>
using namespace std;

void LowerBound(vector<int>arr , int target){
    int ans = arr.size(),low = 0,high = arr.size()-1;
    while(low<=high){
        int mid = (low+high) / 2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }else if(arr[mid] < target){
            low = mid+1;
        }
    }
    cout<<"Lower Bound is: "<<ans<<endl;
}

int main(){
    vector<int>arr = {3,5,8,15,19};
    int target = 9;
    LowerBound(arr,target);
    //can be done by linearSearch also
}