#include<stdio.h>
#include<conio.h>

max(float a[], int n);
void main()
{
int i,n;
float a[100];
 printf("n How many elements you want to enter:n");
 scanf("%d",&n);
 printf("n Enter the elements:");
 for(i=0;i<n;i++)
 scanf("%f",&a[i]);
 max(a,n);
 getch();
}
max(float a[], int n)
{
 int i;
 float k, large;
 large=a[0];
 for (i=1;i<n;i++)
 {
  if (a[i]>large)
  {
   k=a[i];
   a[i]=large;
   large=k;
  }
 }
 printf("Largests element is :       %f", large);
return 0;
}
