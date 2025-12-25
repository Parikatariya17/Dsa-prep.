#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

class Data{
    public:
    void Meeting(int n,vector<int>start,vector<int>end){
        vector<tuple<int,int,int>>temp;
        for(int i = 0;i<n;i++){
            temp.push_back({end[i],start[i],i+1});
        }
        sort(temp.begin(),temp.end());
        int cnt = 1,last = get<0>(temp[0]);
        for(int i = 1;i<n;i++){
            int s = get<1>(temp[i]);
            int e = get<0>(temp[i]);
            if(s > last){
                last = e;
                cnt++;
            }
        }
        cout<<cnt<<endl;
}
};


int main(){
    vector<int>start = {1,3,0,5,8,5},end ={2,4,5,7,9,9};
    Data da;
    da.Meeting(start.size(),start,end);
}