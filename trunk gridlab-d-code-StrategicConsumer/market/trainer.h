#pragma once
class trainer
{
public:
	int simulationId=0;
	int previoussimulationId=-1;
	int simulationTod;
	trainer();
	~trainer();
	void training();
	void setNextAuctionTime(char t[]);
	void setNextSimulationId(int x);
	void record(double min, double max,double last_p, double last_q);
	double getresult();
	double windVariation(int x);
	double wind(int x);
	double solar(int x);
};

