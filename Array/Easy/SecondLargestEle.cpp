#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


//basic approach
void secondValue(vector<int>arr,int n){
    if(arr.size()<=1){
        cout<<"no values";
        return;
    }
    else{
        int smallest = INT16_MAX,small = INT16_MAX,largest = INT16_MIN,large = INT16_MIN;
        for(int i = 0;i<n;i++){
            if(arr[i]<smallest){
                smallest = arr[i];
            }else if(arr[i]>largest){
                largest = arr[i];
            }
        }
        for(int i = 0;i<n;i++){
            if(arr[i] != smallest && arr[i]<small){
                small = arr[i];
            }else if(arr[i] != largest && arr[i]>large){
                large = arr[i];
            }
        }
        cout<<"2nd largest value is: "<<large<<" ,2nd smallest value is: "<<small;
    }
}

//optimized approach
void SecondLargestElement(vector<int>arr,int n){
        int large = INT_MIN,largest = INT_MIN;
        for(int i = 0;i< n;i++){
            if(largest < arr[i]){
                large = largest;
                largest = arr[i];
            }else if(large < arr[i] && arr[i] != largest){
                large = arr[i];
            }
        }
        cout<<"2nd largest value is: "<<large;
}
void SecondSmallestElement(vector<int>arr,int n){
    int smallest = INT16_MAX,small = INT16_MAX;
    for(int i = 0;i< n;i++){
            if(smallest > arr[i]){
                small = smallest;
                smallest = arr[i];
            }else if(small > arr[i] && arr[i]!= smallest){
                small = arr[i];
            }
        }
        cout<<" 2nd smallest value is: "<<small;
}

int main(){
     vector<int>arr = {1, 2, 4, 7, 7, 5};
    int n = arr.size();
    //second smallest as well 2nd largest

    //Basic Approach
    // secondValue(arr,n);

    SecondLargestElement(arr,n);
    SecondSmallestElement(arr,n);
}