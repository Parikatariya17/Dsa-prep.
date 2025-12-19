#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;


//
void appears(vector<int>arr,int n){
    unordered_map<int,int>mpp;
    for(int num:arr){
        mpp[num]++;
    }
    for(auto& [key,value] : mpp){
        if(value == 1){
            cout<<key<<endl;
            return;
        }
    }
}

int main(){
    vector<int>arr = {2,2,1};
    int n = arr.size();
    appears(arr,n);
}