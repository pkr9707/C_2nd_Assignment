#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int fs, i;
	int input, add = 0, cn, pn;

	printf("선공: 1 후공: 2\n 숫자를 입력해주세요:          ");
	scanf("%d", &fs);


	while ((fs != 1) && (fs != 2)) {
		printf("1 혹은 2 입력:          ");
		scanf("%d", &fs);
	}
	printf("-------------게임 시작---------------\n---- 이상 3 이하 숫자 입력----\n");
	if (fs == 1)
	{
		for (i = 1; i <= 30; i++) {
			printf("사용자 값: ");
			scanf("%d", &pn);
			while ((pn < 1) || (pn > 3)) {
				printf("---1 이상 3 이하 숫자 입력---");
				printf("\n사용자 값: ");
				scanf("%d", &pn);

			}
			add = add + pn;
			printf("----------------------총 합: %d\n", add);
			i = add;
			if (i >= 30) {
				printf("\n=============패배===============\n");
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
			printf("컴퓨터 값: %d\n", cn);
			add = add + cn;
			printf("-----------------------총 합: %d\n", add);
			i = add;
			if (i >= 30) {
				printf("\n==============승리===============\n");
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

			printf("컴퓨터 값: %d\n", cn);
			add = add + cn;
			printf("-----------------------총 합: %d\n", add);
			i = add;
			if (i >= 30) {
				printf("\n================승리==============\n");
				break;
			}
			printf("사용자 값: ");
			scanf("%d", &pn);
			while ((pn < 1) || (pn > 3)) {
				printf("---1 이상 3 이하 숫자 입력--- ");
				printf("\n사용자 값: ");
				scanf("%d", &pn);
			}
			add = add + pn;
			printf("-----------------------총 합: %d\n", add);
			i = add;
			if (i >= 30) {
				printf("\n==============패배===============\n");
				break;
			}
		}


	}

	printf("\n============게임끝=============");
	getchar();
	getchar();
    return 0;
}
