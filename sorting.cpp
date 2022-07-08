#include<iostream>
#include<list>
#include<algorithm>

int main(int argc, char* argv[]){
	std::list<int> l = {1,2,5,7,3};
	std::sort(l.begin(), l.end());
	std::cout<< l << std::endl;
	return 0;
}
