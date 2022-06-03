#include<iostream>

void lambda_value_capture(){
	int value=1;
	auto copy_value= [value]{return value;};
	value = 100;
	auto stored_value = copy_value();
	std::cout<<"Stored Value " <<stored_value<<std::endl;
	std::cout<<"And Value is "<< value<<std::endl;
}

int main(){
	lambda_value_capture();
	return 0;
}
