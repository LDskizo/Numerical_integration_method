#include <stdio.h>
#include <math.h>

#define n 100
//double 型で考える
#define k 1000000000000000
#define f(x) 4/(1 + (x)*(x))

int main(){
	double a = 0, b = 1, sum = 0;
	double EPS = 1.0/n;
	for(double x = a; x < b; x += EPS){
		sum += (f(x) + f(x+EPS))*k;
	}
	sum *= (EPS / 2);

	printf("%lf\n", sum);
}
