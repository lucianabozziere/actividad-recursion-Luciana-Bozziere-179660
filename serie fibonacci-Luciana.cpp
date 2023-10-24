#include<stdio.h>

long long fibonacci(long long n)
{
	if (n<=0)
	{
		return 0;
	}
	else if (n == 1)
	{
	    return 1;	
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

void printFibonacci (long long n, long long i){
	if (i<=n){
		printf("%lld ",fibonacci(i));
		printFibonacci (n, i+1);
	}
}

int main()
{
	long long n;
	printf("introducir un numero: ");
	scanf("%lld",&n);
	printf("serie fibonacci: ");
	printFibonacci (n,1);

	return 0;
}

