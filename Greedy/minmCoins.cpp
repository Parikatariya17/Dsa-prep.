#include <iostream>
#include <vector>
using namespace std;

void Coins(long long V,vector<int>coin){
    long long count = 0;
        for(int i = coin.size()-1;i>=0;i--){
            if(V >= coin[i]){
                int x = V/coin[i];
                V-= (coin[i]*x);
                count+= x;
            }
        }
        cout<<count<<endl;
}

int main(){
    long long V = 121;
    vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    Coins(V,coin);
}