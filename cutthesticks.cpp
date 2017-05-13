#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N;
    int arr[1005];
    cin>>N;
    for(int i=0;i<N;i++)
        {
        cin>>arr[i];
        }

    while(1)
        {
        int remain = 0;
        for(int k = 0;k<N;k++)
            {
            if (arr[k]!=0)
                {
                remain++;
            }
        }
        if (remain == 0)
            break;
        cout<<remain<<endl;
        int min = arr[0];
        for(int h=1;h<N;h++)
            {
            if (arr[h]<min && arr[h]!=0)
                {
                min = arr[h];
            }
            if(min == 0 )
                {
                min = arr[h];
            }

        }
        for(int k = 0;k<N;k++)
            {
            if(arr[k]!=0)
            arr[k] = arr[k]-min;
        }
        
    }
    return 0;
}
