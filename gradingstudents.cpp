#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int arr[20] = {5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
    ///this is the single integer n
    cin>>n;
    while(n--)
        {
        int grade = 0;
        cin>>grade;
        for(int i=0;i<20;i++)
            {
            if(abs(arr[i]-grade)<3 && grade>=38 && arr[i]>grade)
                {
                grade = arr[i];
            }
            else if(grade<38)
                {
                grade = grade;
            }
        }
        cout<<grade<<endl;
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
