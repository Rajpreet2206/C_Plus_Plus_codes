#include<iostream>
#include<typeinfo>

class Base {};

int main(int argc, char* argv[]){
	auto x = 3;
	auto y = 20.5;
	auto b = new Base();

	std::cout<<typeid(x).name()<<std::endl;
	std::cout<<typeid(y).name()<<std::endl;
	std::cout<<typeid(b).name()<<std::endl;

	return 0;
}
