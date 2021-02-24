#include <iostream>
#include <fstream>
#include "container.h"
using namespace std;
namespace collection_of_wisdom {
	// ��������� ��������� ������� �������
	void Init(container &c);
	void Clear(container &c);
	void In(container &c, ifstream &ifst);
	void Out(container &c, ofstream &ofst);
	void OutAphorism(container &c, ofstream &ofst);
}
using namespace collection_of_wisdom;

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Russian");
	if (argc != 3) {
		cout << "Incorrect command line!"
			"Syntax: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Let's begin" << endl;
	container c;
	Init(c);
	In(c, ifst);
	ofst << "Filled container." << endl;
	OutAphorism(c, ofst);
	Clear(c);
	ofst << "Empty container." << endl;
	Out(c, ofst);
	cout << "Goodbye" << endl;
	return 0;
}