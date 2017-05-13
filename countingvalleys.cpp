#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> num;
    int current=0;
    int count=0;
    for(int i=0;i<s.length();i++)
        {
        if(s[i]=='U')
            {
            current = current+1;
            num.push_back(current);
        }
        else if(s[i]=='D')
            {
            current = current-1;
            num.push_back(current);
        }
    }
    for(int i=0;i<num.size()-1;i++)
        {
        if(num[i]==0 && num[i+1]==-1)
            {
            count++;
        }
    }
    if(num[0]<0)
        {
        count++;
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
