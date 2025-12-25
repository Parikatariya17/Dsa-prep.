#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Root(int n,int m){
    int low = 1,high = m;
    while(low<=high){
        int mid = (low+high)/2;
           long long x = pow(n,mid);
        if(x == m){
            cout<<mid<<endl;
            return;
        }else if(x > m){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout<<"-1"<<" ";
}

int main(){
    int n = 30;
    Root(8,64);
}