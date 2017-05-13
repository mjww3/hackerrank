#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
    {
    int N,a;
    cin>>N;
    int arr[N];
    int count =0;
    for(int i=0;i<N;i++)
        {
        cin>>arr[i];
        count = count+arr[i];
        
    }
    cout<<count;
   return 0;
}