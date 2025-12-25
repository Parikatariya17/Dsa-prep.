#include <iostream>
#include <vector>

using namespace std;

void sqrtt(int n){
    int low = 1,high = n,ans = 1;
    while(low<=high){
        int mid = (low+high)/2;
        if( n < (mid*mid)){
            high = mid-1;
        }else{
            ans = mid;
            low = mid+1;
        }
    }
    cout<<high<<endl;
}

int main(){
    int n = 30;
    sqrtt(n);
}