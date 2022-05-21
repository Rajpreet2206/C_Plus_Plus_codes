#include<iostream>

using namespace std;

int count_x(const char* p, char X){
	if(p == nullptr)
		return 0;
	
	auto count = 0;
	while(*p){
		if(*p == X)
			++count;
		++p;	
	}	
	return count;
	

}

int main(){
	char W;
	int result_of_count_x = count_x("HELLOWOWOSCINAOB",W);
	cout<<"The character "<< W << " occurs "<< result_of_count_x << " times in the given string."<<"\n";
	return 0;
}

