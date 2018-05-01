#include <stdio.h>
#include <math.h>

#define n 100000
#define f(x) 4/(1 + (x)*(x))

int main(void) {
    double a=0, b=1, x, x1, x2, EPS, sum, s1;

    for (int i=0; i<=360; i++) {
        EPS = (b-a)/(2*n);
        sum = 0;

        for(int j=0; j<=n; j++) {
            x = a + 2*j*EPS;
            x1 = x + EPS;
            x2 = x + 2*EPS;
            s1 = ( ( f(x) + 4*f(x1) + f(x2) )/3 )*EPS;
            sum += s1;
        }
    }

    printf("n = %d sum = %f\n", n, sum);

    return 0;
}

