#include <stdio.h>
int main()
{

  int arr[10],temp,max,min;
  for(int i=0;i<5;i++) scanf("%d",&arr[i]);

  max=arr[0];
  for(int i=1;i<5;i++){
    if(max<arr[i]) max = arr[i];
  }

  printf("Max Element: %d ",max);
  printf("\n");
  min=arr[0];
  for(int i=1;i<5;i++){
    if(min>arr[i]) min = arr[i];
  }

  printf("Min Element: %d",min);
  printf("\n");

  for(int i=0;i<4;i++){
    for(int j=0;j<4-1;j++){
      if(arr[i]>arr[j]){
        temp=arr[j];
        arr[j]=arr[i];
        arr[j]=temp;

      }
    }
  }
  printf("Accending Oreder ");
  for(int i=0;i<5;i++) printf("%d ",arr[i]);
  //Deccending Order
  for(int i=0;i<4;i++){
    for(int j=0;j<4-i;j++){
      if(arr[j]<arr[j+1]){
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;

      }
    }
  }
  printf("\n");
  printf("Decending Order");
  //Accending Order
  for(int i=0;i<5;i++) printf("%d ",arr[i]);


}
