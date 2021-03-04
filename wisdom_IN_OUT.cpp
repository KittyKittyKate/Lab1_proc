#include <fstream>
#include "wisdom.h"
using namespace std;
namespace collection_of_wisdom {
	// ��������� ��������� ������� �������
	void In(aphorism &a, ifstream &ifst);
	void In(proverb &p, ifstream &ifst);
	void Out(aphorism &a, ofstream &ofst);
	void Out(proverb &p, ofstream &ofst);
	void In(puzzle &a, ifstream &ifst);
	void Out(puzzle &a, ofstream &ofst);
	// ���� ���������� ���������� �������� �� �����
	wisdom* In(ifstream &ifst)
	{
		wisdom *sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new wisdom;
			sp->k = wisdom::key::APHORISM;
			In(sp->a, ifst);
			return sp;
		case 2:
			sp = new wisdom;
			sp->k = wisdom::key::PROVERB;
			In(sp->p, ifst);
			return sp;
		case 3:
			sp = new wisdom;
			sp->k = wisdom::key::PUZZLE;
			In(sp->z, ifst);
			return sp;
		default:
			return 0;
		}
	};
	// ����� ���������� ������� �������� � �����
	void Out(wisdom &s, ofstream &ofst) {
		switch (s.k) {
		case wisdom::key::APHORISM:
			Out(s.a, ofst);
			break;
		case wisdom::key::PROVERB:
			Out(s.p, ofst);
			break;
		case wisdom::key::PUZZLE:
			Out(s.z, ofst);
			break;
		default:
			ofst << "Incorrect wisdom!" << endl;
		}
	};
} // end collection_of_wisdom namespace