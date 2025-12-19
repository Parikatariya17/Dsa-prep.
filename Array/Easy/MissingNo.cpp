#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

void Missing(int arr[], int n){
    for(int i = 1;i<n;i++){
        int flag = 0;
       for(int j = 0;j<n-1;j++){
        if(i == arr[j]){
            flag = 1;
            break;
        }
       }
       if(flag == 0){
         cout<<"MIssing No. is :"<<i;
         return;
    }
    }
}

void Missed(int arr[],int n){
    int sum = (n*(n+1))/2;
    int sum1 = 0;
    for(int i = 0;i<n-1;i++){
        sum1 = sum1 + arr[i];
    }
    cout<<"Missing No. is :"<< sum - sum1<<endl;
}

int main(){
    int n = 5;
    int arr[] = {1,2,4,5};
    Missing(arr,n);
    // Missed(arr,n);
}