#ifndef MGRAPH_H
#define MGRAPH_H
#define MaxSize 20
#include<stdio.h>
#include<stdlib.h>
int visited[MaxSize] = { 0 };
typedef char DataType;
typedef struct
{
	DataType vertex[MaxSize];
	int edge[MaxSize][MaxSize];
	int vertexNum, edgeNum;
}MGraph;
//创建图
void CreatGraph(MGraph* G, DataType a[], int n, int e)
{
	int i, j, k;
	G->vertexNum = n;
	G->edgeNum = e;
	for (i = 0; i < G->vertexNum; i++)
		G->vertex[i] = a[i];
	for (i = 0; i < G->vertexNum; i++)
		for (j = 0; j < G->vertexNum; j++)
			G->edge[i][j] = 0;
	printf("请输入顶点和边的关系：");
	for (k = 0; k < G->edgeNum; k++)
	{
		scanf("%d%d", &i, &j);
		G->edge[i][j] = 1;
		G->edge[j][i] = 1;
	}
}
//深度优先遍历
void DFTraverse(MGraph* G, int v)
{
	printf("%c", G->vertex[v]);
	visited[v] = 1;
	for (int j = 0; j < G->vertexNum; j++)
		if (G->edge[v][j] == 1 && visited[j] == 0)
			DFTraverse(G, j);
}
//广度优先遍历
void BFTraverse(MGraph* G, int v)
{
	int i, j;
	int Q[MaxSize];
	int front  = -1;
	int rear = -1;
	printf("%c", G->vertex[v]);
	visited[v] = 1;
	Q[++rear]=v;
	while (rear != front)
	{
		i = Q[++front];
		for (j = 0; j < G->vertexNum; j++)
			if (G->edge[i][j] == 1 && visited[j] == 0)
			{
				printf("%c", G->vertex[j]);
				visited[j] = 1;
				Q[++rear] = j;
			}
	}
}
#endif // !MGRAPH_H
