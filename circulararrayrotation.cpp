#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k,q;
    cin>>n>>k>>q;
vector<int> numbers(n);
    for(int i=0;i<n;i++)
        {
        cin>>numbers[i];
    }
    vector<int> query(q);
    for(int i=0;i<q;i++)
        {
        cin>>query[i];
    }
    for(int i=0;i<k;i++)
        {
     numbers.insert(numbers.begin(),numbers[numbers.size()-1]);
     numbers.pop_back();
    }
    for(int i=0;i<query.size();i++)
        {
        cout<<numbers[query[i]]<<endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
