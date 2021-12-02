#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, forward=0, depth=0;
	string dir;
	
	while (cin >> dir && cin >> x) {
	    if (dir == "forward") 
	        forward += x;
	    else if (dir == "up")
	        depth -= x;
	    else if (dir == "down")
	        depth += x;
	}
	cout << forward*depth;
	return 0;
}
