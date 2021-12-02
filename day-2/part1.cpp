#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, forward=0, depth=0;
	string dir;
	
	while (cin >> dir && cin >> n) {
	    if (dir == "forward") 
	        forward += n;
	    else if (dir == "up")
	        depth -= n;
	    else if (dir == "down")
	        depth += n;
	}
	cout << forward*depth;
	return 0;
}
