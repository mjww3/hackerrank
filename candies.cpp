#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getcandies(vector<int>array,int n)
    {
    if(n==0)
        {
        return 0;
    }
    if(n==1)
        {
        return 1;
    }
    
    vector<int> sum(n);
    for(int i=0;i<n;i++)
        {
        sum[i]=1;
    }
    int i=0;
    while(i<n-1)
        {
        if(array[i+1]>array[i])
            {
            sum[i+1] = sum[i]+1;
        }
        i++;
    }
    for(int i=n-2;i>=0;i--)
        {
        if(array[i]>array[i+1] && sum[i]<=sum[i+1])
            {
            sum[i] = sum[i+1]+1;
        }
    }
    int sumtotal=0;
    for(int i=0;i<n;i++)
        {
        sumtotal = sumtotal+sum[i];
    }
    return sumtotal;
}

int main() {
    ///minimum number of candies
    int N;
    cin>>N;
    vector<int> array(N);
    for(int i=0;i<N;i++)
        {
        cin>>array[i];
    }
    int curr_max = array[0];
    int max_so_far = array[0];
    cout<<getcandies(array,N);
    return 0;
}
