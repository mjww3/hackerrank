#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int count = 0;
    cin>>n;
    vector<int> candles(n);
    while(n--)
        {
        int a;
        cin>>a;
        candles.push_back(a);      
    }
    std::sort(candles.begin(),candles.end());
    int max = candles[candles.size()-1];
    count = 1;
    for(int i=candles.size()-2;i>=0;i--)
        {
        if(candles[i]-max==0)
            {
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}
