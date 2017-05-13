#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    int spaces = N-1;
    int block = 1;
    for(int i=0;i<N;i++)
        {
        for(int j=spaces;j>0;j--)
            {
            cout<<" ";
            }
        
        for(int b = spaces;b<N;b++)
            {
            cout<<"#";
            
            
            
        }
        cout<<" "<<endl;
        spaces--;
        
        
    }
    return 0;
}
