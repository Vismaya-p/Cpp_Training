#include<iostream>


int count0 = 0;
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
int count7 = 0;
int count8 = 0;
int count9 = 0;

using namespace std;
//int getDigits(long int);
int makeFreqCount(long long int);
void display(void);
int main()
{
	long long int num;
	num = 34566898503;
	long long int temp, r;
	cout << sizeof(int) << " " << sizeof(long long int) << endl;
	temp = num;
	//for(;temp;temp/=10)
	makeFreqCount(num);
	display();
	while (temp)
	{
		r = temp % 10;

		switch (r)
		{
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		default:
			cout << "not a number" << endl;
		}
		temp = temp / 10;
	}
}
void display(void)
{
	cout << "In the display function" << endl;
	cout << "count0 : " << count0 << endl;
	cout << "count1 : " << count1 << endl;
	cout << "count2 : " << count2 << endl;
	cout << "count3 : " << count3 << endl;
	cout << "count4 : " << count4 << endl;
	cout << "count5 : " << count5 << endl;
	cout << "count6 : " << count6 << endl;
	cout << "count7 : " << count7 << endl;
	cout << "count8 : " << count8 << endl;
	cout << "count9 : " << count9 << endl;
}
		
