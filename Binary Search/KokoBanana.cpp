#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Max_ele(int n,vector<int>& arr){
    int maxm = arr[0];
    for(int i = 0;i<n;i++){
        if(maxm<arr[i])
        maxm = arr[i];
    }
    return maxm;
}

int time_req(int n,vector<int>arr,int take){
    int count = 0;
    for(int i = 0;i<n;i++){
        count+= ceil((double)arr[i]/take);
    }
    return count;
}

void KoKoBanana(int n,vector<int>arr,int h){
    int high = Max_ele(n,arr);
    int low = 1,ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int x = time_req(n,arr,mid);
        if(x > h){
            low = mid+1;
        }else{
            ans = mid;
            high = mid-1;
    }
}
    cout<<ans<<endl;
}

int main(){
    vector<int>arr = {3,6,7,11};
    KoKoBanana(4,arr,8);
}