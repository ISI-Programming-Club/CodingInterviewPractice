#include<stdio.h>

int main()
{
    int k=2;
    int p=0;
    int array[k][k],list[k*k];
    for(int i=0;i<k;i++)
    {
        printf("enter %d array: \n",i+1);
        for(int j=0;j<k;j++)
        {
            scanf("%d",&array[i][j]);
            list[p]=array[i][j];
            p=p+1;
        }
    }
    for(int i=0;i<k*k;i++)
    {
        for(int j=i;j<k*k;j++)
        {
            if(list[j]<list[j+1])
            {
                int temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    printf("\n\n");
    for(int i=0;i<k*k;i++)
    {
        printf("%d\t",list[i]);
    }
    return 0;
}