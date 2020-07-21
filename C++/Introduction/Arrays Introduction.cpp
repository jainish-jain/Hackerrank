#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];} 
    for(n;n>0;n--){cout<<a[n-1]<<" ";}
    return 0; 
}
