#include <bits/stdc++.h>
using namespace std;

void bubble_Sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void selection_Sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++)
            if(arr[minIndex] > arr[j])
                minIndex=j;
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}
void insertion_Sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }arr[j+1]=key;
    }
}
void merge_Sort(int arr[], int left, int right){
    while(left<right){
        int mid=(left+right)/2;
        merge_Sort(arr, left, mid);
        merge_Sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
void merge(int arr[], int left, int mid, int right){
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1],R[n2];
    for(int i=0 ;i<n1; i++) L[i]=arr[left+i];
    for(int j=0 ;j<n2; j++) R[j]=arr[left+j];
    int i=0, j=0, k=left;
    while(i<n1 && j<n2){
        if(L[i]>R[j]) arr[k++]=R[j++];
        else arr[k++]=L[i++];
    }
}
void quick_Sort(int arr[],int low, int high){
    while(low<high){
        int ptn=partition(arr, low, high);
        quick_Sort(arr, low, ptn-1);
        quick_Sort(arr, ptn+1, high);

    }
}
int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low; j<high; j++){
        if(arr[j] < pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return (i+1);
}
void print(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void input(int arr[], int n){
    cout << "Enter elements: \n";
    for(int i=0 ;i<n; i++){
        cin >> arr[i];
    }
}
int main(){
    int choice,n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    while(1){
        cout << "1.Bubble Sort.\n2.Selection Sort.\n3.Insertion Sort.\n4.Merge Sort.\n5.Quick Sort.\n6.Exit.\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                input(arr,n);
                bubble_Sort(arr,n);
                print(arr,n);
                break;
            case 2:
                input(arr,n);
                selection_Sort(arr,n);
                print(arr,n);
                break;
            case 3:
                input(arr,n);
                insertion_Sort(arr,n);
                print(arr,n);
                break;
            case 4:
                input(arr,n);
                merge_Sort(arr,0,n-1);
                print(arr,n);
                break;
            case 5:
                input(arr,n);
                quick_Sort(arr,0,n-1);
                print(arr,n);
                break;
            case 6: 
                exit(0);
                cout << "Exiting Program.\n";
                break;
            default: cout << "INVALID INPUT\n";
        }
    }
}