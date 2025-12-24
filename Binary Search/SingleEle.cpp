#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int SingleEle(vector<int> arr){
    int n = arr.size();
    if(n == 1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];
    int low = 1,high = n-2;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid-1] != arr[mid] && arr[mid]!= arr[mid+1]){
            return arr[mid];
        }
        if(mid%2 == 0 && arr[mid+1] == arr[mid] || arr[mid-1] == arr[mid] && mid%2 !=0){
                low = mid;
        }
        else{   
                high = mid;
        }
    }
    return -1;
}

int main(){
    vector<int>arr = {1,1,3,5,5};
    cout<<SingleEle(arr)<<endl;
}