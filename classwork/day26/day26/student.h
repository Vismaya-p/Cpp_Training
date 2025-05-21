#ifndef __STUDENT__
#define __STUDENT__
class student
{
private:
	int rollno;
	char name[20];
	char batch[20];
	char reg_no[20];
	char dept[20];
	float marks[4];
	//float avg[];

public:
	void setName(char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMarks(float[]);
	void display();
	void setRegno(char*);
	char* getRegno();
	void setBatch(char*);
	char* getBatch();
	void setDept(char*);
	char* getDept();
	void setMarks(float);
	void getMarks();


private:
	float calcAvg();
};
#endif
