#include <iostream>
#include <vector>
using namespace std;


void Assign(vector<int>& st,vector<int>& cookies){
    sort(st.begin(),st.end());
    sort(cookies.begin(),cookies.end());
    int i = 0,j = 0;
    while(i<st.size() && j< cookies.size()){
        if(st[i]<=cookies[j])
        i++;
        j++;
    }
    cout<<i<<endl;
}

int main(){
    vector<int>st = {1,2,3},cookies = {1,1};
    Assign(st,cookies);
}