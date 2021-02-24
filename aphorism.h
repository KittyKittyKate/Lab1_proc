#ifndef __aphorism__
#define __aphorism__
#include <iostream>

namespace collection_of_wisdom {
	// афоризм
	struct aphorism 
	{		
		char aphor[50];
		char author[50];
		int rate;
	};
} // end collection_of_wisdom namespace
#endif