#include <bits/stdc++.h>
using namespace std;
int Maximum(int arr[],int n){
        int largest=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
}

int Minimum(int arr[],int n){
    int smallest=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<smallest){
                smallest=arr[i];
            }
        }
        return smallest;
}

int main(){
int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout<<"Maximum element is : "<< Maximum(arr, n);
    cout<<"Minimum element is:  "<<Minimum(arr,n);
    
    return 0;
}