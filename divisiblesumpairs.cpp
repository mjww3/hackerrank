#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,k;
    int array[110];
    int temp;
    cin>>n>>k;
    int count = 0;
    for(int i=0;i<n;i++)
        {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
        {
        for(int j=i+1;j<n;j++)
            {
                if((array[i]+array[j])%k==0)
                    {
                    count++;
                }
                
            }
            
        }
        
    cout<<count<<endl;
    return 0;
    
}
