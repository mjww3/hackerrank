#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin>>n>>d;
    int count= 0;
    vector<int> seq;
    while(n--)
        {
        int g;
        cin>>g;
        seq.push_back(g);
    }
    for(int i=0;i<seq.size();i++)
        {
        for(int j=i+1;j<seq.size();j++)
            {
            if(seq[j]-seq[i]==d){
                for(int k=i+2;k<seq.size();k++)
                {
                if(seq[k]-seq[j]==d)
                    {
                    count++;
                }
            }
            }
            
        }
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
