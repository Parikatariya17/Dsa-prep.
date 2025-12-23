#include <iostream>
#include <vector>

using namespace std;

long long pows(long long x,long long n){
      if (n == 0) return 1.0;
    if(n<=1){
        return x;
    }
    if(n%2 == 0){
        return pow(x*x,n/2);
    }else{
        return x * pow(x,n-1);
    }
}

long long countGoodNumbers(long long n) {
    if(n%2 == 0){
        return pows(5,n/2) * pows(4,n/2);
    }else{
        return pows(5,n/2) * pows(4,n/2);
    }
}

int main(){
    cout << countGoodNumbers(50);
}