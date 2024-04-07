#include "manager.h"
#include <iostream>
using namespace std;

int main() {
	student st("Alex", 14, 9);


	cout << "Before: " << st.convert() << endl;
	//st.age = -10;
	st.setAge(-20);

	cout << "After: " << st.convert() << endl;

	return 0;
}