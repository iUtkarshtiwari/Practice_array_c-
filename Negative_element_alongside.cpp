#include <bits/stdc++.h>
using namespace std;


void negative_element_alongside(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]<0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else{
            mid++;
        }
    }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    negative_element_alongside(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}