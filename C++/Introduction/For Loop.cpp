#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i,j;
    string nm[12]={"","one","two","three","four","five","six","seven","eight","nine","odd","even"};
    cin>>i>>j;
    for (i;i<=j;i++){
        if (i>0 && i<10){
            cout<<nm[i]<<'\n';
        }
        else if (i%2==0){
            cout<<nm[11]<<'\n';
        }
        else {
            cout<<nm[10]<<'\n';
        }
    }

    return 0;
}