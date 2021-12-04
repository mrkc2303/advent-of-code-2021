#include <iostream>
using namespace std;

int toBinary(long n) {
    long num = n;
    int dec_value = 0;
 
    int base = 1;
 
    long temp = num;
    while (temp > 0) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
        base = base * 2;
    }
 
    return dec_value;
}

int main() {
    
	int ele=0, ones[100]={0}, i;
	long n, finala=0, finalb=0;
	
	while (cin >> n) {
	    for (i=0; n > 0; i++) {
	        int temp = n % 10;
	        if (temp)
	            ones[i]++;
	        n = n / 10;
	    }
	    ele++;
	}
	
	int length = i;
    
	for (int j=length-1; j>=0; j--) {
	    if (ones[j] > (ele/2)) {
	        finala = (finala * 10) + 1;
	        finalb = (finalb * 10) + 0;
	    }
	    else {
	        finala = (finala * 10) + 0;
	        finalb = (finalb * 10) + 1;
	    }
	}

	
	cout << toBinary(finala)*toBinary(finalb);
	
	return 0;
}

//OUTPUT FOR INPUT.txt File 
//3309596
