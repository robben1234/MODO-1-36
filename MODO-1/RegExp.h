#pragma once
#include "Controller.h"
using namespace std;

class Input {
public:

	int console(std::map<int, int> &r, std::map<int, int> &u, int &p, int &T);
	int nice(int& argc, char* argv[], std::map<int, int>& r, std::map<int, int>& u, int & p, int & T);

};