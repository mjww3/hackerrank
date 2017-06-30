#include <cmath>
#include <numeric>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool sumequals(vector<int> arr,int n)
{
    int sumleft=0;
    for(int i=0;i<n;i++)
    {
        sumleft+=arr[i];
    }
    int sumright=0;
    for(int i=n+1;i<arr.size();i++)
    {
        sumright+=arr[i];
    }
    if(sumleft==sumright)
    {
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string answer="NO";
        int n;
        cin>>n;
        int sum=0;
        int left=0;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            arr.push_back(g);
            sum+=g;
        }
        if(arr.size()==0||arr.size()==1){
            answer="YES";
        }
        else{
            for (int i=0;i<n;i++)
            {
                sum = sum - arr[i];
                if(sum==left)
                {
                    answer = "YES";
                    break;
                }
                left = left+arr[i];
            }

       }
        cout<<answer<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}