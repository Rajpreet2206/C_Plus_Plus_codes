#include<iostream>
#include<vector>

int main(int argc, char* argv[]){
	std::vector<int> v{1,2,3,4,5};
	auto b = std::move(v);
	std::cout<<"v: "<< v.size()<< std::endl;
	std::cout<<"b: "<< b.size()<< std::endl;
	return 0;
}
