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
			printf("�O2���]�҂̏o�Ȕԍ�(11�l�܂ŉA0���͂Ŏ��s)>>");
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
			printf("��肪�Ȃ����0(�I��)�A����ւ��Ē��������������1�A������x��蒼���������2�����>>");
			scanf_s("%d", &feedback);

			if (feedback == 1)
			{
				printf("����ւ������ԍ���,���Ԃɓ���ē���(ex. 1,2)>>");
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
				printf("|�@���{�W�O�@|");
				break;

			case 2:
				printf("|�@�ɓ������@|");
				break;

			case 3:
				printf("|�@�㐙���M�@|");
				break;

			case 4:
				printf("| �]�ː에�� |");
				break;

			case 5:
				printf("|�@ ���厡�@ |");
				break;

			case 6:
				printf("|�@�����k�ց@|");
				break;

			case 7:
				printf("| �k���ĎO�Y |");
				break;

			case 8:
				printf("|�@��ؐ����@|");
				break;

			case 9:
				printf("|�@�����O���@|");
				break;

			case 10:
				printf("|�@ �ߓ��E �@|");
				break;

			case 11:
				printf("|�@��{���n�@|");
				break;

			case 12:
				printf("|�@�u�꒼�Ɓ@|");
				break;

			case 13:
				printf("|�@�����琤�@|");
				break;

			case 14:
				printf("|�@�����[���@|");
				break;

			case 15:
				printf("|�@�h��n�q�@|");
				break;

			case 16:
				printf("|�@�ɒB���@�@|");
				break;

			case 17:
				printf("|�ߏ��卶�q��|");
				break;

			case 18:
				printf("|�@�~�J�p��@|");
				break;

			case 19:
				printf("|�@��ˎ����@|");
				break;

			case 20:
				printf("|�@����ƍN�@|");
				break;

			case 21:
				printf("|�@�Ėڟ��΁@|");
				break;

			case 22:
				printf("| �V�n�ˈ |");
				break;

			case 23:
				printf("|�@ �z�c�� �@|");
				break;

			case 24:
				printf("|�@���݉p��@|");
				break;

			case 25:
				printf("|�@����p���@|");
				break;

			case 26:
				printf("|�@�@���h�@�@|");
				break;

			case 27:
				printf("|�@�y���ΎO�@|");
				break;

			case 28:
				printf("|�@������Ɓ@|");
				break;

			case 29:
				printf("|�@�@�ٌc�@�@|");
				break;

			case 30:
				printf("|�@�k�𐭎q�@|");
				break;

			case 31:
				printf("|�@�����m�ԁ@|");
				break;

			case 32:
				printf("|�@�{�{�����@|");
				break;

			case 33:
				printf("|�@�����@���@|");
				break;

			case 34:
				printf("|�@�����f���@|");
				break;

			case 35:
				printf("|�@ �X���O �@|");
				break;

			case 36:
				printf("|�@�R���L��@|");
				break;

			case 37:
				printf("|�@����G���@|");
				break;

			case 38:
				printf("|�@�g�c���A�@|");
				break;

			case 39:
				printf("|���C�v�j�b�c|");
				break;

			case 40:
				printf("|�@�@�����@�@|");
				break;

			case 41:
				printf("|�@ ���\�[ �@|");
				break;

			}
		}
}

void zasekioutput(int *member)
{
	int i, konkai, zenkai=0;
	printf("�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@   �@ �\�\�\\n");
	printf("�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@   �@�@  �b����b\n");
	printf("        �@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�\�\�\\n�@�@�@�@�@�@�@�@�@�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\\n�@�@�@�@�@�@�@�@�@");

	for (i = 0; i < 5; i++)
	{
		if (member[i] < 10)
		{
			printf("|�@�@  %d �@�@|", member[i]);
		}

		else
		{
			printf("|�@�@ %d�@�@ |", member[i]);
		}
	}

	printf("\n�@�@�@�@�@�@�@�@�@");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;


	printf("\n�@�@�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\\n�@�@");

	for (i = 5; i < 11; i++)
	{
		if (member[i] < 10)
		{
			printf("|�@�@  %d �@�@|", member[i]);
		}

		else
		{
			printf("|�@�@ %d�@�@ |", member[i]);
		}
	}

	printf("\n�@�@");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("\n���@�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\\n�@�@");

	for (i = 11; i < 17; i++)
	{
		if (member[i] < 10)
		{
			printf("|�@�@  %d �@�@|", member[i]);
		}

		else
		{
			printf("|�@�@ %d�@�@ |", member[i]);
		}
	}

	printf("\n�@�@");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("�@�L\n���@�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\\n�@�@");

	for (i = 17; i < 23; i++)
	{
		if (member[i] < 10)
		{
			printf("|�@�@  %d �@�@|", member[i]);
		}

		else
		{
			printf("|�@�@ %d�@�@ |", member[i]);
		}
	}

	printf("\n�@�@");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("�@��\n�@�@�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\\n�@�@");

	for (i = 23; i < 29; i++)
	{
		if (member[i] < 10)
		{
			printf("|�@�@  %d �@�@|", member[i]);
		}

		else
		{
			printf("|�@�@ %d�@�@ |", member[i]);
		}
	}

	printf("\n�@�@");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("�@��\n�@�@�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\\n�@�@");

	for (i = 29; i < 35; i++)
	{
		if (member[i] < 10)
		{
			printf("|�@�@  %d �@�@|", member[i]);
		}

		else
		{
			printf("|�@�@ %d�@�@ |", member[i]);
		}
	}

	printf("\n�@�@");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("\n�@�@�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\\n�@�@");

	for (i = 35; i < 41; i++)
	{
		if (member[i] < 10)
		{
			printf("|�@�@  %d �@�@|", member[i]);
		}

		else
		{
			printf("|�@�@ %d�@�@ |", member[i]);
		}
	}

	printf("\n�@�@");

	konkai = i;

	nameprintf(member, zenkai, konkai);

	zenkai = konkai;

	printf("\n�@�@�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\�\\n�@�@\n");
}