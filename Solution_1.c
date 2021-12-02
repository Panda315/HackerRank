#include <stdio.h>

void calculate_the_maximum_AND(int n, int k);
void calculate_the_maximum_OR(int n, int k);
void calculate_the_maximum_XOR(int n, int k);

int main() {
    int n, k;
    printf("Enter an integer : ");
    scanf("%d",&n);
    printf("Enter thresold value : ");
    scanf("%d",&k);
    printf("\n");
    
    printf("Maximum value using AND operator within thresold value : ");
    calculate_the_maximum_AND(n, k);
    printf("\nMaximum value using OR operator within thresold value : ");
    calculate_the_maximum_OR(n, k);
    printf("\nMaximum value using XOR operator within thresold value : ");
    calculate_the_maximum_XOR(n, k);
 
    return 0;
}

void calculate_the_maximum_AND(int n, int k) 
{
  int temp=0;
  int carry;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
        carry=(i&j);
        if((carry>=temp) && carry<k)
        {
            temp=carry;
        }
      }
  }
  if(temp<k)
  printf("%d\n",temp);
  
  else 
    printf("0\n");
}

void calculate_the_maximum_OR(int n, int k) 
{
  int temp=0;
  int carry;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
        carry=(i|j);
        if((carry>=temp) && carry<k)
        {
            temp=carry;
        }
      }
  }
  if(temp<k)
  printf("%d\n",temp);
  
  else 
    printf("0\n");
}

void calculate_the_maximum_XOR(int n, int k) 
{
  int temp=0;
  int carry;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
        carry=(i^j);
        if((carry>=temp) && carry<k)
        {
            temp=carry;
        }
      }
  }
  if(temp<k)
  printf("%d\n",temp);
  
  else 
    printf("0\n");
}