#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    ///the number of elements in array
    cin>>n;
    vector<int> arr;
    while(n--)
        {
        int g;
        cin>>g;
        arr.push_back(g);
    }
    vector<int> diff;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++)
        {
            int j=i+1;
            int h = abs(arr[i]-arr[j]);
            diff.push_back(h);
        }
    sort(diff.begin(),diff.end());
    cout<<diff[0]<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
