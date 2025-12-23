#include <iostream>
#include <vector>
using namespace std;

void LastOcc(vector<int>arr , int x){
    int low = 0,high = arr.size()-1,res = -1;
    while(low<=high){
         int mid = (low+high)/2;
        if(arr[mid] == x){
            res = mid;
            low = mid+1;
        }else if(arr[mid] > x){
            high = mid - 1;
        }else{
            low = mid+1;
        }
    }
    cout<<"Last Occurence is: "<<res<<endl;
}

int main(){
    vector<int>arr = {3, 4, 13, 13, 13, 20, 40};
    int target = 60;
    LastOcc(arr,target);
}