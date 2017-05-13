#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--)
        {
        int count = 0;
        int N,K,n;
        cin>>N>>K;
        for(int i=0;i<N;i++)
            {
            cin>>n;
            if(n<=0)
                {
                count++;
                
            }
        }
            if(count>=K)
                {
                cout<<"NO"<<endl;
            }
            else
                {
                cout<<"YES"<<endl;
            }
            
        }
        
        
    
    return 0;
}
