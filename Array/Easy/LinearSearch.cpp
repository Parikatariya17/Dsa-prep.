#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

int LinearSearch(vector<int>arr , int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>arr = {1 ,2 ,3 ,4 ,5 ,6 ,7};
    int n = arr.size();
    int num = 4;

    printf("Element %d found at index: %d",num,LinearSearch(arr,n,num));
  
}