
#include<stdio.h>
int main()
{
    int queue[20],n,head,i,j,k,seek=0,max,diff;
    float avg;
    printf("Enter the max range of disk\n");
    scanf("%d",&max);
    printf("Enter the size of queue request\n");
    scanf("%d",&n);
    printf("Enter the queue of disk positions to be read\n");
    for(i=1;i<=n;i++)
    scanf("%d",&head);
    queue[0]=head;
    for(j=0;j<=n-1;j++)
    {
        diff=abs(queue[j+1]-queue[j]);
        seek+=diff;
        printf("disk head moves from %d to %d with seek");
    }
    printf("Total seek time %d\n",seek);
    avg=seek/(float)n;
    printf("Average seek time %f\n",avg);
    return 0;
}
