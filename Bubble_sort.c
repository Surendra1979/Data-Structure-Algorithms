// Bubble Sort

/*
  Example :
   Enter total number of elements : 6
   Enter the elements : 23 67 16 34 90 22
   Elements in sorted order : 16 22 23 34 67 90
*/

#include<stdio.h>
#include<stdlib.h>
void bubble_Sort(int a[],int n)
{
    int b[10], i,j,temp;
    for(i=0;i<n;i++)
        b[i]=a[i];
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("\n Elements in sorted order : ");
    for(i=0;i<n;i++)
        printf("%d\t",b[i]);
}
void main()
{
    int a[20],n,i;
    printf("\n Enter the total number of elements : ");
    scanf("%d",&n);
    printf("\n Enter the elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble_Sort(a,n);
}
