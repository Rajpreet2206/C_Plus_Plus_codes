#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int main(int argc, char* argv[]){
	std::vector<std::string> Strings{"Apple", "Umbrella", "Orange"};
	std::string Prefix("An");
for_each(begin(Strings), end(Strings), [&Prefix](std::string S){std::cout<< Prefix << " " << S << std::endl;});
	return 0;
}
