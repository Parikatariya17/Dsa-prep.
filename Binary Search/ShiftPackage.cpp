#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

long long days(int n,vector<int> wt,int mid){
    long long cnt = 1;
    long long sum = 0;
    for(int i = 0;i<n;i++){
        sum+= wt[i];
        if(sum>mid){
            cnt++;
            sum = wt[i];
        }
    }
    return cnt;
}

void Package(int n,vector<int> wt,int d){
    long long sum = 0;
    for(auto& wt1:wt){
        sum+= wt1;
    }
    long long low = *max_element(wt.begin(),wt.end()),high = sum,ans = -1;
    while(low<=high){
        long long mid = low + ((high-low)/2);
        long long x = days(n,wt,mid);
        // cout<<x<<' ';
        if(x <= d){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    Package(weights.size(),weights,d);
}