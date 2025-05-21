#include<iostream>
using namespace std;
class digitalClock
{
	int sec, min, hour;
public:
	void tick();
	void set(int, int, int);
	void display();
};
void digitalClock::set(int s, int m, int h)
{
	sec = s;
	min = m;
	hour = h;

}
void digitalClock::tick()
{
	sec++;
	if (sec == 60)
	{
		sec = 0;
		min = min + 1;
	}
	if (min == 60)
	{
		min = 0;
		hour++;
	}
	if (hour == 24)
	{
		hour = 0;
	}

}
void digitalClock::display()
{
	cout << "Hour: " << hour << endl;
	cout << "Minute:" << min<< endl;
	cout << "Second: " << sec << endl;
}
int main()
{
	digitalClock c1;
	c1.set(0, 0, 0);
	for (int i = 0;i < 90;i++)
	{
		
		c1.tick();
		c1.display();

		cout << endl;
	}
}