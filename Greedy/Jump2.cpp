#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

class Data{
    public:
    void Jump(vector<int>arr){
        int minm = 0,maxm = 0,cnt = 0;
        int start = minm,end = maxm;
        while(1){
            int start = minm,end = maxm;
        for(int i = start;i<=end;i++){
            minm = min(minm,arr[i]+i);
            maxm = max(maxm,arr[i]+i);
        }
        if(maxm >= arr.size()){
            cout<<cnt<<endl;
            return;
        }
    }
    }
};

int main(){
    vector<int>arr = {2, 3, 1, 4,1,1,1,2};
    Data da;
    da.Jump(arr);
}