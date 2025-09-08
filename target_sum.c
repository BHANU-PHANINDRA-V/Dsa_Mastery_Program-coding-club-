#include <stdio.h>
#include<stdbool.h>
int main() {
   int n=10;
    int a=-1,b=-1;
    
    for(int i = 1; i < n; i++)
    {   bool flagi=0,flagj=0;
        for(int j = 1; j < n; j++)
        {
            if(i+j == n)
            {   int k=i;
               while(k>0) {
                if(k%10==0){
                    flagi=1;
                 break;}
               // printf("%d i, ",k);   helpful  for debugging 
                k=k/10;
               }
              int l=j;
               while(l>0) {
                if(l%10==0){
                    flagj=1;
                    break;}
                    //printf("%d j, ",l);  helpful  for debugging
                l=l/10;
               }
               if(flagi==0 && flagj==0){
                   a=i;
                   b=j;
                   printf("%d=%d+%d\n",n,a,b);
               }
            }
        }
      //  printf("%d=%d+%d\n",n,a,b);
    }
    //printf("\n");
    //printf("%d=%d+%d\n",n,a,b);

    return 0;
}