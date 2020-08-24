#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*int a = 10;

	if (a > 10)
	{
		printf("a is higher than 10 \n");
	}
	if (a == 10)
	{
		printf("a is 10");
	}
	else
	{
		printf("a is lower than 10 \n");
	}*/

	/*int a = 10;
	if (a > 0 && a < 20)
	{
		printf("a is higher than 0 and lower than 20");
	}
	if (a < 0 || a>20)
	{
		printf("a is lower than 0 or higher than 20");
	}*/

	/*int a = 0;

	printf("Input number less than 5 : ");

	scanf_s("%d", &a);
	switch (a)
	{
	case(1):
		printf("number is 1");
		break;
	case(2):
		printf("number is 2");
		break;
	case(3):
		printf("number is 3");
		break;
	case(4):
		printf("number is 4");
		break;
	case(5):
		printf("number is 5");
		break;
	default:
		printf("Error Number\n");
		break;
	}*/

	/*int pl_lv = 30;
	int pl_gold = 3000;
	int item_lv = 30;
	int item_gold = 5000;

	if (pl_lv >= item_lv && pl_gold >= item_gold)
	{
		printf("You bought item . \n now gold : %d", pl_gold - item_gold);
	}
	else if (pl_lv < item_lv || pl_gold < item_gold)
	{
		printf("You can't buy the item");
	}*/
	
	int pl_lv = 0;
	int item_lv;
	int pl_power;
	int a = 0;

	printf("Input your level : ");
	scanf(" %d", &pl_lv);
	printf("Input your item_level : ");
	scanf(" %d", &item_lv);
	printf("Input your power : ");
	scanf(" %d", &pl_power);
	printf("Your status \n level : %d , item level : %d , power : %d\n", pl_lv, item_lv, pl_power);
start:
	printf("\nmap list\n");
	printf("1.Forest(lv1~10)\t(power limit 0,item level limit 0)\n");
	printf("2.Billage(lv11~20)\t(power limit 15,item level limit 10)\n");
	printf("3.River(lv21~30)\t(power limit 30,item level limit 20)\n");
	printf("4.Return to the input level\n");
	printf("5.Exit game\n");
	printf("Select map number : \n");
	scanf(" %d", &a);
	
	switch (a)
	{ 
	case 1:
		if (pl_lv >= 1 && (item_lv >= 0 || pl_power >= 0))
		{
			printf("You arrived in Forest");
		}
		else if (pl_lv < 1)
		{
			printf("You can't go there (Your level is lower than the entry conditions.)");
		}
		else if (item_lv < 0 || pl_power < 0)
		{
			printf("You can't go there (Your item level or power are lower than the entry conditions.)");
		}
		goto start;
		break;
	case 2:
		if (pl_lv >= 11 && (item_lv >= 10 || pl_power >= 15))
		{
			printf("You arrived in Billage");
		}
		else if (pl_lv < 11)
		{
			printf("You can't go there (Your level is lower than the entry conditions.)");
		}
		else if (item_lv < 10 || pl_power < 15)
		{
			printf("You can't go there (Your item level or power are lower than the entry conditions.)");
		}
		goto start;
		break;
	case 3:
		if (pl_lv >= 21 && (item_lv >= 20 || pl_power >= 30))
		{
			printf("You arrived in River");
		}
		else if (pl_lv < 21)
		{
			printf("You can't go there (Your level is lower than the entry conditions.)");
		}
		else if (item_lv < 20 || pl_power < 30)
		{
			printf("You can't go there (Your item level or power are lower than the entry conditions.)");
		}
		goto start;
		break;
	case 4:
		main();
		break;
	case 5:
		break;
	default:
		printf("Error code game end\n");
		goto end;
	}
end:
	printf("\nGame over\n");

	
}

