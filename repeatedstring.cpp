#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    long long int n;
    cin>>s>>n;
    long long int l = n/s.length();
    long long int r = n%s.length();
    long long int count=0;
    string reststring;
    for(int i=0;i<s.length();i++)
        {
        if(s[i]=='a')
            {
            count++;
        }
    }
    count = count*l;
    for(int i=0;i<r;i++)
        {
        if(s[i]=='a')
            {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
