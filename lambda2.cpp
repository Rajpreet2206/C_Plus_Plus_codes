#include<vector>
#include<iostream>
#include<algorithm>
// In this code, the lambda function captures a prefix by reference and prepends it to the integer in the standard output

int main(){
	std::vector<int> v{1,2,3,4,5,6};
	std::string prefix ("0");
	std::string prefix2 ("1");
	for_each(begin(v), end(v), [&prefix, &prefix2](int x){std::cout<<prefix<< x << prefix2 << std::endl;});
	return 0;
}
