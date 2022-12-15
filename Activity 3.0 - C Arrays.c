#include<stdio.h>
int main()
{
    int marks[10], i, n=10, sum=0, average;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    for(i=0; i<n; ++i){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&marks[i]);

        sum+=marks[i];
    }

    average=sum+marks[i];
    printf("Sum of all array elements=%d", sum);

    return 0;
}

