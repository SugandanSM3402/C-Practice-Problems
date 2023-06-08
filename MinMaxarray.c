#include<stdio.h>
void minmax(int arr[],int number){
  int min = arr[0];
    int max = arr[0];
for(int i=0;i<number;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
          {
            max=arr[i];
          }
    }
    printf("%d",min);
    printf("%d",max);

}   
int main()
{
    int number,i;
    scanf("%d",&number);
    int arr[number];
    for(i=0;i<number;i++)
    {
        scanf("%d",&arr[i]);
    }
  minmax(arr, number);
   return 0; 

}