#include<iostream>
#include<stdlib.h>
#define MAX 1024
#include<cstring>
using namespace std;
int main()
{
	string question[MAX]
	{
	"Q1.What is Ribosomes?","Q2.What are two types of Ribosomes?",
	"Q3.What is vacuoles?","Q4.What are Plastids?","Q5.what are the types of plastids?"
	};
	string answer[MAX]
	{
		"Ribosomes are known as protein factory.","Two types of Ribosomes are eukaryotes and prokaryotes.",
		"Membrane-bound space found in cytoplasm.","It found in all plant cells.",
		"Two types of plastids are chloropid and chromoplast."
	};
	bool asked[5] = { false };
	int total = 5;
	int askedQuestion = 0;
	int askedCount = 0;
	int correctCount = 0;
	int count = 0;
	char choice;
	string userAnswer;
	cout << "===QUIZ APP==="<<endl;
	do
	{
		int index;
		do
		{
			index = rand() % total;
		} while (asked[index] == true);
		asked[index] = true;
		askedCount++;
		cout <<askedQuestion <<":"<<question[index] << endl;
		cout << "Your Answer:";
		getline(cin>> ws,userAnswer);
		
		if (userAnswer == answer[index])
		{
			cout << "CORRECT ANSWER"<<endl;
			correctCount++;
		}
		else
		{
			cout << "Wrong Answer"<<endl;
		}
		if (askedCount < total)
		{
			cout << "Do you want the Next Question(Y/N):"<<endl;
			cin >> choice;
		}
		else
		{
			cout << "Completed All Questions"<<endl;
			break;
		}
	} while (choice == 'Y' || choice == 'N');

	cout << "Quiz Summary";
	cout << "Question Answered:" << askedQuestion<<endl;
	cout << "Correct Answer:" << correctCount<<endl;
	return 0;

}
