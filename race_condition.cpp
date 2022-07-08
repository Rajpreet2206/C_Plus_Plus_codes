#include<iostream>
#include<mutex>

using namespace std;

class SharedBankAccount{
	double myBalance;
	mutex myMutex;

	public:
		double withdraw(const double Amount){
			myMutex.lock();
			
			if(Amount <= myBalance){
				myMutex.unlock();
				myBalance -= Amount;
				return Amount;
			}
			else {
				muMutex.unlock();
				return 0;
			}
		}
};


