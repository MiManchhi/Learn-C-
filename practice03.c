typedef struct
{
	int adjvex;
	struct EgdeNode* next;
}EdgeNode;
typedef struct
{
	DataType vertex;
	EdgeNode* first;
}VertexNode;
typedef struct
{
	VertexNode adjlist[MaxSize];
	int vertexNum, edgeNum;
};