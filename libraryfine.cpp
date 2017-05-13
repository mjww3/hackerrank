#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> returnedDate;
    vector<int> expectedDate;
    for(int i=0;i<3;i++)
        {
        int g;
        cin>>g;
        returnedDate.push_back(g);
    }
        for(int i=0;i<3;i++)
        {
        int g;
        cin>>g;
        expectedDate.push_back(g);
    }
    
    if(returnedDate[2]-expectedDate[2]>0)
        {
        cout<<10000<<endl;
    }
    else if(returnedDate[2]-expectedDate[2]<0)
        {
        cout<<0<<endl;
    }
    else if(returnedDate[1]-expectedDate[1]>0)
        {
        cout<<(returnedDate[1]-expectedDate[1])*500<<endl;
    }
    else if(returnedDate[2]-expectedDate[2]==0 && returnedDate[1]-expectedDate[1]<0)
        {
        cout<<0<<endl;
    }
    else if(returnedDate[0]-expectedDate[0]>=0)
        {
        cout<<(returnedDate[0]-expectedDate[0])*15<<endl;
    }
    else if(returnedDate[2]-expectedDate[2]==0 && returnedDate[1]-expectedDate[1]==0 && returnedDate[0]-expectedDate[0]<0)
        {
        cout<<0<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
