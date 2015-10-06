#include "dfile.h"
#include <iostream>
using namespace std;
int main()
{
	string str="dabaichi";
	dfile file(str);
	file.hello();
	return 0;
}
