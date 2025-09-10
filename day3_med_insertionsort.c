#include<stdio.h>
void insertionSort(int* arr, int n) {
    // Code her 
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }


}
void print(int *a,int n){
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main(){
    int a[]={15,82,7,3,54,2,0};
    int n=sizeof(a)/sizeof(a[0]);
    insertionSort(a,n);
    print(a,n);
    
}