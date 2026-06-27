//nothing 

#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x - x - 2;
}

double df(double x) {
    return 3*x*x - 1;
}

int main() {
    double x0, x1;
    printf("Enter initial guess: ");
    scanf("%lf", &x0);

    do {
        x1 = x0 - f(x0)/df(x0);
        printf("x = %.6lf\n", x1);

        if(fabs(x1 - x0) < 0.0001)
            break;

        x0 = x1;

    } while(1);

    printf("Root = %.6lf\n", x1);

    return 0;
}






//2Bisection Method


#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double a=1, b=2, c;

    while(fabs(b-a) > 0.0001) {
        c = (a+b)/2;

        if(f(c)==0)
            break;

        if(f(a)*f(c)<0)
            b=c;
        else
            a=c;
    }

    printf("Root = %.6lf\n", c);

    return 0;
}



//3 False Position (Regula-Falsi) Method


#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double a=1,b=2,c;

    do {
        c=(a*f(b)-b*f(a))/(f(b)-f(a));

        if(f(a)*f(c)<0)
            b=c;
        else
            a=c;

    } while(fabs(f(c))>0.0001);

    printf("Root = %.6lf\n", c);

    return 0;
}




//4 Secant Method


#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double x0=1, x1=2, x2;

    do {
        x2 = x1 - (f(x1)*(x1-x0)) /
             (f(x1)-f(x0));

        x0=x1;
        x1=x2;

    } while(fabs(f(x2))>0.0001);

    printf("Root = %.6lf\n", x2);

    return 0;
}




//5 Gauss-Jordan Method


#include <stdio.h>

int main() {
    float a[3][4];

    printf("Enter augmented matrix:\n");

    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            scanf("%f",&a[i][j]);

    for(int i=0;i<3;i++) {

        float pivot=a[i][i];

        for(int j=0;j<4;j++)
            a[i][j]/=pivot;

        for(int k=0;k<3;k++) {
            if(k!=i) {
                float factor=a[k][i];

                for(int j=0;j<4;j++)
                    a[k][j]-=factor*a[i][j];
            }
        }
    }

    printf("\nSolution:\n");

    for(int i=0;i<3;i++)
        printf("x%d = %.2f\n",i+1,a[i][3]);

    return 0;
}






//6 Trapezoidal Rule


#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x;
}

int main() {

    double a=0,b=2,h,sum;

    int n=4;

    h=(b-a)/n;

    sum=f(a)+f(b);

    for(int i=1;i<n;i++)
        sum+=2*f(a+i*h);

    double result=(h/2)*sum;

    printf("Integral = %.4lf\n", result);

    return 0;
}


//7 Simpson's 1/3 Rule



#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x;
}

int main() {

    double a=0,b=2,h,sum;

    int n=4;

    h=(b-a)/n;

    sum=f(a)+f(b);

    for(int i=1;i<n;i++) {

        if(i%2==0)
            sum+=2*f(a+i*h);
        else
            sum+=4*f(a+i*h);
    }

    double result=(h/3)*sum;

    printf("Integral = %.4lf\n", result);

    return 0;
}


//8 Lagrange Interpolation Method

#include <stdio.h>

int main() {

    int n=3;
    float x[10]={1,2,3};
    float y[10]={1,4,9};

    float xp=2.5;
    float yp=0;

    for(int i=0;i<n;i++) {

        float p=1;

        for(int j=0;j<n;j++) {

            if(i!=j)
                p=p*(xp-x[j])/(x[i]-x[j]);
        }

        yp+=p*y[i];
    }

    printf("Interpolated Value = %.4f\n", yp);

    return 0;
}











