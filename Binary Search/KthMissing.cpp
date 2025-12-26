#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

void Missing(int n,vector<int>arr,int k){
    long long low = 1,right = arr[n-1];
    while(k--){
        long long low = 1,right = arr[n-1],ans = 1;
        while(low<=high){
            long long mid = (low+high)/2;
            
        }
    }
}

int main(){
    vector<int> arr = {5, 4, 5, 2, 3, 4, 5, 6};
    int k = 5;
    Missing(arr.size(),arr,k);
}