#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    int a, b, n, m, tmin, tmax;
    int tmina, tminb, tmaxa, tmaxb;
    cin >> a >> b >> n >> m;
    if (((a > b) && (n > m)) || ((a<b)&&(n<m))){
            cout << -1 << endl;
            return 0;
    }   
    tminb = (m - 1) * (1 + b) + 1;
    tmaxa = n * (1 + a) + a;
    tmina = (n - 1) * (1 + a) + 1;
    tmaxb = m * (1 + b) + b;
    if (tmina < tminb)
        tmin = tminb;
    else
        tmin = tmina;

    if (tmaxa < tmaxb)
        tmax = tmaxa;
    else
        tmax = tmaxb;
    cout << tmin << " " << tmax;
    return 0;
}
