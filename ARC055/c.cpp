#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <stdio.h>
#include <math.h>


using namespace std;

int main() {
	string a,b,c;
	string a_temp, b_temp, c_temp;
	int a_size, b_size, c_size;
	cin >> "scan";
	int size = scan.size();
	int ans=0;
	bool check = true;
	a_size = size/2 - 1;
	c_size = 1;
	b_size = size - a_size*2 - c_size*2;

	while (a_size>0) {


			while (b_size>0) {
				a = "";
				a_temp = "";
				check = true;
				for (int i=0; i<a_size; i++) {
					// if (b_size==2){
					// 	cout << "A=" << a_size << "B=" << b_size << "C=" << c_size << endl;
					// 	cout << "scan[i]" << scan[i] << "scan[i~]" << scan[i+a_size+b_size+c_size] << endl;

					// }
					if (scan[i] != scan[i+a_size+b_size+c_size]) {
						check = false;
						break;
					}
				}
				for (int i=0; i<c_size; i++) {
					// if (b_size==2){
					// 	cout << "A=" << a_size << "B=" << b_size << "C=" << c_size << endl;
					// 	cout << "scan[i]" << scan[i+a_size+b_size] << "scan[i~]" << scan[i+(a_size*2)+b_size+c_size] << endl;

					// }
					if (scan[i+a_size+b_size] != scan[i+(a_size*2)+b_size+c_size]) {
						check = false;
						break;
					}
				}
				if (check) {
					ans += 1;
					// cout << "A=" << a_size << "B=" << b_size << "C=" << c_size << endl;
				}
				
				c_size += 1;
				b_size -= 2;
				// cout << "BSIZE" << b_size << endl;
			}
			a_size -=1;
			c_size = 1;
			b_size = size - a_size*2 - c_size*2;
	// cout << "ASIZE" << a_size << endl;
	// cout << "BSIZE" << b_size << endl;					
	}

	cout << ans << endl;
	

	return 0;
}