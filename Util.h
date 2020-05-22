#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Util
{
public:
	float calculateSD(vector<int> data);

	vector<int> calculateTeamScores(vector<pair<int, int>> ind);

	int random_num(int start, int end);
};

