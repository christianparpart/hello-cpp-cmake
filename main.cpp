#include <iostream>
#include <cstdlib>

#include "helper.h"

using namespace std;

int main(int argc, char const* argv[])
{
	cout << "Hello, World\n";

	if (argc > 1)
		cout << signum(argc) << "\n";
	else
		cout << signum(-argc) << "\n";

	return EXIT_SUCCESS;
}
