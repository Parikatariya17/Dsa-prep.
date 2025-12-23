#include <iostream>
#include <vector>
using namespace std;

void SearchPos(vector<int>arr,int target){
    int low = 0,high = arr.size()-1,ans = arr.size();
   while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid] == target){
        cout<<"Insert in "<< mid<<endl;
        return;
    }
    else if(arr[mid]>target){
        ans = mid;
        high = mid-1;
    }else{
        low = mid+1;
    }
   }
    cout<<"Insert Value at: "<<ans<<endl;
}

int main(){
     vector<int>arr = {1,2,4,7};
    int target = 0;
    SearchPos(arr,target);
}