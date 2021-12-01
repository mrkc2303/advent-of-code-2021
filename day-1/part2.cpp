#include <iostream>
using namespace std;

int main() {
    int arr[10000] = {0};
	int n, i=0, count=0, previous = 1e7, size=0; 
	while (cin >> n) {
	    arr[i] = n;
	    i++;
	}
	size = i;
    i=0;
	while(i < size) {
	   if ((arr[i+1] + arr[i+2] + arr[i+3]) > (arr[i] + arr[i+1] + arr[i+2])) 
	        count++;
	   i++;
	}
	cout << count;
	return 0;
}

//OUTPUT for provided custom input is 1457
