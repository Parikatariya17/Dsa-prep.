#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int> &arr,int n){
    for(int i = 0;i<n;i++){
        int min_index = i;
        for(int j = i+1 ;j<n;j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}

void RecursiveSelectionSort(vector<int> &arr,int i,int n){
    if(i == n-1){
        return;
    }
     int min_index = i;
        for(int j = i+1 ;j<arr.size();j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    RecursiveSelectionSort(arr,i+1,n);
}

void Display(vector<int>& arr){
    for(int x:arr){
        cout<<x<<' ';
    }
}

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
//     SelectionSort(arr,n);
//    cout<<("selection sort Iteration: ");
    RecursiveSelectionSort(arr,0,n);
    cout<<("selection sort Recursion: ");
    Display(arr);
}