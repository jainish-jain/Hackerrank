#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i;
    cin>>i;
    int k =i;
    vector <int> v;
    while(i--){
        int j;
        cin>>j;
        v.push_back(j);
            }        
    sort(v.begin(),v.end());
    for (int x:v){cout<<x<<" ";}
    return 0;
}