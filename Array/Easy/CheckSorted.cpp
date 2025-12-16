#include <iostream>
#include <vector>

using namespace std;

void IsSorted(vector<int>arr,int n){
    int check = true;
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            check = false;
            break;
        }
    }
    if(check){
        cout<<"sorted array";
    }else{
        cout<<"unsorted array";
    }
}

int main(){
    vector<int> arr = {1, 2, 2, 3, 4, 5};
    int n = arr.size();
    IsSorted(arr,n);
}