#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Knapsack(float m,vector<float>val,vector<float>wt){
    float sum = 0;int i=0;
    for(i = 0;i<val.size();i++){
        if(m < wt[i]){
            break;
        }
        m-= wt[i];
        sum += val[i];
    }

    sum += (val[i] * (m/wt[i]));
    cout<<(sum)<<endl;
}

int main(){
    float capacity = 50;
    vector<float>val = {60, 100} , wt = {10,20};
    Knapsack(capacity,val,wt);
}