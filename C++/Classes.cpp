//Structs
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
struct Student{
    int age ;
    string first_name;
    string last_name;
    int  standard;

}st;

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

//Class
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
    stringstream ss,st;

    int age,stdn;
    string fname,lname;
    //public:
    void set_age(int nage){
        age=nage;
    }
    void set_standard( int nstdn){
        stdn=nstdn;
    }
    void set_first_name(string nfname){
        fname=nfname;

    }
    void set_last_name(string nlname){
        lname=nlname;
    }
    int get_age(){return age;}
    int get_standard(){return stdn;}
    string get_first_name(){return fname;}
    string get_last_name(){return lname;}
    string to_string(){
        string sage,sstandard,res;
        ss << age;
        ss >> sage;
        st << stdn;
        st >> sstandard;
        res=(sage+","+fname+","+lname+","+sstandard);
        return res;
    }

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

//Classes and Objects

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    
    int sum=0;
    public:
    void input(){
        for (int i=0;i<5;i++){
            int s;cin>>s;
            sum+=s;
        	}
        }
    int calculateTotalScore(){return sum;}



};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

//Box It!



#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box{
    private:
    int l,b,h;
    public:
    Box():l(0),b(0),h(0){};
    Box(int length,int breadth,int height):l(length),b(breadth),h(height){};
    Box (Box& B){ l= B.l ; b=B.b ; h=B.h;};

    int getLength(){return l;}
    int getBreadth(){return b;}
    int getHeight(){return h;}
    long long CalculateVolume(){
        return (long long)l*b*h;
    }
    bool operator<(const Box& B){
        if ((l<B.l)||((b<B.b)&& (l==B.l))||((h<B.h)&&(b==B.b)&&(l==B.l))){
            return true;
        }
        else{return false;}
    }
    friend ostream& operator<<(ostream& out, Box& B){
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }
};
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}


//Inherited Code

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */
class BadLengthException{
    private:
    int n;
    public:
    BadLengthException (int len){
        n=len;
    }
    int what(){
        return n;
    }
};

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}

//Exceptional Server


#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;

		/* Enter your code here. */
        //Server serv;
        //int answer = serv.compute(A,B);

        try{
            int answer = Server::compute(A,B);
            cout << answer<< endl;
        }catch(invalid_argument e){
            cout << "Exception: " <<  e.what() << endl;
        }catch(const bad_alloc& e){
            cout << "Not enough memory" << endl;
        }catch(out_of_range e){
            cout << "Exception: "<< e.what()<< endl;
        }catch(...){
            cout << "Other Exception" << endl;
        }

	}
	cout << Server::getLoad() << endl;
	return 0;
}