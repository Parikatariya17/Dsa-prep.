#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Rotation(vector<int> arr){
    int low = 0,high = arr.size()-1,key = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low] < arr[high]){
            cout<<low<<endl;
            return;
        }
        if(arr[mid] > arr[low]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
}

int main(){
    vector<int>arr = {3,4,5,1,2};
    Rotation(arr);
}