//movie Review
#include<iostream>
#include<cstring>
using namespace std;
class movie
{
	
	char title[20];
	char genre[20];
	float rating;
public:
	void set_title();
	void set_genre();
	void get_details();
	void set_rating();
	void ratings();
};
void movie::set_title()
{
	cout << "Enter the movie name:"<<endl;
	cin >> title;
}
void movie::set_genre()
{
	cout << "Enter the Genre" << endl;
	cin >> genre;
}
void movie::set_rating()
{
	cout << "Rating: " << endl;
	cin >> rating;
}
void movie::get_details()
{
	cout << "TITLE: " << title << endl;
	cout << "GENRE: " << genre << endl;
	cout << "RATE: " << rating << endl;
}
void movie::ratings()
{
	if (rating >= 8 && rating <= 10)
	{
		cout << "HIT";
	}
	else if (rating >= 6.5 && rating < 8)
	{
		cout << "AVERAGE";
	}
	else
	{
		cout << "FLOP";
	}

}
int main()

{
	movie m1;
	
	m1.set_title();
	m1.set_genre();
	m1.set_rating();
	m1.get_details();
	m1.ratings();
}