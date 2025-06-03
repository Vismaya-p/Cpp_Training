#include<iostream>
#include<array>
using namespace std;
class sensorCalib
{
private:
	array<array<float, 5>, 3>readings;
	array<float, 3>calibFactors;
	
public:
	sensorCalib()
	{
		readings = { {
			{19.5,27.3,18.0,32.5,23.6},
		{29.5,37.3,8.0,42.5,23.6},
		{ 36.5,21.3,12.0,22.5,24.9 }
	 } };
		calibFactors = { 0.5,-0.3,1.2 };
	}
	void disp()
	{
		for (size_t i = 0;i < readings.size(); i++)
		{
			float sum = 0;
			for (float val : readings[i])
			{
				float calib = val + calibFactors[i];
				sum += calib;
			}
			float avg = sum / readings[i].size();
			cout << "avg calibration of sensor "<<i+1<<": " <<avg << endl;
		}
	}
};
	int main()
	{
		sensorCalib sc;
		sc.disp();
		return 0;
	}
