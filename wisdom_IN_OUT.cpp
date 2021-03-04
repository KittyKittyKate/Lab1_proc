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
	int Comma_Count_aphor(aphorism &a);
	int Comma_Count_proverb(proverb &p);
	int Comma_Count_puzzle(puzzle &z);
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
			ifst.getline(sp->expression, 50);
			In(sp->a, ifst);
			ifst >> sp->rate;
			return sp;
		case 2:
			sp = new wisdom;
			sp->k = wisdom::key::PROVERB;
			ifst.getline(sp->expression, 50);
			In(sp->p, ifst);
			ifst >> sp->rate;
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
		ofst << "'" << s.expression;
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
		ofst << ". My rate: " << s.rate << endl;
	};
	int Count_Comma(wisdom &s) {
		switch (s.k) {
		case wisdom::key::APHORISM:
			return Comma_Count_aphor(s.a);
		case wisdom::key::PROVERB:
			return Comma_Count_proverb(s.p);
		case wisdom::key::PUZZLE:
			return Comma_Count_puzzle(s.z);
		default:
			return -1;
		}
	};
		bool Compare(wisdom *first, wisdom *second) {
		return Count_Comma(*first) > Count_Comma(*second);
	};
} // end collection_of_wisdom namespace