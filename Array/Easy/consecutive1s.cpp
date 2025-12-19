#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void consecutive(vector<int>arr , int n){
    int maxm = 0,count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            count++;
        }else{
            count = 0;
        }
         maxm = max(maxm,count);
    }
    cout<<maxm<<endl;
}

int main(){
    vector<int>arr = {1, 1, 0, 1, 1, 1};
    int n = arr.size();
    consecutive(arr,n);
}