#include<vector>
#include<iostream>
#include<algorithm>

int main(){
	std::vector<int> v{1,2,3,4,5,6};
	for_each(begin(v), end(v), [](int x) -> std::vector<int>{
			if(x%2){return {1,2};}
			else {return {3,4};}
			});
	return 0;	
}
