#include<stdio.h>
#include<math.h>
int main()
 {
    int n, i;

    printf("Enter the upper limit (n)");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n",n);

    for(i = 1; i <= n; i++) 
	{
        int num = i, temp = i, digits = 0, sum = 0;

        while(temp > 0)
		 {
            temp /= 10;
            digits++;
        }

        temp = num;
        while(temp > 0) 
		{
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if(sum == num) 
		{
            printf("%d ", num);
        }
    }

    return 0;
}