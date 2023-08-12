#include<stdio.h>
#include<stdlib.h>
#include"MGraph.h"

int main()
{
	int i, j, k;
	int n = 0;
	int e = 0;
	char ch[26];
	printf("请输入顶点的数量：");
	scanf("%d", &n);
	printf("请输入边的数量：");
	scanf("%d", &e);
	printf("请输入顶点元素:");
	for (i = 0; i < n; i++)
	{
		scanf(" %c", &ch[i]);
	}
	MGraph MG;
	CreatGraph(&MG, ch, n, e);
	for (i = 0; i < MaxSize; i++)
		visited[i] = 0;
	printf("深度优先遍历序列是：");
	DFTraverse(&MG, 0);
	printf("\n");
	return 0;
}
