#include <iostream>

#include "integer.h"

using namespace std;

int main() {
	Integer i1, i2 = 10;
	cin >> i1;
	cout << "i1: " << i1 << endl;
	cout << "i2: " << i2 << endl;

	cout << "i1 + i2: " << i1 + i2 << endl;
	cout << "i1 - i2: " << i1 - i2 << endl;
	cout << "i1 * i2: " << i1 * i2 << endl;
	cout << "i1 / i2: " << i1 / i2 << endl;
	cout << "i1 % i2: " << i1 % i2 << endl << endl;
	
	if(i1 == i2)
	cout << " i1 equals i2.\n";
	else
	cout << " i1 does not equal i2.\n";
	
	if(i1 != i2)
	cout << " i1 does not equal i2.\n";
	else
	cout << " i1 equals i2.\n";

	if(i1 > i2)
	cout << " i1 is bigger than i2.\n";
	else
	cout << " i1 is smaller than i2.\n";

	if(i1 < i2)
	cout << " i1 is smaller than i2.\n";
	else
	cout << " i1 is bigger than i2.\n\n";
	
	
	i1 += i2;
	cout << "after i1 += i2 - i1: " << i1 << endl;
	
	i1 -= i2;
	cout << "after i1 += i2 - i1: " << i1 << endl;
	
	i1 *= i2;
	cout << "after i1 += i2 - i1: " << i1 << endl;
	
	i1 /= i2;
	cout << "after i1 += i2 - i1: " << i1 << endl;
	
	i1 %= i2;
	cout << "after i1 += i2 - i1: " << i1 << endl << endl;
	
	i1 = ++i2;
	cout << "after prefix++:  i1: "<< i1 <<" i2: " << i2 << endl;

	i1 = i2++;
	cout << "after postfix++:  i1: "<< i1 <<" i2: " << i2 << endl;

	i1 = --i2;
	cout << "after prefix--:  i1: "<< i1 <<" i2: " << i2 << endl;

	i1 = i2--;
	cout << "after postfix--:  i1: "<< i1 <<" i2: " << i2 << endl;
	
	cout << endl;

	cout<< "Now we'll show the operators in their 'functional' form\n"; 
	
	cout << "i1 + i2: " << operator +(i1, i2) << endl;
	cout << "i1 - i2: " << operator -(i1, i2) << endl;
	cout << "i1 * i2: " << operator *(i1, i2) << endl;
	cout << "i1 / i2: " << operator /(i1, i2) << endl;
	cout << "i1 % i2: " << operator %(i1, i2) << endl << endl;

	i1.operator +=(i2);
	cout << "after i1.operator +=(i2) - i1: " << i1 << endl;
	
	i1.operator -=(i2);
	cout << "after i1.operator -=(i2) - i1: " << i1 << endl;
	
	i1.operator *=(i2);
	cout << "after i1.operator *=(i2) - i1: " << i1 << endl;
	
	i1.operator /=(i2);
	cout << "after i1.operator /=(i2) - i1: " << i1 << endl;
	
	i1.operator %=(i2);
	cout << "after i1.operator %=(i2) - i1: " << i1 << endl;
	
	return 0;
}
