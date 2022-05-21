#include<iostream>
#include<string>

using namespace std;

int main(){
	string str("Hello...This is the string to be used with iterators");
	for(string::iterator it=str.begin(); it!= str.end(); it++){
		cout<< *it;
	}
	cout<<endl;
	for(string::reverse_iterator rit= str.rbegin();rit!= str.rend(); rit++){
		cout<< *rit;
	}
	cout<<endl;
	return 0;
}
