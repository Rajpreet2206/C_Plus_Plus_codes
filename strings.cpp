//This program initializes strings using constructors, rather than the assignment operator

#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	string str1("Hello, This is a string");
	string str2(str1);
	string str3(str1,0,5);
	string str4("Hello, This is the same string as above", 0, 5);
	string str5(10, 'x');
	string str6(str5.begin()+1, str5.end()-1);
	cout<<str<<"\n";
	cout<<str1<<"\n";
	cout<<str2<<"\n";
	cout<<str3<<"\n";
	cout<<str4<<"\n";
	cout<<str5<<"\n";
	cout<<str6<<"\n";
	return 0;
}
