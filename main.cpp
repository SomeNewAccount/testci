#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int A = stoi(argv[0]), B = stoi(argv[1]);

	cout << "Enter A: ";
	cin >> A;

	cout << "Enter B: ";
	cin >> B;

	cout << "AxB= " << A * B << endl << "A+B= " << A + B << endl;

	//system("pause");
	return 0;
}