// C++ program to illustrate the concept of an atomic 
// operation using std::atomic. 
#include <atomic> 
#include <iostream> 
#include <thread> 

using namespace std; 

// Atomic variable to ensure atomic operations 
atomic<int> counter(0); 

// Function to increment the counter in a loop 
void incrementCounter() 
{ 
	for (int i = 0; i < 10000; ++i) { 
		counter.fetch_add(1, memory_order_relaxed); 
		// Increment the counter atomically using fetch_add 
		// memory_order_relaxed is used for minimal 
		// synchronization overhead 
	} 
} 

// driver code 
int main() 
{ 
	// Create a thread for incrementing the counter 
	thread t1(incrementCounter); 
	// Create another thread for incrementing the counter 
	thread t2(incrementCounter); 

	t1.join(); // Wait for the first thread to finish 
	t2.join(); // Wait for the second thread to finish 

	// Print the final value of the counter after both 
	// threads have finished 
	cout << "Counter value: "
		<< counter.load(memory_order_relaxed) << endl; 

	return 0; 
}
