#include <fstream>
#include <iostream>
#include "proverb.h"
using namespace std;
namespace collection_of_wisdom {
	// ֲגמה טח פאיכא
	void In(proverb &p, ifstream &ifst)
	{
		//ifst.getline(p.proverb, 50);
		ifst.getline(p.country, 50);
		
	};
	void Out(proverb &p, ofstream &ofst)
	{
		ofst << "' - " << p.country;
	};
	int Comma_Count_proverb(proverb &p) {
		int comma = 0;
		int i = 0;
		while (p.proverb[i] != '\0')
		{
			if (p.proverb[i] == ',') {
				comma++;
			}
			i++;
		}
		return comma;
	};
} // end collection_of_wisdom namespace