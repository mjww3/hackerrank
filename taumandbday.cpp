#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ///the number of test cases
    long long int t;
    cin>>t;
    while(t--)
        {
        long long int b,w;
        cin>>b>>w;
        long long int x,y,z;
        cin>>x>>y>>z;
        long long int cost=0;
        if(y+z<x)
            {
            cost = cost+(y+z)*b;
        }
        else{
            cost = cost+x*b;
        }
        if(x+z<y)
            {
            cost = cost+(x+z)*w;
        }
        else
            {
            cost = cost+y*w;
        }
        cout<<cost<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
