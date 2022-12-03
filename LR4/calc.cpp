#include <iostream>	
using namespace std;
int main(){
	int num_1,num_2,num_3;

	cout<<"Type the first number:";cin>>num_1;
	cout<<"Type the second number:";cin>>num_2;
	cout<<"Type the third number:";cin>>num_3;

	if (num_1 < num_2 || num_2 <= 0 || num_3 < 0){
		cout<<"Invalid data\n";
	}

	else{
		printf("%d + %d = %d\n", num_1, num_2, num_1+num_2);
		printf("%d - %d = %d\n", num_1, num_2, num_1-num_2);
		printf("%d * %d = %d\n", num_1, num_2, num_1*num_2);
		printf("%d / %d = %d\n", num_1, num_2, num_1/num_2);
		printf("%.1f / %.1f = %.5f\n", float(num_1), float(num_2), float(num_1)/num_2);
		printf("%d %% %d = %d\n", num_1, num_2, num_1%num_2);
		printf("%d + %d * %d = %d\n", num_1, num_2, num_3, num_1+num_2*num_3);
		printf("(%d + %d) * %d = %d\n", num_1, num_2, num_3, (num_1+num_2)*num_3);
	}

}