
//StringStream

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream s(str);
    vector <int> a;
    char ch;
    int t;
    while(s>>t)
    { 
        a.push_back(t);
        s>>ch; 
    }
    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

//Strings

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int i=a.size();
    int j=b.size();
    cout<<i<<" "<<j<<'\n';
    cout<<a+b<<'\n';
    swap(a[0],b[0]);
    cout<<a<<" "<<b;

  
    return 0;
}

