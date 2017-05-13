#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> numbers;
    while(n--)
        {
        int g;
        cin>>g;
        numbers.push_back(g);
    }
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<numbers.size();i++)
        {
        cout<<numbers[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
