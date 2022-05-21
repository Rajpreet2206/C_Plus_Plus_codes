#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isPalindrome(const string& str){
	string s(str.begin(), str.end());
	s.erase(remove_if(s.begin(), s.end(), [](const char& c){return ispunct(c)||isspace(c);}), s.end());
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	string sr(s.rbegin(), s.rend());
	return (s == sr);
}

int main(){
	string str= "Never Odd or Even";
	cout<<" Is  string ' "<< str << " ' " << " a Palindrome ?"<< endl<< (isPalindrome(str) ? " YES" : " NO") <<endl;
	return 0;
}
