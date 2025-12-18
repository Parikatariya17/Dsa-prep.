#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void BruteRemove(int arr[], int n){
    unordered_set<int> seen;
    int i = 0;
    for(int num: arr){
        if(seen.find(num) == seen.end())
        seen.insert(num);
        arr[i] = num;
        i++;
    }
    for(int j = 0;j<i;j++){
        cout<<arr[j]<<' ';
    }
}


void BetterRemove(int arr[], int n){
    vector<int> ans;
    for(int i = 0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            ans.push_back(arr[i]);
        }
        bool went = false;
        while(i<n-1 && arr[i]==arr[i+1]){
            i++;
            went = true;
        }
       if(went) i--;
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i];
    }
}

int main(){
    int arr[] = {1, 2, 2, 2,3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    BruteRemove(arr,n);
    // betterRemove(arr,n);
    // OptimizedRemove(arr,n);
}