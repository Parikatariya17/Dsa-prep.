#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

void Union(vector<int> arr1,int n,vector<int> arr2,int m){
    vector<int> result;
    int start1 = 0,start2 = 0;
    while(start1 < n && start2 < m){
        if(arr1[start1] < arr2[start2]){
            if(result.empty() || result.back() != arr1[start1])
            result.push_back(arr1[start1]);
            start1++;
        }else if(arr1[start1] > arr2[start2]){
            if(result.empty() || result.back() != arr2[start2])
            result.push_back(arr2[start2]);
            start2++;
        }else{
            if(result.empty() ||result.back() != arr2[start2])
            result.push_back(arr1[start1]);
            start1++;
            start2++;
        }
    }
    if(start1==n){
        for(int k = start2;k<m;k++){
            if(result.empty() || result.back() != arr2[k])
              result.push_back(arr2[k]);
        }
    }
    else{
        for(int k = start1;k<n;k++){
            if(result.empty() || result.back() != arr1[k])
             result.push_back(arr1[k]);
        }
    }
    for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
}
}

void UnionMap(vector<int> arr1,int n,vector<int> arr2,int m){
    map<int,int>mpp;
    for(int x:arr1){
        mpp[x]++;
    }
    for(int x:arr2){
        mpp[x]++;
    }
    vector<int>result;
    for(auto& [key,value] : mpp){
        result.push_back(key);
    }
       for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
}
}

void UnionSet(vector<int> arr1,int n,vector<int> arr2,int m){
    set<int>s;
      int start1 = 0,start2 = 0;
    while(start1 < n && start2 < m){
        if(arr1[start1]<arr2[start2]){
            s.insert(arr1[start1]);
            start1++;
        }else{
             s.insert(arr2[start2]);
             start2++;
        }   
    }
    if(start1==n){
        for(int k = start2;k<m;k++){
             s.insert(arr2[k]);
        }
    }
    else{
        for(int k = start1;k<n;k++){
             s.insert(arr1[k]);
        }
    }
     vector<int>result; 
    for(auto s1:s){
        result.push_back(s1);
    }
       for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
}
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10};
    int n = arr1.size();
    vector<int> arr2 = {2,3,4,4,5,11,12};
    int m = arr2.size();
    // Union(arr1,n,arr2,m);
    //UnionMap(arr1,n,arr2,m);
    UnionSet(arr1,n,arr2,m);
}

