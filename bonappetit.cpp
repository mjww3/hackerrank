v=#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    int total = 0;
    vector<int> items;
    while(n--)
        {
        int g;
        cin>>g;
        items.push_back(g);
        total = total+g;
    }
    int shepays;
    cin>>shepays;
    int shehaspay = ((total)-items[k])/2;
    if(shepays-shehaspay==0)
        {
        cout<<"Bon Appetit"<<endl;
    }
    else
        {
        cout<<abs(shehaspay-shepays)<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
