#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   ///maximum subarray problem
    int T,N;
    
    cin>>T;
    while(T--)
        {
        cin>>N;
        int sum=0;
        vector<int> array(N);
        int negativecount = 0;
            for(int i=0;i<N;i++)
            {
            cin>>array[i];
            if (array[i]<0)
                {
                negativecount = negativecount+1;
            }
            
        }
        
        if (negativecount<N)
            {
            int curr_max = array[0];
            int max_so_far =array[0];
        ///for the contigous array
        for(int i=1;i<N;i++)
            {
            curr_max = max(array[i],curr_max+array[i]);
            max_so_far = max(max_so_far,curr_max);
        }
        cout<<max_so_far<<" ";
        ///for the non contigous array
        for(int i=0;i<N;i++)
            {
            if (array[i]>0)
                {
                sum= sum+array[i];
            }
        }
        cout<<sum<<endl;
        }
        else if(negativecount==N)
            {
            int max = array[0];
            for(int i=0;i<N;i++)
                {
                if (array[i]>max)
                    {
                    max = array[i];
                }
            }
            cout<<max<<" "<<max<<endl;
        }
    }
    return 0;
}
