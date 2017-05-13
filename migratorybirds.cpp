#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    ///theses are the input numpbers of the bird ids
    cin>>n;
    vector<int> birds;
    while(n--)
        {
        int b;
        cin>>b;
        birds.push_back(b);
    }
    int count1,count2,count3,count4,count5=0;
    int count[5];
    for(int i=0;i<5;i++)
        {
        count[i]=0;
    }
    for(int i=0;i<birds.size();i++)
        {
        if(birds[i]==1)
            {
            count[0]++;
        }else if(birds[i]==2){
            count[1]++;
        }else if(birds[i]==3){
            count[2]++;
        }else if(birds[i]==4){
            count[3]++;
        }else if(birds[i]==5){
            count[4]++;
        }
        
    }
    int maximum = count[0];
    int maximumtype=1;
    for(int j=1;j<5;j++)
        {
        if(count[j]>maximum)
            {
            maximum = count[j];
            maximumtype = j+1;           
        }
        
    }
    cout<<maximumtype<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
