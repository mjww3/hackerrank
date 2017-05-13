#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> cupcakes;
    while(n--){
        int g;
        cin>>g;
        cupcakes.push_back(g);
    }
    long long int calories=0;
    std::sort(cupcakes.begin(),cupcakes.end());
    int j=0;
    for(int i=cupcakes.size()-1;i>=0;i--)
        {
        calories = calories+(cupcakes[i]*pow(2,j));
        j++;        
    }
    cout<<calories<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
