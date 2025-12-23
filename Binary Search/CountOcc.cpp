#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int>arr , int x){
    int low = 0,high = arr.size()-1,res = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            res = mid;
            high = mid - 1;
        }else if(arr[mid] > x){
            high = mid - 1;
        }else{
            low = mid+1;
        }
    }
    return res;
}

int upperBound(vector<int>arr , int x){
    int low = 0,high = arr.size()-1,res = -1;
    while(low<=high){
     int mid = (low+high)/2;
    if(arr[mid]==x){
            res = mid;
            low = mid + 1;
        }else if(arr[mid] > x){
            high = mid - 1;
        }else{
            low = mid+1;
        }
    }
    return res;
}

int main(){
    vector<int>arr =  {1, 1, 2, 2, 2, 2, 2, 3};
    int target = 2;
    int first = lowerBound(arr,target);
    pair<int,int> ans = {(first==-1)?0:first,upperBound(arr,target)};
    cout<<"no. of Occurences are: "<< ans.second - ans.first + 1;
}