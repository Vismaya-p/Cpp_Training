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
	void set_title(char*);
	char* get_title();
	void set_genre(char*);
	char* get_genre();
	void get_details();
	void set_rating(float);
	float get_rating();
	void ratings();
};
void movie::set_title(char* t)
{
	strcpy(title ,t);
}
char* movie::get_title()
{
	
	return title;
}
void movie::set_genre(char* g)
{
	
	strcpy(genre, g);
}
char* movie::get_genre()
{
	
	return genre;

}
void movie::set_rating(float r)
{
	rating = r;
}
float movie::get_rating()
{
	
	return rating;
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
	char t[20] ;
	char g[20] ;
	float r;
	movie m1;
	cout << "enter title:"<<endl;
	cin >>t;
	m1.set_title(t);
	cout << "enter genre:" << endl;
	cin >> g;
	m1.set_genre(g);
	cout << "enter rating:"<<endl;
	cin >> r;
	m1.set_rating(r);
	
	//cout << m1.get_title() << endl;
	//cout << m1.get_genre() << endl;
	//cout << m1.get_rating() << endl;
	 m1.get_details();
	 m1.ratings();
}