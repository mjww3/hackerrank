#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    //the number of test cases
    cin>>t;
    while(t--)
        {
        int a,b;
        cin>>a>>b;
        int count=0;
        int sqrta = floor(sqrt(a));
        int sqrtb = floor(sqrt(b));
        if(sqrt(a)==sqrt(b) && sqrt(a)==floor(sqrt(a)))
            {
            count++;
        }
        else if(sqrt(a)==floor(sqrt(a)))
            {
            count++;
        } 
        count  = count+sqrtb-sqrta;
        cout<<count<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
