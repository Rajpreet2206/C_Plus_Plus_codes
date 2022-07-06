#include<iostream>
#include<vector>
#include<algorithm>

int main(int argc, char* argv[]){
	std::vector<int> v{1,2,3,4,5,6};
	for_each(begin(v), end(v), [](int x){std::cout<< x << std::endl;});
	return 0;
}
