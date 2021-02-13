#include <fstream>
#include "container.h"
using namespace std;
namespace collection_of_wisdom {
	// Сигнатуры требуемых внешних функций
	wisdom *In(ifstream &ifst);// Ввод содержимого контейнера из указанного потока
	void In(container &c, ifstream &ifst) {
		while (!ifst.eof()) {
			if ((c.cont[c.lenght] = In(ifst)) != 0){ c.lenght++; }
		}
	};
	void Out(wisdom &s, ofstream &ofst);
	// Вывод содержимого контейнера в указанный поток
	void Out(container &c, ofstream &ofst) {
		ofst << "Container contains " << c.lenght
			<< " elements." << endl;
		for (int i = 0; i < c.lenght; i++) {
			ofst << i << ": ";
			Out(*(c.cont[i]), ofst);
		}
	};
} // end collection_of_wisdom namespace