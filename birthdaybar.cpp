#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n;
    cin>>n;
    vector<int> arr;
    while(n--)
        {
        int g;
        cin>>g;
        arr.push_back(g);
    }
    int d,m;
    cin>>d>>m;
    int count = 0;
    int b=0;
    int nm = arr.size();
    for(int i=0;i<=nm-m;i++)
        {
        count = arr[i];
        for(int j=1;j<m;j++)
            {
            count = count+arr[i+j];
        }      
        if(count==d)
            {
            b++;
        }
    }
    cout<<b<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
