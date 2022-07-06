#include<iostream>
#include<thread>
#include<mutex>
#include<vector>

std::mutex gLock;
static int shared_variable = 0;

void shared_variable_increment(){
	gLock.lock();
		shared_variable = shared_variable+1;
	gLock.unlock();
}

int main(int argc, char* argv[]){
	/// Body of the code for creating threads and calling share_variable_increment by each thread
	return 0;
}
