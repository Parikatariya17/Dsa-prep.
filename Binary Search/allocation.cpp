#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

long long pages(int n,vector<int>arr,long long totalp){
    long long cnt = 1,sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
        if(sum > totalp){
            cnt++;
            sum = arr[i];
        }
    }
    return cnt;
}

void Allocation(int n,vector<int> arr,int k){
    long long sum = 0;
    for(int i = 0;i<n;i++){
        sum+= arr[i];
    }
    long long low = *max_element(arr.begin(),arr.end()),high = sum;
    while(low<=high){
        long long mid = low + ((high - low)/2);
        int check = pages(n,arr,mid);
        if(check > k){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<< low<<endl;
}

int main(){
    vector<int> arr = {15,17,20};
    int k = 5;
    Allocation(arr.size(),arr,k);
}