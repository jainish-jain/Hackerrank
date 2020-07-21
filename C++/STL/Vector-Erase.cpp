#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int  i,j;
    cin>>i;
    vector <int> v;
    while(i--){ 
        cin>>j;
        v.push_back(j);
    }  
    int e;
    cin>>e;
    v.erase(v.begin()+e-1);
    int r,l;
    cin>>r>>l;
    v.erase(v.begin()+r-1,v.begin()+l-1);
    cout<<v.size()<<"\n";
    for(int y:v){cout<<y<<" ";}
    return 0;
}
