#include <iostream>
#include <stdbool.h>
using namespace std;

struct Student
{
	int id;
	bool gender;
	char name[10];
	int Kor;
	int Math;
	int Eng;
};

struct Player
{
	char name[20];
	int hp = 20;
	int atk = 5;
	int def = 5;
	int mp = 10;

};

struct Monster
{
	char name[20] = {0};
	int hp = 20;
	char skill[30] = {0};
};

typedef int Int;

#define ARRAY_SIZE_10 10
#define PI 3.14f



int main()
{
	/*Student s;

	s.id = 1;
	s.gender = 1;
	strcpy_s(s.name, "±èÃ¶¼ö");
	s.Kor = 100;

	printf("id : %d\n", s.id);
	printf("name : %s\n", s.name);
	printf("Korean grade : %d\n", s.Kor);*/

	/*printf("Input student's id : ");
	scanf("%d", &s.id);

	printf("Input Student's name : ");
	scanf("%s", s.name);

	printf("Input Student's Korean grade : ");
	scanf("%d", &s.Kor);

	printf("%d %s %d", s.id, s.name,s.Kor);*/

	/*Player one,two;

	printf("Input player's name : ");
	scanf("%s" ,one.name);
	printf("player's name : %s\n", one.name);
	printf("player's hp : %d\n", one.hp);
	printf("player's atk : %d\n", one.atk);
	printf("player's def : %d\n", one.def);
	printf("player's mp : %d\n", one.mp);
	
	printf("Input player's name : ");
	scanf("%s", two.name);
	printf("player's name : %s\n", two.name);
	printf("player's hp : %d\n", two.hp);
	printf("player's atk : %d\n", two.atk);
	printf("player's def : %d\n", two.def);
	printf("player's mp : %d\n", two.mp);*/

	/*Int a = 0;

	int array[ARRAY_SIZE_10];

	printf("Pi : %.2f \n", PI);*/

	Monster mon[4];

	strcat_s(mon[1].name, "Ghost");
	mon[1].hp = 15;
	strcat_s(mon[1].skill , "Invisible");
	strcat_s(mon[2].name, "Wolf");
	mon[2].hp = 20;
	strcat_s(mon[2].skill, "Bite");
	strcat_s(mon[3].name, "Krab");
	mon[3].hp = 10;
	strcat_s(mon[3].skill, "Bubble Shot");


	for (int i = 1; i <= 3; i++)
	{
		printf("name : %s , hp : %d , skill : %s\n", mon[i].name, mon[i].hp, mon[i].skill);
	}


	return 0;
}