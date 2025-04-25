#include<cstdio>
int main()
{
	float m1_1, m2_1, m3_1, m4_1, m5_1;
	float m1_2, m2_2, m3_2, m4_2, m5_2;
	float m1_3, m2_3, m3_3, m4_3, m5_3;
	float m1_4, m2_4, m3_4, m4_4, m5_4;
	float m1_5, m2_5, m3_5, m4_5, m5_5;

	float avg_1, avg_2, avg_3, avg_4, avg_5;
	int slno;
	int id1, id2, id3, id4, id5;
	char name_1[20], name_2[20], name_3[20], name_4[20], name_5[20];
	scanf("%d%f%f%f%f%f", &id1, &m1_1, &m2_1, &m3_1, &m4_1, &m5_1);
	avg_1 = (m1_1 + m1_2 + m1_3 + m1_4 + m1_5) / 5.0;
	slno = 1;
	for (int i = 0;i < 30;i++)
		printf("=");
	printf("\n%03d|%03d\t|", slno++);
}