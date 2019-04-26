#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	int A = atoi(argv[0]), B = atoi(argv[1]);

	cout << "AxB= " << A * B << endl << "A+B= " << A + B << endl;

	//system("pause");
	return 0;
}