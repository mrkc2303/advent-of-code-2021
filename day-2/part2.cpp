#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, forward=0, aim=0, depth=0;
	string dir;
	
	while (cin >> dir && cin >> x) {
	    if (dir == "forward") {
	        forward += x;
	        depth = depth+(aim*x);
	    }
	    else if (dir == "up")
	        aim -= x;
	    else if (dir == "down")
	        aim += x;
	}
	cout << forward*depth;
	return 0;
}
