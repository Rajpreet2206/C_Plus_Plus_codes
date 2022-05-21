#include<iostream>
#include<string>
//This program gives some operations on String container
//

int main(){
	std::string str("HELLO...We will manipulate this string");
	str.push_back('>');
	str.push_back('>');
	std::cout<<str<<std::endl;
	str.pop_back();
	std::cout<<str<<std::endl;
	str.resize(30, 'x');
	str.reserve(50);
	str.push_back('>');
	std::cout<<str<<std::endl;
	std::cout<<str.capacity()<<std::endl;
	std::cout<<str.size()<<std::endl;
	str.shrink_to_fit();
	return 0;


}
