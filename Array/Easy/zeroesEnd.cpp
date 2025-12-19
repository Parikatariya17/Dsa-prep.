#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

void Display(vector<int>& arr){
    for(int x:arr){
        cout<<x<<' ';
    }
    cout<<endl;
}

void MoveZeroes(vector<int>arr , int n){
    int i = 0, j = -1;
    while(i<n){
       while(j<n && arr[j]!=0){
        j++;
       }
       i = j+1;
       while(i<n && arr[i]!=0){
            i++;
       }
        swap(arr[i],arr[j]);
       i++;
    }
    Display(arr);
}

int main(){
    vector<int>arr = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n = arr.size();
    MoveZeroes(arr,n);
}