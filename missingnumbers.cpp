#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define INT_MAX 1000000
int main(){

    int n,m,a,mx = -99999,mn = INT_MAX;
    int res[1000011] = {0};

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        res[a]--;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> a;
        res[a]++;
        if(a < mn)mn = a;
        if(a > mx)mx = a;
    }
    for(int i = mn; i <= mx; i++)if(res[i] > 0)cout << i << " ";
    return 0;
}
