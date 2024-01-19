#include <bits/stdc++.h>
using namespace std;

void merge_two_array(int arr1[],int n,int arr2[],int m,int arr3[]){
        int i=0,j=0,k=0;
        while(i<n){
            arr3[k++]=arr1[i++];
        }
        while(j<m){
            arr3[k++]=arr2[j++];
        }

}

int main(){
    int n;
    cin >> n;
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    int arr3[n+m];
    merge_two_array(arr1,n,arr2,m,arr3);
    for (int i = 0; i < n+m; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}