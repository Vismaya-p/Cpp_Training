#include<iostream>
#define MAX 5
#include<cstring>
#include<cstdlib>
using namespace std;

bool completedQuiz() {
	char completed;
	cout <<"Hi ,Have you already done?(y/n)";
	cin >> completed;
	return(completed == 'Y' || completed == 'y');
}
bool askQuestion(string question, string answer)
{
	string userAnswer;
	cout << question << endl;
	cout << "Your answer:" << endl;
	cin.ignore();
	cin>>userAnswer;
	if (userAnswer == answer)
	{
		cout << "Correct" << endl;
		return true;
		
	}
	else
	{
		cout << "Wrong Answer "<< endl;
		return false;
	}
}
void showSummary(int total, int correct)
{
	cout << "QUIZ SUMMARY"<<endl;
	cout << "TOTAL QUESTION:" << total << endl;
	cout << "CORRECT ANSWER:" << correct << endl;
}

void quiz()
{

	string question[MAX] = {
	"What is Ribosomes?","What are two types of Ribosomes?",
	"What is vacuoles?","What are Plastids?","what are the types of plastids?"
	};
	string answer[MAX] = {
		"proteinFactory.","eukaryotes,prokaryotes.",
		"Membrane-boundspace","Itfoundinallplantcells.",
		"chloropid,chromoplast."
	};

	bool asked[5] = { false };
	int totalAsked = 0;

	int correctCount = 0;
	char choice;
	srand(time(0));
	while (totalAsked < 5) {
		int index;

		do
		{
			index = rand() % 5;
		} while (asked[index]);
		asked[index] = true;
		totalAsked++;

		if (askQuestion(question[index], answer[index]))
		{
			correctCount++;

		}
	}


		showSummary(totalAsked, correctCount);
	}



	int main()
	{
		if (completedQuiz())
		{
			cout << "Already completed" << endl;
		}
		else
		{
			quiz();
		}
		return 0;
	}
