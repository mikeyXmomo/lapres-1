#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n;
   int arr[100];
   printf("Masukkan Deret Ke ");
   scanf("%d",&n);

   arr[0]=0;
   arr[1]=1;

   for(i=2;i<n;i++){
    arr[i]=arr[i-1]+arr[i-2];
   }

   for(i=0;i<n;i++){
    printf(" %d ",arr[i]);
   }

}
