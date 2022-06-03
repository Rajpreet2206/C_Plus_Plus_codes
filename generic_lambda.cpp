#include<iostream>

void lambda_generic(){
	auto generic = [](auto x, auto y){return x+y;};

	std::cout<<generic(1,3)<<std::endl;
	std::cout<<generic(1.2, 3.4)<<std::endl;
}

int main(){
	lambda_generic();
	return 0;
}
