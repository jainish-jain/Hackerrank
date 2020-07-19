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


//Conditional Statements


#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n==1){cout<<"one";}
    else if(n==2){cout<<"two";}
    else if (n==3){cout<<"three";}
    else if (n==4){cout<<"four";}
    else if (n==5){cout<<"five";}
    else if (n==6){cout<<"six";}
    else if (n==7){cout<<"seven";}
    else if (n==8){cout<<"eight";}
    else if (n==9){cout<<"nine";}
    else {cout<<"Greater than 9";}

    return 0;
}

//For Loop

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

//Functions

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a,int b,int c,int d){
    int s=a;
    if (b>s){s=b;}
    if(c>s){s=c;}
    if(d>s){s=d;}
    return s;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


int max_of_four(int a,int b,int c,int d)
{ 
    int x,y; x=max(a,b); y=max(c,d);
    return max(x,y); 
 }


int main() { 
    int a,b,c,d,p;

    cin>>a>>b>>c>>d;

    p=((max(a,b)>max(c,d))?max(a,b):max(c,d));  
    cout<<p;
    return 0;
}

//Pointer

#include <stdio.h>
void update(int *a,int *b) {
    // Complete this function 
    int sum=*a+*b;
    int diff=*a-*b>0?*a-*b:-(*a-*b);
    *a=sum;
    *b=diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



//Arrays Introduction

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


//Variable Sized Arrays
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


