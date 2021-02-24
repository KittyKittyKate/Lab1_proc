#include <fstream>
#include <iostream>
#include "aphorism.h"
using namespace std;
namespace collection_of_wisdom {
	// ֲגמה טח פאיכא
	void In(aphorism &a, ifstream &ifst) {
		ifst.getline(a.aphor, 50);
		ifst.getline(a.author, 50);
	};
	void Out(aphorism &a, ofstream &ofst) {
		ofst << "'" << a.aphor << "' - " << a.author << endl;
	};
	int Comma_Count(aphorism &a) {
		int comma = 0;
		int i = 0;
		while (a.aphor[i] != '\0')
		{
			if (a.aphor[i] == ',') {
				comma++;
			}
			i++;
		}
		return comma;
	};
} // end collection_of_wisdom namespace