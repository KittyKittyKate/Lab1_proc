#ifndef __wisdom__
#define __wisdom__
// ����������� ����������� ����� ������
#include "aphorism.h"
#include "proverb.h"
namespace collection_of_wisdom {
	
	// ���������, ���������� ��� ��������
	struct wisdom {
		// �������� ������ ��� ������ ��������
		enum key { APHORISM, PROVERB };
		key k; // ����
		char expression[50];
		int rate;
		// ������������ ������������
		union { // ���������� ���������
			aphorism a;
			proverb p;
		};
	};
} // end collection_of_wisdom namespace
#endif