#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool place(int n,vector<int>arr,int k,int dist){
    int cowcnt = 1,last = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]-last >= dist){
            cowcnt++;
            last = arr[i];
        }
        if(cowcnt == k){
            return true;
        }
    }
    return false;
}

void Aggresive(int n,vector<int>arr,int k){
    sort(arr.begin(),arr.end());
    long long low = 1,high = arr[n-1] - arr[0],ans = -1;
    while(low<=high){
        long long mid = (low + ((high - low)/2));
        bool check = place(n,arr,k,mid);
        if(check){
            ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<<ans<<endl;
}


int main(){
    vector<int> arr = {2, 12, 11, 3, 26, 7};
    int k = 5;
    Aggresive(arr.size(),arr,k);
}