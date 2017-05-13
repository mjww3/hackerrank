#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> arr;
    while(n--)
        {
        int g;
        cin>>g;
        arr.push_back(g);
        
    }
    vector<int> dist;
    for(int i=0;i<arr.size();i++)
        {
        for(int j=i+1;j<arr.size();j++)
            {
            if(arr[i]-arr[j]==0)
                {
                dist.push_back(abs(i-j));
            }
        }
    }
    sort(dist.begin(),dist.end());
    if(dist.size()==0)
        {
        cout<<-1<<endl;
    }
    else
        {
         cout<<dist[0]<<endl;
    }   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
