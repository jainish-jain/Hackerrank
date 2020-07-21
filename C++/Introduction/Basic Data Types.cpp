/*
Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
*/

#include <iostream>
#include <cstdio>
#include <iomanip>      // std::setprecision
using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
int main() {
    int a;
long b;
char c;
float d;
double e;
cin >> a >> b >> c >> d >> e;
cout<< a << '\n' << b << '\n' << c << '\n';
cout << fixed << setprecision(3) << d << '\n';
cout << fixed <<setprecision(9) << e << '\n';

return 0;
}

#include <iostream>
int main() {
    int a; long b; char c; float d; double e;
    
    scanf("%i %li %c %f %lf",&a,&b,&c,&d,&e);
    printf("%i\n%li\n%c\n%.03f\n%.09lf\n",a,b,c,d,e);
    
    return 0;
}