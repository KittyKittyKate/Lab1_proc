#include <fstream>
#include <iostream>
#include "puzzle.h"
using namespace std;
namespace collection_of_wisdom {
	// ֲגמה טח פאיכא
	void In(puzzle &a, ifstream &ifst) {
		ifst.getline(a.puzzle_str, 200);
		ifst.getline(a.answer, 20);
	};
	void Out(puzzle &a, ofstream &ofst) {
		ofst << "'" << a.puzzle_str << "' Answer: " << a.answer << endl;
	};
	int Comma_Count_puzzle(puzzle &p) {
		int comma = 0;
		int i = 0;
		while (p.puzzle_str[i] != '\0')
		{
			if (p.puzzle_str[i] == ',') {
				comma++;
			}
			i++;
		}
		return comma;
	};
} // end collection_of_wisdom namespace