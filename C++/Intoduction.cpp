//Say "Hello, World!" With C++

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


//Basic Data Types
/*
Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
*/

