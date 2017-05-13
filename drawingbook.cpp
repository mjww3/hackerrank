#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,p;
    cin>>n>>p;
    int fromstart,fromend=0;
    int reached=0;
     if(reached+1==p)
       {
         fromend=0;
         cout<<0<<endl;
         return 0;
        }
    while(true && reached<=n)
        {
        if(reached+2==p)
        {fromstart++;
            break;
        }
        else if(reached+3==p){
            fromstart++;
            break;
        }
        reached = reached+2;
        fromstart++;
    }
    reached=n;
    if(n%2==1)
        {
        if(reached-1==p)
            {
            fromend=0;
            cout<<0<<endl;
            return 0;
        }
                if(reached==p)
            {
            fromend=0;
            cout<<0<<endl;
            return 0;
        }
        while(true && reached>=0){
            if(reached-2==p){fromend++;break;}
            else if(reached-3==p){fromend++;break;}
            reached-=2;
            fromend++;
        }
    }
    else if(n%2==0)
        {
        if(reached==p)
            {
            fromend=0;
            cout<<0<<endl;
            return 0;
        }
        while(true && reached>=0){
            if(reached-1==p){fromend++;break;}
            else if(reached-2==p){fromend++;break;}
            reached-=2;
            fromend++;
        }
    }
    cout<<min(fromstart,fromend)<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
