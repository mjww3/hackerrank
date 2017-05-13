#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int reversenumber(long long int n)
    {
    long long int reversedNumber = 0;
    long long int remainder;
     while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}

int main() {
   long long int i,j,k = 0;
    cin>>i>>j>>k;
   long long int count = 0;
    for(long long int start=i;start<=j;start++)
        {
        if((abs(start-reversenumber(start))%k==0))
           {
               count++;
           }
    }
    cout<<count<<endl;    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
