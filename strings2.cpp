#include<iostream>
#include<string>
//This program initializes strings using the assignment operator
//using namespace std;

int main(){
	std::string str = "Hello, Welcome...>This is the first string created using the assignment operator";
	std::string str1 = str;
	std::string str2;
	str2 = 'x';
	std::cout<<str<<"\n";
	std::cout<<str1<<"\n";
	std::cout<<str2<<"\n";
	return 0;
}

