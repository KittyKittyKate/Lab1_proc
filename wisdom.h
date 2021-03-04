#ifndef __wisdom__
#define __wisdom__
// Подключение необходимых типов данных
#include "aphorism.h"
#include "proverb.h"
namespace collection_of_wisdom {
	
	// структура, обобщающая всю мудрость
	struct wisdom {
		// значения ключей для каждой мудрости
		enum key { APHORISM, PROVERB };
		key k; // ключ
		char expression[50];
		int rate;
		// используемые альтернативы
		union { // используем включение
			aphorism a;
			proverb p;
		};
	};
} // end collection_of_wisdom namespace
#endif