#pragma once
#include <vector>
#include <iostream>

#include "Util.h"

using namespace std;

class Individ
{
public:
	vector<pair<int, int>> chromosome;
	int fitness;
	Util utils;
	Individ();
	void mutatet();
	Individ mate(Individ parent2);
	int cal_fitness();
};

