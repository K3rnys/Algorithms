#include<iostream>
#include<vector>


int sum(std::vector<int> data) {				// recursive function		
	// recursive case
	if (!data.empty()) {							
		int mem = data[0];						// remember the first element
		data.erase(data.begin());				// erase the first element
		return sum(data) + mem;					// add the mem variable to the sum
	}
	// base case
	return 0;										
}


void main() {
	std::vector<int> mas = { 3, 4, 5, 6 };		// for example 3 + 4 + 5 + 6 = 18
	std::cout << sum(mas);
}


// in this case, a call stack overflow may occur