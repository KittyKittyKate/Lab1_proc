#include <fstream>
#include <iostream>
#include "proverb.h"
using namespace std;
namespace collection_of_wisdom {
	// ���� �� �����
	void In(proverb &p, ifstream &ifst)
	{
		ifst.getline(p.proverb, 50);
		ifst.getline(p.country, 50);
		ifst >> p.rate;
	};
	void Out(proverb &p, ofstream &ofst)
	{
		ofst << "'" << p.proverb << "' - " << p.country << ". My rate: " << p.rate << endl;
	};
} // end collection_of_wisdom namespace