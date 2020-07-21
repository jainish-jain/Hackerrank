#include <cstdio>
using namespace std;

int main() {
    printf("Hello, World!");
    return 0;
}

//Input and Output
// Sample Input
// 1 2 7  #A single line containing  space-separated integers: a, b,c and 
// Sample Output
// 10
// Explanation
// The sum of the three numbers is 1+2+7=10.

int main() {
    int sum =0;
    int i=0;
    while(cin>>i){
        sum+=i;
    }
    cout<<sum;
    return 0;
}