#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,m;
    while(t--)
    {       
        bool found= false;
        cin>>m>>n;
        int i,j;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            arr.push_back(c);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==m)
                {
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        cout<<i+1<<" "<<j+1<<endl;
        
    }
    return 0;
}