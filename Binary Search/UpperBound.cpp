#include <iostream>
#include <vector>
using namespace std;

void UpperBound(vector<int>arr , int target){
    int low = 0,high = arr.size()-1,ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target){
            ans = mid;
            high = mid-1;
        }else {
            low = low+1;
        }
    }
    cout<<"Upper Bound is: "<<ans<<endl;
}

int main(){
    vector<int>arr = {3,5,8,9,15,19};
    int target = 9;
    UpperBound(arr,target);
    //can be done by linearSearch also
}