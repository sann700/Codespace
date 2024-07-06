#include<stdio.h>

#include<math.h>

int isarmstrong(int n)
{
	int k;
	int cop=n, sum=0;
	while(cop>0)
	{
		k=cop%10;
		sum+=k*k*k;
		n/=10;
		return (sum);	
	}
        if(sum==n)
        return 1;
        else
        {
        return 0;
        }
    }

int main()
{
    int num;
    printf("\nEnter a number");
    scanf("%d", &num);

    if (isarmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

