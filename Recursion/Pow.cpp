#include <iostream>
#include <vector>

using namespace std;

double pow(double x,long long n){
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

int main(){
    double x = 2.000;
    long long n = -2;
    if(n<0){
        double ans = pow(x,n);
        cout<<1/pow(x,-1.0*n)<<endl;        // 1.0 is mandatory
        return 0;
    }
    cout<<pow(x,n)<<endl;
}
