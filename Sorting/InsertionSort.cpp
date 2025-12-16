# include <iostream>
#include <vector>

using namespace std;

void InsertionSort(vector<int>& arr,int n){
        for(int j = 2; j<n;j++){
            int key = arr[j];
            int i = j-1;
            while(i>=0 && arr[i]>key){
                arr[i+1] = arr[i];
                i--;
            }
            arr[i+1] = key;
        }
}

void RecursiveInsertionSort(vector<int>& arr,int n){
    if(n == 1){
        return;
    }
    RecursiveInsertionSort(arr,n-1);
    int key = arr[n-1], i = n-2;
    while(i>=0 && arr[i]>key){
         arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = key;
}

void Display(vector<int>& arr){
    for(int x:arr){
        cout<<x<<' ';
    }
}

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
//     InsertionSort(arr,n);
//    cout<<("inertion sort Iteration: ");
    RecursiveInsertionSort(arr,n);
    cout<<("inertion sort Recursion: ");
    Display(arr);
}