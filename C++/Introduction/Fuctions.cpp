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
///////////////////////////////

int max_of_four(int a,int b,int c,int d)
{ 
    int x,y; x=max(a,b); y=max(c,d);
    return max(x,y); 
 }

//////////////////////////////
int main() { 
    int a,b,c,d,p;

    cin>>a>>b>>c>>d;

    p=((max(a,b)>max(c,d))?max(a,b):max(c,d));  
    cout<<p;
    return 0;
}