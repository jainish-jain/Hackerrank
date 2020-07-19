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