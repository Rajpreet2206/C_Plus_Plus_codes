#include<iostream>
#include<thread>
#include<vector>
// thread::hardware_concurrency() is a static method that provides at runtime the number of Hardware threads on the machine
// executing the CODE.

void threadFunction(){
	std::cout<<"Hello from the Worker Thread "<< this_thread::get_id()<<std::endl;
}

int main(int argc, char* argv[]){
	const size_t n = std::thread::hardware_concurrency();
	std::vector<std::thread> vt(n);

	for( size_t i=0; i< n; ++i){
		vt[i]= std::thread(threadFunction);
	}

	std::cout<<"Hello from the Main Thread "<<std::endl;

	for(size_t i = 0; i<n; ++i){
		vt[i].join();
	}

	std::cout<< "Completed "<< std::endl;
	return 0;
}
