#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, cas;
    double a, b;
    scanf("%d", &t);
    for(cas = 1;cas<=t;cas++)
    {
        scanf("%lf : %lf", &a, &b);

        double r = sqrt(b*b + a*a)/2.0;
        double theta = acos((r*r + r*r - b*b)/(2.0 * r * r));
        double s = r * theta;
        double x = 400.0/(2.0*a + 2.0*s);
        printf("Case %d: %.10lf %.10lf\n", cas, x*a, x*b);

    }
    return 0;
}
/* idea of the code taken from https://shahidul-brur.blogspot.com/2017/04/tutorial-lightoj-1056-olympics.html */

