#include <fstream>
#include <iostream>
#include "puzzle.h"
using namespace std;
namespace collection_of_wisdom {
	// ���� �� �����
	void In(puzzle &a, ifstream &ifst) {
		ifst.getline(a.puzzle_str, 200);
		ifst.getline(a.answer, 20);
	};
	void Out(puzzle &a, ofstream &ofst) {
		ofst << "'" << a.puzzle_str << "' Answer: " << a.answer << endl;
	};
} // end collection_of_wisdom namespace