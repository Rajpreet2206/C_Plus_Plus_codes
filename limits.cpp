#include<iostream>
#include<limits>

int main(){
	std::cout<<"CHAR "<< int(std::numeric_limits<char>::min()) << "- "<< int(std::numeric_limits<char>::max()) << " Size (Byte) = "<< sizeof(char)<< std::endl;
	std::cout<<"FLOAT "<< std::numeric_limits<float>::min() << "- "<< std::numeric_limits<float>::max()<< " Size (Bytes) = "<<sizeof(float)<<std::endl;
	return 0;
}
