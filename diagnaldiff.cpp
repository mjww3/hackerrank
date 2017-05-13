#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
 }
        int i,sum_primary,j=0;
        while(i<n && j<n)
            {
            sum_primary = sum_primary+a[i][j];
            i++;
            j++;     
        }
    int sum_secondary=0;
    int m=n-1;
    int N=0;
    while(m>=0 && N<n)
        {
        sum_secondary = sum_secondary+a[m][N];
        m--;
        N++;
    }
    int diff = sum_primary - sum_secondary;
    cout<<abs(diff)<<endl;
    return 0;
}
