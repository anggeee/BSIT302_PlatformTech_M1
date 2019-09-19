#include <iostream>
#include <thread>
#include <atomic>

using namespacestd;

atomic<bool> ready1(false);
atomic<bool> ready2(false);
atomic<bool> ready3(false);

atomic<int> counter1 (0);
atomic<int> counter2 (0);
atomic<int> counter3 (0);

cout << "The Lotto Generator" << endl << "=================================" << endl;


void lottonum_1(int id){
	while (!ready){
		this_thread::yield();
	}
	for (volatile int i=1;, i <55; ++i){
		++counter1;
		if(counter1 <= 6){
			cout << id;
		}
	}
}

void lottonum_2(int id){
	while (!ready2) {
		this_thread::yield();
	}
	for (volatile int i=1; i<55; ++i){
		++counter2;
		if(counter2 <=6){
			cout << id;
		}
	}
}
void lottonum_3(int id){
	while (!ready3) {
		this_thread::yield();
	}
	for (volatile int i=1; i<55; ++i){
		++counter3;
		if(counter3 <=6){
			cout << id;
		}
	}
}
int main {
	int i = 1;
	 
	 thread threads1[55];
	 thread threads2[55];
	 thread threads3[55];
	 cout << "Lotto Winners!\n";
	 
	for (int i=0; i<55; ++i) threads[i]=std::thread(count1m, i);
	ready = true;
	for (auto& th : threads)th.join();
	std:: cout << '\n';
	
	
	std::thread threading[55];
	std::cout << "\nSecond Winner: \n";
	for (int q=0; q<55; ++q) threading[q]=std::thread(countagain, q);
	ready1 = true;
	for (auto& th : threading)th.join();
	std:: cout << '\n';
	
	std::thread mythreading[55];
	std::cout << "\nThird Winner: \n";
	for (int a=0; a<55; ++a) mythreading[a]=std::thread(countonce, a);
	ready2 = true;
	for (auto& th : mythreading)th.join();
	std:: cout << '\n';	
	
	return 0;
	

}


