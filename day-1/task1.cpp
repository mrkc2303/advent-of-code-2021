#include <iostream>
using namespace std;

int main() {
	int n, i=0, count=0, previous = 1e7; 
	while(cin >> n) {
	    if (n > previous) 
	        count++;
	   
	   previous = n;
	   i++;
	}
	cout << count;
	return 0;
}
