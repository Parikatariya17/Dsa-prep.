#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Striver(vector<int> arr){
    
}

void MInimuminArr(vector<int>arr){
      int low = 0,high = arr.size()-1,key = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=arr[low]){      //left sorted
            key = min(arr[low],key);
            low = mid+1;
        }else{      //right sorted
            key = min(arr[mid],key);
            high = mid-1;
        }
    }
    cout<<key<<endl;
}
int main(){
    vector<int>arr = {7,8,9,1,2,3,4,5,6};
    // MInimuminArr(arr);
    Striver(arr);
}