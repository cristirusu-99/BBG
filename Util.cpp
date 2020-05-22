#include "Util.h"

float Util::calculateSD(vector<int> data)
{
	float sum = 0.0, mean, standardDeviation = 0.0;

	int i;

	for (i = 0; i < 10; ++i)
	{
		sum += data[i];
	}

	mean = sum / 10;

	for (i = 0; i < 10; ++i)
		standardDeviation += pow(data[i] - mean, 2);

	return sqrt(standardDeviation / 10);
}

vector<int> Util::calculateTeamScores(vector<pair<int, int>> ind)
{
	vector<int> teamScores;
	int sum = ind[0].second;
	for (int i = 0; i < 32; ++i)
	{
		if (i % 4 == 0)
		{
			teamScores.push_back(sum);
			sum = ind[i].second;
		}
		else
		{
			sum += ind[i].second;
		}
	}
	teamScores.push_back(sum);
	return teamScores;
}

int Util::random_num(int start, int end)
{
	int range = (end - start) + 1;
	int random_int = start + (rand() % range);
	return random_int;
}
