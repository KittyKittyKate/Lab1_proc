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
	};
	void Out(proverb &p, ofstream &ofst)
	{
		ofst << "'" << p.proverb << "' - " << p.country << endl;
	};
} // end collection_of_wisdom namespace