#include<iostream>
#include<thread>

int main(){
	std::thread t([](){
			std::cout<<"Hello From Us ...WE are Threads..."<<std::endl;
			});
	t.join();
	return 0;
}
