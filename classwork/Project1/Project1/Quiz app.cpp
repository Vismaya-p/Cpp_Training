#include<iostream>
#define MAX 5
#include<cstring>
#include<cstdlib>
using namespace std;
struct Quiz
{
	string title;
	string Questions[MAX];
	string Answers[MAX];
};
Quiz biology=
{
	"Biology Quiz",
{
	"What is Ribosomes?","What are two types of Ribosomes?",
	"What is vacuoles?","What are Plastids?","what are the types of plastids?"
},
{
	"proteinFactory.","eukaryotes,prokaryotes.",
		"Membrane-boundspace","Itfoundinallplantcells.",
		"chloropid,chromoplast."
}
};
Quiz gk =
{
	"GK Quiz",
	{
"What is the capital of France?","Who is the Prime minister of India?",
"Which planet is known as the Red planet?","Who wrote Ramayana?",
}
};