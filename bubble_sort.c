#include <stdio.h>
void bubbleSort(int* arr, int n) {
    // Code here
    for(int pass=0;pass<n-1;pass++){
        for(int j=0;j<n-1-pass;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
      }
    }
}
int main (){
    int a[]={30,15,8,64,21,2,4};
    int n=sizeof(a)/sizeof(a[0]);
    bubbleSort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}