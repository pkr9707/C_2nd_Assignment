#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int fs, i;
	int input, add = 0, cn, pn;

	printf("����: 1 �İ�: 2\n ���ڸ� �Է����ּ���:          ");
	scanf("%d", &fs);


	while ((fs != 1) && (fs != 2)) {
		printf("1 Ȥ�� 2 �Է�:          ");
		scanf("%d", &fs);
	}
	printf("-------------���� ����---------------\n---- �̻� 3 ���� ���� �Է�----\n");
	if (fs == 1)
	{
		for (i = 1; i <= 30; i++) {
			printf("����� ��: ");
			scanf("%d", &pn);
			while ((pn < 1) || (pn > 3)) {
				printf("---1 �̻� 3 ���� ���� �Է�---");
				printf("\n����� ��: ");
				scanf("%d", &pn);

			}
			add = add + pn;
			printf("----------------------�� ��: %d\n", add);
			i = add;
			if (i >= 30) {
				printf("\n=============�й�===============\n");
				break;
			}

			if (i < 26) {
				srand(time(NULL));
				cn = rand() % 3 + 1;
			}
			if (i == 26) { cn = 2; }
			if (i == 27) { cn = 3; }
			if (i == 28) { cn = 2; }
			if (i == 29) { cn = 1; }
			printf("��ǻ�� ��: %d\n", cn);
			add = add + cn;
			printf("-----------------------�� ��: %d\n", add);
			i = add;
			if (i >= 30) {
				printf("\n==============�¸�===============\n");
				break;
			}


		}
	}
	if (fs == 2) {
		for (i = 1; i <= 30; i++) {

			if (i < 26) {
				srand(time(NULL));
				cn = rand() % 3 + 1;
			}
			if (i == 26) { cn = 1; }
			if (i == 27) { cn = 3; }
			if (i == 28) { cn = 2; }
			if (i == 29) { cn = 1; }

			printf("��ǻ�� ��: %d\n", cn);
			add = add + cn;
			printf("-----------------------�� ��: %d\n", add);
			i = add;
			if (i >= 30) {
				printf("\n================�¸�==============\n");
				break;
			}
			printf("����� ��: ");
			scanf("%d", &pn);
			while ((pn < 1) || (pn > 3)) {
				printf("---1 �̻� 3 ���� ���� �Է�--- ");
				printf("\n����� ��: ");
				scanf("%d", &pn);
			}
			add = add + pn;
			printf("-----------------------�� ��: %d\n", add);
			i = add;
			if (i >= 30) {
				printf("\n==============�й�===============\n");
				break;
			}
		}


	}

	printf("\n============���ӳ�=============");
	getchar();
	getchar();
    return 0;
}
