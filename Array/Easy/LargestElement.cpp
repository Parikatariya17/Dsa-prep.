#include <iostream>
#include <vector>

using namespace std;

//optimal-> 
//space:o(1)
//time:O(n)
void LargestElement(vector<int>arr,int n ){
    int largest = arr[0];
    for(int i = 2;i<n;i++){
        if(arr[i] > largest)
        largest = arr[i];
    }
    cout<<"Largest Element: "<<largest;
}

//Brute: Sorting

int main(){
    vector<int>arr = {3, 5, 7, 2, 8, -1, 4};
    int n = arr.size();

    LargestElement(arr,n);
}