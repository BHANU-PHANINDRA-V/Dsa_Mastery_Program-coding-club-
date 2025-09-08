#include <stdio.h>
int countDigits(int n) {
    //code here
    if(n==0)
   {
       return 1;
    }
    int digit=0;
    while(n>0){
        n=n/10;
        ++digit;
    }
    return digit;}
int main(){
      int n;
      printf("enter the number required : ");
      scanf("%d",&n);
      int result=countDigits(n);
      printf("no of digits of %d : %d",n,result);
      return 0;
}