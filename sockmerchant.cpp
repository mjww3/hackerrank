#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> socks;
    while(n--)
        {
        int g;
        cin>>g;
        socks.push_back(g);
    }
    int s = socks.size();
    vector<int> bin(s,0); 
    for(int i=0;i<socks.size();i++)
        {
        for(int j=i+1;j<socks.size();j++)
            {
            if(socks[i]==socks[j] && bin[i]==0 && bin[j]==0)
                {
                bin[i]=1;
                bin[j] = 1;
            }
        }
        
    }
    int count = 0;
    for(int i=0;i<bin.size();i++)
        {
        if(bin[i]==1)
            {
            count++;
        }
    }
    cout<<count/2<<endl;
    return 0;
}
