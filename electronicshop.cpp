#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,n,m;
    cin>>s>>n>>m;
    int x= false;
    vector<int> keyboards;
    vector<int> drives;
    for(int i=0;i<n;i++)
        {
        int g;
        cin>>g;
        keyboards.push_back(g);
    }
        for(int i=0;i<m;i++)
        {
        int g;
        cin>>g;
        drives.push_back(g);
    }
    vector<int> answers;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
            answers.push_back(keyboards[i]+drives[j]);
        }
    }
    sort(answers.begin(),answers.end());
    for(int i=answers.size()-1;i>=0;i--)
        {
        if(answers[i]<=s)
            {
            cout<<answers[i]<<endl;
            x = true;
            break;
        }
    }
    if(x==false)
        {
        cout<<-1<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
