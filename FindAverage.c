#include <stdio.h>

int main(void) {

    double x, nums, avg, sum=0;

	printf("Input the 10 numbers : \n");

	for (x=1;x<=10;x++)
	{

        printf("\t Enter Number: ",x);
        scanf("%lf",&nums);

		sum = sum + nums;
	}

	avg=sum/10.0;
	printf("The Average of all ten numbers is : %lf\n",avg);
}
