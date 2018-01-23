#include<stdio.h>
#include<conio.h>
int main()
{

  int a,b,i;
  printf("enter the two limits oftwo interval: ");
  scanf("%d\n%d",&a,&b);
  for(i=a+1;i<=b-1;i++)
  {
    if(i%2==0)
    {
      printf("%d\t",i);
      i++;
    }
  }
  getch();
  return i;

}