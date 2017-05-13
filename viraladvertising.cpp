#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int answer = 0;
    int m;
    cin>>m;
    int result = 2;
    int like = 2;
    for(int i=2;i<=m;i++)
        {
        like = like*3;
        like = like/2;
        result = result+like;
    }
    cout<<result<<endl;
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
