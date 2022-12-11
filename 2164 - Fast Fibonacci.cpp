#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    double n, sol;
    cin>>n;
    sol = (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    printf("%.1lf\n",sol);
    return 0;
}
