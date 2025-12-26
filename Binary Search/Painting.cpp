#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

long long time_taken(int n,vector<int>arr,long long mid){
    long long cnt = 1,sum = 0;
    for(int i = 0;i<arr.size();i++){
        sum+= arr[i];
        if(sum > mid){
            cnt++;
            sum = arr[i];
        }
    }
    return cnt;
}

void Painting(int n,vector<int>arr,int k){
    long long sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    long long low = *max_element(arr.begin(),arr.end()),high = sum;
    while(low<=high){
        long long mid = low + ((high - low)/2);
        long long check = time_taken(n,arr,mid);
        if(check > k){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<<low<<endl;
}

int main(){
    vector<int> arr = {10, 20, 30, 40};
    int k = 2;
    Painting(arr.size(),arr,k);
}