#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string S;
    cin >> S;
    int len = S.length();
    int loops = len/3;
    int i=0;
    int count=0;
    while(loops-- && i<len)
        {
        if(S[i]!='S')
            {
            count++;
        }
         if(S[i+1]!='O')
            {
            count++;
        }
        if(S[i+2]!='S')
            {
            count++;
        }
        i=i+3;
    }
    cout<<count<<endl;
    return 0;
}
