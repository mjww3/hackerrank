#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length()-1;i++)
        
        {
        if(s[i]==s[i+1])
            {
            count++;
        }
        
    }
    cout<<count<<endl; 
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
