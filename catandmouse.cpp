#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    ///the number of queries
    cin>>q;
    while(q--)
        {
        int x,y,z;
        cin>>x>>y>>z;
        if(abs(x-z)>abs(y-z))
            {
            cout<<"Cat B"<<endl;
        }
        else if(abs(x-z)<abs(y-z))
            {
            cout<<"Cat A"<<endl;
        }
        else
            {
            cout<<"Mouse C"<<endl;
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
