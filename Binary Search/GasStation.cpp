#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

void Station(int n,vector<int>arr,int k){
    long long low = 0,high = arr[n-1]-arr[0];
    while(low<=high){
             long long mid = (low + ((high - low)/2));
        long long check = Gas(n,arr,k,mid);
    }
    cout<<low<<endl;
}

int main(){
    vector<int> arr = {3, 6, 12, 19, 33};
    int k = 3;
    Station(arr.size(),arr,k);
}