#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	ifstream input("image.bmp");
	string a;
	if (!input.is_open()) {
		cout << "nope\n";
		return 0;
	}

	const int start = 138;

	input >> a;
	
	string uni;
	uni.resize((a.length() - start)/4);

	for (int i = start; i < a.length(); i++) {
		a[i] = a[i] & 3;
		if (a[i] > 3) {
			cout << "nope";

		}
	}

	for (int i = start,  j = 0; i < a.length(); j++) {
		for (int k = i+7; k>=i; k--) {
			uni[j] += (int)(a[i] << (2 * ((k-start) % 4)));
			i++;
		}
	}

	cout << uni;
	
	return 0;
}
