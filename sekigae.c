#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void nameprintf(int*,int,int);
void zasekioutput(int*);
int main(void)
{
	
		int member[41] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41 };
		int change[2];
		int h,i,j,k,feedback;
		int mae[12] = { 0 };
		int elevenrandom[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
		srand((unsigned)time(NULL));

		for (i = 0;; i++)
		{
			printf("前2列希望者の出席番号(11人まで可、0入力で実行)>>");
			scanf_s("%d", &mae[i]);
			if (mae[i] == 0)
			{
				break;
			}
		}

		do 
		{
		for (i = 0; i <= 40; i++)
		{
			j = rand() % 41;
			k = member[i];
			member[i] = member[j];
			member[j] = k;
		}

		for (i = 0; i < 11; i++)
		{
			j = rand() % 11;
			h = elevenrandom[i];
			elevenrandom[i] = elevenrandom[j];
			elevenrandom[j] = h;
		}

		for (j = 0; j < 11; j++)
		{
			for (i = 11; i < 41; i++)
			{
				if (member[i] == mae[j])
				{
					k = 0;
					for (h = 0; h < 11; h++)
					{
						if (member[elevenrandom[k]] != mae[0] && member[elevenrandom[k]] != mae[1] && member[elevenrandom[k]] != mae[2] && member[elevenrandom[k]] != mae[3] && member[elevenrandom[k]] != mae[4] && member[elevenrandom[k]] != mae[5] && member[elevenrandom[k]] != mae[6] && member[elevenrandom[k]] != mae[7] && member[elevenrandom[k]] != mae[8] && member[elevenrandom[k]] != mae[9] && member[elevenrandom[k]] != mae[10])
						{
							member[i] = member[elevenrandom[k]];
							member[elevenrandom[k]] = mae[j];
							break;
						}

						else
						{
							if (k < 10)
							{
								k++;
							}
						}
					}
				}
			}
		}

		zasekioutput(member);

		do 
		{
			printf("問題がなければ0(終了)、入れ替えて調整がしたければ1、もう一度やり直したければ2を入力>>");
			scanf_s("%d", &feedback);

			if (feedback == 1)
			{
				printf("入れ替えたい番号を,を間に入れて入力(ex. 1,2)>>");
					scanf_s("%d,%d",&change[0] ,&change[1]);
				for (i = 0; i < 41; i++)
				{
					if (change[0] == member[i])
					{
						member[i] = change[1];
					}

					else if (change[1] == member[i])
					{
						member[i] = change[0];
					}
				}

				zasekioutput(member);
			}
		}while(feedback == 1);

	}while (feedback == 2);

	return 0;
}

void nameprintf(int *member,int zenkai,int konkai)
{
	int i;

		for (i = zenkai; i < konkai; i++)
		{
			switch (member[i])
			{
			case 1:
				printf("|　安倍晋三　|");
				break;

			case 2:
				printf("|　伊藤博文　|");
				break;

			case 3:
				printf("|　上杉謙信　|");
				break;

			case 4:
				printf("| 江戸川乱歩 |");
				break;

			case 5:
				printf("|　 王貞治　 |");
				break;

			case 6:
				printf("|　葛飾北斎　|");
				break;

			case 7:
				printf("| 北里柴三郎 |");
				break;

			case 8:
				printf("|　楠木正成　|");
				break;

			case 9:
				printf("|　玄奘三蔵　|");
				break;

			case 10:
				printf("|　 近藤勇 　|");
				break;

			case 11:
				printf("|　坂本竜馬　|");
				break;

			case 12:
				printf("|　志賀直哉　|");
				break;

			case 13:
				printf("|　杉原千畝　|");
				break;

			case 14:
				printf("|　清少納言　|");
				break;

			case 15:
				printf("|　蘇我馬子　|");
				break;

			case 16:
				printf("|　伊達政宗　|");
				break;

			case 17:
				printf("|近松門左衛門|");
				break;

			case 18:
				printf("|　円谷英二　|");
				break;

			case 19:
				printf("|　手塚治虫　|");
				break;

			case 20:
				printf("|　徳川家康　|");
				break;

			case 21:
				printf("|　夏目漱石　|");
				break;

			case 22:
				printf("| 新渡戸稲造 |");
				break;

			case 23:
				printf("|　 額田王 　|");
				break;

			case 24:
				printf("|　根岸英一　|");
				break;

			case 25:
				printf("|　野口英世　|");
				break;

			case 26:
				printf("|　　原敬　　|");
				break;

			case 27:
				printf("|　土方歳三　|");
				break;

			case 28:
				printf("|　藤原定家　|");
				break;

			case 29:
				printf("|　　弁慶　　|");
				break;

			case 30:
				printf("|　北条政子　|");
				break;

			case 31:
				printf("|　松尾芭蕉　|");
				break;

			case 32:
				printf("|　宮本武蔵　|");
				break;

			case 33:
				printf("|　陸奥宗光　|");
				break;

			case 34:
				printf("|　メンデル　|");
				break;

			case 35:
				printf("|　 森鴎外 　|");
				break;

			case 36:
				printf("|　山中伸弥　|");
				break;

			case 37:
				printf("|　湯川秀樹　|");
				break;

			case 38:
				printf("|　吉田松陰　|");
				break;

			case 39:
				printf("|ライプニッツ|");
				break;

			case 40:
				printf("|　　李白　　|");
				break;

			case 41:
				printf("|　 ルソー 　|");
				break;

			}
		}
}

void zasekioutput(int *member)
{
	int i, konkai, zenkai=0;
	printf("　　　　　　　　　　　　　　　　　　　   　 ―――\n");
	printf("　　　　　　　　　　　　　　　　　   　　  ｜教卓｜\n");
	printf("        　　　　　　　　　　　　　　　　　　―――\n　　　　　　　　　―――――――――――――――――――――――――――――――――――\n　　　　　　　　　");

	for (i = 0; i < 5; i++)
	{
		if (member[i] < 10)
		{
			printf("|　　  %d 　　|", member[i]);
		}

		else
		{
			printf("|　　 %d　　 |", member[i]);
		}
	}

	printf("\n　　　　　　　　　");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;


	printf("\n　　――――――――――――――――――――――――――――――――――――――――――\n　　");

	for (i = 5; i < 11; i++)
	{
		if (member[i] < 10)
		{
			printf("|　　  %d 　　|", member[i]);
		}

		else
		{
			printf("|　　 %d　　 |", member[i]);
		}
	}

	printf("\n　　");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("\n窓　――――――――――――――――――――――――――――――――――――――――――\n　　");

	for (i = 11; i < 17; i++)
	{
		if (member[i] < 10)
		{
			printf("|　　  %d 　　|", member[i]);
		}

		else
		{
			printf("|　　 %d　　 |", member[i]);
		}
	}

	printf("\n　　");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("　廊\n側　――――――――――――――――――――――――――――――――――――――――――\n　　");

	for (i = 17; i < 23; i++)
	{
		if (member[i] < 10)
		{
			printf("|　　  %d 　　|", member[i]);
		}

		else
		{
			printf("|　　 %d　　 |", member[i]);
		}
	}

	printf("\n　　");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("　下\n　　――――――――――――――――――――――――――――――――――――――――――\n　　");

	for (i = 23; i < 29; i++)
	{
		if (member[i] < 10)
		{
			printf("|　　  %d 　　|", member[i]);
		}

		else
		{
			printf("|　　 %d　　 |", member[i]);
		}
	}

	printf("\n　　");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("　側\n　　――――――――――――――――――――――――――――――――――――――――――\n　　");

	for (i = 29; i < 35; i++)
	{
		if (member[i] < 10)
		{
			printf("|　　  %d 　　|", member[i]);
		}

		else
		{
			printf("|　　 %d　　 |", member[i]);
		}
	}

	printf("\n　　");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("\n　　――――――――――――――――――――――――――――――――――――――――――\n　　");

	for (i = 35; i < 41; i++)
	{
		if (member[i] < 10)
		{
			printf("|　　  %d 　　|", member[i]);
		}

		else
		{
			printf("|　　 %d　　 |", member[i]);
		}
	}

	printf("\n　　");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("\n　　――――――――――――――――――――――――――――――――――――――――――\n　　\n");
}