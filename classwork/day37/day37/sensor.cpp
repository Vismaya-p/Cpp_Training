#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<array<float,5>,3>reading={{
			{19.5,27.3,18.0,32.5,23.6},
		{29.5,37.3,8.0,42.5,23.6},
		{ 36.5,21.3,12.0,22.5,24.9 }
	 } };
	array<float,3>calib = { 0.5,-0.3,1.2 };
	
	for (size_t i = 0;i < reading.size(); i++)
	{
		float sum = 0;
		for (float val : reading[i])
			{
				float calibrate = val + calib[i];
				sum += calibrate;
			}
			float avg = sum / reading[i].size();
			cout << "avg calibration of sensor "<<i+1<<": " <<avg << endl;
		}
	
		return 0;
	}
