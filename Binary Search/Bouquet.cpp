#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long Max_ele(int n,vector<int>& arr){
    int maxm = arr[0];
    for(int i = 0;i<n;i++){
        if(maxm<arr[i])
        maxm = arr[i];
    }
    return maxm;
}

bool completed(int n,vector<int>arr,int target,int k, int value){
    int t = k;
    for(int i = 0;i<n;i++){
        if(arr[i] <= value){
            t--;
            if(t == 0){
                target--;
                if(target == 0){
                    return true;
                }
                t = k;
            }
        }else{
            t = k;
        }
    }
    return false;
}

void Bouquet(int n,vector<int> arr , int target, int k){
     long long high = Max_ele(n,arr),low = 1,ans = -1;
     while(low<=high){
        long long mid = low + ((high-low)/2);
        bool check = completed(n,arr,target,k,mid);
        if(!check){
            low = mid+1;
        }else{
            ans = mid;
            high = mid-1;
        }
     }
     cout<<ans<<endl;
}

int main(){
    vector<int>arr = {1, 10, 3, 10, 2};
    Bouquet(5,arr,3,2);
}