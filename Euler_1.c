#include <stdio.h>
#include <stdlib.h>

/* Problem 1
Multiples of 3 and 5 
Find the sum of all the multiples of 3 or 5 below 1000.*/

int main()
{
	int n;
	int sum = 0;
	
	for (n = 1; n < 1000; n++)
		if(n % 3 == 0 || n % 5 == 0) {
			sum += n;
	}
	
	printf("%i", sum);
	return 0;	
}
