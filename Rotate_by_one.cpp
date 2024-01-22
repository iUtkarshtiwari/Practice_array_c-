
#include <bits/stdc++.h>
using namespace std;
void Rotate_by_one(int arr[],int n){
    int a=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(i==n-1){
            arr[n-1]=a;
            return;
        }
        else{
        arr[i]=arr[i+1];}
    }

    
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Rotate_by_one(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}