#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int k;
    cin>>n>>k;
    vector<int> hurdles;
    while(n--)
        {
        int g;
        cin>>g;
        hurdles.push_back(g);
    }
    sort(hurdles.begin(),hurdles.end());
    if(hurdles[hurdles.size()-1]<=k)
        {
        cout<<0<<endl;
    }
    else{
    cout<<hurdles[hurdles.size()-1]-k<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
