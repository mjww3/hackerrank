#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int arr[5];
    for( int i=0;i<5;i++)
        {
        arr[i]=0;
        cin>>arr[i];
    }
    sort(arr,arr+5);
    long long int max,min = 0;
    for(int i=0;i<4;i++)
        {
        min = min+arr[i];
    }
    for(int i=1;i<5;i++)
        {
        max = max+arr[i];
    }
   cout<<min<<" "<<max<<endl;
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
