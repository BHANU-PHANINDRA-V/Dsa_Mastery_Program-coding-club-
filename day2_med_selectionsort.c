#include <stdio.h>
void selectionSort(int a[], int n) {
    // Code here
    
    for(int j=0;j<n;j++)
    {
        int small=a[j];
        int sindex=j;
        for(int k=j+1;k<n;k++)
        {
            if(a[k]<small)
            {
                small=a[k];
                sindex=k;
            }
        }
        int temp=a[j];
        a[j]=small;
        a[sindex]=temp;
    }
    for(int l=0;l<n;l++)
    printf("%d ",a[l]);
}
int main() {
    // Write C code here
    //printf("Try programiz.pro");
    int n=10;
    int a[n];
    for(int l=n;l>=0;l--)
    a[n-l]=l;
    selectionSort(a,n);
    return 0;
}