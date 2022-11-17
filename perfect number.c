#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,i,sum=0;
    printf("Enter a number.\n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if (num%i==0)
        {
            sum=sum+i;
        }
    }
    
    if(num==sum)
    {
        printf("%d is a perfect number.\n",num);
    }
    else
    {
        printf("%d is not a perfect number.\n",num);

    }
    return 0;
}