#include<stdio.h>
#include<stdlib.h>
#include"MGraph.h"

int main()
{
	int i, j, k;
	int n = 0;
	int e = 0;
	char ch[26];
	printf("�����붥���������");
	scanf("%d", &n);
	printf("������ߵ�������");
	scanf("%d", &e);
	printf("�����붥��Ԫ��:");
	for (i = 0; i < n; i++)
	{
		scanf(" %c", &ch[i]);
	}
	MGraph MG;
	CreatGraph(&MG, ch, n, e);
	for (i = 0; i < MaxSize; i++)
		visited[i] = 0;
	printf("������ȱ��������ǣ�");
	DFTraverse(&MG, 0);
	printf("\n");
	return 0;
}
