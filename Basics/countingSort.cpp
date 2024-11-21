#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n){
    int m=arr[0];
    for(int i=0; i<n; i++)
        if(arr[i] > m) m=arr[i];
    return m;
}
void counting_sort(int arr[], int n){
    int max=getMax(arr,n);
    int count[max+1];
    for(int i=0; i<=max; i++) count[i]=0;
    for(int i=0; i<=n-1; i++) count[arr[i]]++;
    int op[n];
    for(int i=1; i<=max; i++) count[i]+=count[i-1];
    for(int i=n-1; i>=0; i--){
        int index=count[arr[i]]-1;
        op[index]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0 ; i<n; i++) arr[i]=op[i];
    

}
//selection sort..
void swap(int arr[], int m, int n){
    int temp=arr[m];
    arr[m]=arr[n];
    arr[n]=temp;
}
void selection_sort(int arr[], int n){
    for(int j=0; j<n; j++){
        int minIndex=j;
        for(int i=j+1; i<n; i++){
            if(arr[i]<arr[minIndex]) minIndex=i;
        }
        swap(arr,j,minIndex);
    }
}
int main(){
    int n;
    cout << "n=";
    cin >> n;
    int arr[n];
    cout << "Enter: \n";
    for(int i=0 ;i<n ;i++){
        cin >> arr[i];
    }
    
    for(int i=0 ;i<n ;i++){
        cout << arr[i] << " ";
    }cout << endl;
    selection_sort(arr,n);
    for(int i=0 ;i<n ;i++){
        cout << arr[i] << " ";
    }cout << endl;
}