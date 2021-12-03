#include <stdio.h>

int main() 
{
    printf("\e[1;1H\e[2J");
    int n,k;
    printf("Enter an integer : ");
    scanf("%d", &n);
    
    k=(n*2)-2;                  //calculation for the number of iteration to be done
 
    int temp=k;                //row counter
    for(int i=0;i<=k;i++)
    {
        int index=k;           //column counter
        for(int j=0;j<=k;j++)
        {   
            if(j>=i&&index>=i) 
            {
                printf("%d ",n-i);
            }
            else if(j<i&&index>i)
            {
                printf("%d ",n-j);
            }
            else if(j>i&&index<i){
                printf("%d ",n-index);
            }
            else if(j>=temp&&index>=temp)
            {
                printf("%d ",n-temp);
            }
            index--;
        }
        temp--;
        printf("\n");
    }
    return 0;
}