#ifndef ALGRAPH_H
#define ALGRAPH_H
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 20
int visited[MaxSize] = { 0 };
typedef char DataType;
typedef struct EdgeNode
{
	int adjvex;
	struct EdgeNode* next;
}EdgeNode;
typedef struct VertexNode
{
	DataType vertex;
	EdgeNode* first;
}VertexNode;
typedef struct ALGraph
{
	VertexNode adjlist[MaxSize];
	int vertexNum, edgeNum;
}ALGraph;
//建立有向图
void CreatGraph(ALGraph* G, DataType a[], int n, int e)
{
	int i, j, k;
	EdgeNode* s = NULL;
	G->vertexNum = n;
	G->edgeNum = e;
	for (i = 0; i < G->vertexNum; i++)
	{
		G->adjlist[i].vertex = a[i];
		G->adjlist[i].first = NULL;
	}
	for (k = 0; k < G->edgeNum; k++)
	{
		printf("请输入顶点和边的关系：\n");
		scanf("%d%d", &i, &j);
		s = (EdgeNode*)malloc(sizeof(EdgeNode));
		s->adjvex = j;
		s->next = G->adjlist[i].first;
		G->adjlist[i].first = s;
	}
}











#endif // !ALGRAPH_H

