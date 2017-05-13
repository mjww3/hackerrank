#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    char arr[100005];
    while(T--)
        {
        cin>>arr;
        int count=0;
        int N = strlen(arr);
        int first = 0;
        int last = N-1;
        while(first<last){
        if(arr[first]!=arr[last])
            {
            int a = arr[first];
            int b = arr[last];
            int c = int(abs(a-b));
            count = count+c;
            
        }
        first++;
        last--;

    }
        cout<<count<<endl;
    }
    
   
    return 0;
}
