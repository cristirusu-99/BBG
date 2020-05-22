#include "Individ.h"

Individ::Individ()
{
	for (int i = 1; i <= 32; i++)
	{
		chromosome.push_back(make_pair(i, utils.random_num(1, 10)));
	}
	fitness = cal_fitness();
}

void Individ::mutatet()
{
	for (int i = 0; i < 32; ++i)
		if (utils.random_num(1, 100) <= 30)
			swap(chromosome[i], chromosome[utils.random_num(0, 31)]);
}

int Individ::cal_fitness()
{
	this->fitness = utils.calculateSD(utils.calculateTeamScores(this->chromosome));

	return fitness;
}
