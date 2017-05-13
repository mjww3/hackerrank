#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
    {
    int N,countPositive=0,countNegative=0,countZero=0;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
        {
        cin>>arr[i];
        if(arr[i]>0)
            {
            countPositive++;
        }
        else
            {
            if(arr[i]<0)
                {
                countNegative++;
            }
            else
                {
                countZero++;
            }
        }
    }
    cout<<(float)countPositive/(float)N<<endl;
    cout<<(float)countNegative/(float)N<<endl;
    cout<<(float)countZero/(float)N<<endl;
return 0;
    
    }