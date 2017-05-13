#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int n;
    long long i, sum = 0;

    scanf("%d\n", &n);

    for (int j = 0; j < n; j++) {
        scanf("%lli ", &i);
        sum += i;
    }

    printf("%lli", sum);

    return 0;
}