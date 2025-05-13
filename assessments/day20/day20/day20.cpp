#include<iostream>
#define MAX 5
#include<cstring>
#include<cstdlib>
using namespace std;

bool completedQuiz() {
	char completed;
	cout << "Have you already completed(Y/N):";
	cin >> completed;
	return(completed == 'Y' || completed == 'y');
}
bool askQuestion(string question, string answer)
{
	string userAnswer;
	cout << question << endl;
	cout << "Your answer:" << endl;
	cin >> ws;
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
		"Ribosomes are known as protein factory.","Two types of Ribosomes are eukaryotes and prokaryotes.",
		"Membrane-bound space found in cytoplasm.","It found in all plant cells.",
		"Two types of plastids are chloropid and chromoplast."
	};

	bool asked[5] = { false };
	int totalAsked = 0;

	int correctCount = 0;
	char choice;
	srand(time(0));
	while (totalAsked < 5) {
		int index;
	}

	do
	{
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
	/*if (totalAsked > 5) {
		cout << "do you want another Question(Y/N)"<<endl;
		cin >> choice;
	}
	else {
		cout << "All questions are completed"<<endl;
		break;
	}
} while (choice == 'Y' || choice == 'y');*/

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
