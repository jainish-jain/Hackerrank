//using vector

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector <int>> narr;
    while (n--){
        int j;
        vector<int> arr;
        cin >>j;
        while (j--){
            int k;
            cin>>k;
            arr.push_back(k);
        }
        narr.push_back(arr);        
    }
    while(q--){
        int w,e;
        cin>>w>>e;
        cout<<narr[w][e]<<endl;
    }

    return 0;
}