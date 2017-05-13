#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int v,n;
    cin>>v>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
        {
        int g;
        cin>>g;
        arr.push_back(g);
    }
    for(int i=0;i<arr.size();i++)
        {
        if(arr[i]==v)
            {
            cout<<i<<endl;
        }
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
