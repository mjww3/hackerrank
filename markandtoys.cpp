#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    cin>>n>>k;
    vector<int> toys;
    while(n--)
        {
        int g;
        cin>>g;
        toys.push_back(g);
    }
    
    int count = 0;
    sort(toys.begin(),toys.end());
    int i=0;
    while(k>=0)
        {
        
        k = k-toys[i];
        i++;
        count++;
    }
    cout<<count-1<<endl;
    return 0;
}
