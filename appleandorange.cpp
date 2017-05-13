#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,t,a,b,m,n = 0;
    int counta = 0;
    int countb=0;
    cin>>s>>t>>a>>b>>m>>n;
    vector<int> arr1(m);
    vector<int> arr2(n);
    for(int i=0;i<m;i++)
        {
        cin>>arr1[i];
        if(arr1[i]>0)
            {
            if(arr1[i]+a>=s && arr1[i]+a<=t)
                {
                counta++;
            }
        }
    }
    for(int i=0;i<n;i++)
        {
        cin>>arr2[i];
        if(arr2[i]<0)
            {
            if(b+arr2[i]<=t && b+arr2[i]>=s)
                {
                countb++;
            }
        }
    }
    cout<<counta<<endl;
    cout<<countb<<endl;
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
