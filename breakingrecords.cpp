#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int lowest = 0;
    int highest = 0;
    int counthigh = 0;
    int countlow = 0;
    vector<int> games(n);
    int game;
    ///the number of games played
    cin>>game;
    lowest = game;
    highest = game;
    games.push_back(game);
    int ne = n-1;
    while((ne)--)
        {   
    cin>>game;
    std::sort(games.begin(),games.end());
    if(game>highest)
        {
        counthigh++;
        highest = game;
    }
        else if(game<lowest)
            {
            countlow++;
            lowest = game;
        }
    games.push_back(game);       
    }
    cout<<counthigh<<" "<<countlow<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
