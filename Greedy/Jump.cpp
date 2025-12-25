#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

class Data{
    public:
    void Jump(vector<int>arr){
         int maxInd = 0;
         for(int i = 0;i<arr.size();i++){
            if(i > maxInd){
                cout<<"false"<<endl;
            return;
        }
                maxInd = max(maxInd,i+arr[i]);
         }
    }
};

int main(){
    vector<int>arr = {2, 3, 1, 0, 4};
    Data da;
    da.Jump(arr);
}