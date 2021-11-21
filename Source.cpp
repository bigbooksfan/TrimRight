#include <iostream>

int TrimRight(char* s, int sz_out)
{

	do {
	
		--sz_out;

	} while (s[sz_out] == ' ');

	return (sz_out + 1);

}


int main()
{

	int sz = 20;
	char* a = new char[sz];

	a[0] = 'a';
	for (int i = 0; i < (sz - 1); ++i) a[i + 1] = ' ';

	a[16] = 'b';

	for (int i = 0; i < sz; ++i) std::cout << a[i];

	std::cout << "END\nSZ = " << sz << std::endl;

	sz = TrimRight(a, sz);

	for (int i = 0; i < sz; ++i) std::cout << a[i];

	std::cout << "END\nSZ = " << sz;



}

