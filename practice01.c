//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_VERTICES 20
//typedef struct {
//    char vertices[MAX_VERTICES];
//    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
//    int numVertices;
//} Graph;
//
//// 初始化图
//void initializeGraph(Graph* graph) {
//    int i, j;
//    graph->numVertices = 0;
//    for (i = 0; i < MAX_VERTICES; i++) {
//        for (j = 0; j < MAX_VERTICES; j++) {
//            graph->adjacencyMatrix[i][j] = 0;
//        }
//    }
//}
//
//// 添加顶点
//void addVertex(Graph* graph, char vertex) {
//    graph->vertices[graph->numVertices++] = vertex;
//}
//
//// 添加边
//void addEdge(Graph* graph, int startVertex, int endVertex) {
//    graph->adjacencyMatrix[startVertex][endVertex] = 1;
//    graph->adjacencyMatrix[endVertex][startVertex] = 1;
//}
//
//// 深度优先搜索遍历
//void depthFirstTraversal(Graph* graph, int vertex, int visited[]) {
//    int i;
//    visited[vertex] = 1;
//    printf("%c ", graph->vertices[vertex]);
//
//    for (i = 0; i < graph->numVertices; i++) {
//        if (graph->adjacencyMatrix[vertex][i] && !visited[i]) {
//            depthFirstTraversal(graph, i, visited);
//        }
//    }
//}
//
//// 深度优先搜索遍历入口函数
//void depthFirstSearch(Graph* graph, char startVertex) {
//    int startIndex = -1;
//    int visited[MAX_VERTICES] = { 0 };
//    int i;
//
//    // 查找起始顶点在顶点数组中的索引
//    for (i = 0; i < graph->numVertices; i++) {
//        if (graph->vertices[i] == startVertex) {
//            startIndex = i;
//            break;
//        }
//    }
//
//    if (startIndex != -1) {
//        depthFirstTraversal(graph, startIndex, visited);
//    }
//    printf("\n");
//}
//
//// 广度优先搜索遍历
//void breadthFirstTraversal(Graph* graph, int vertex, int visited[]) {
//    int queue[MAX_VERTICES];
//    int front = 0, rear = 0;
//    int i, currentVertex;
//
//    visited[vertex] = 1;
//    printf("%c ", graph->vertices[vertex]);
//    queue[rear++] = vertex;
//
//    while (front != rear) {
//        currentVertex = queue[front++];
//        for (i = 0; i < graph->numVertices; i++) {
//            if (graph->adjacencyMatrix[currentVertex][i] && !visited[i]) {
//                visited[i] = 1;
//                printf("%c ", graph->vertices[i]);
//                queue[rear++] = i;
//            }
//        }
//    }
//}
//
//// 广度优先搜索遍历入口函数
//void breadthFirstSearch(Graph* graph, char startVertex) {
//    int startIndex = -1;
//    int visited[MAX_VERTICES] = { 0 };
//    int i;
//
//    // 查找起始顶点在顶点数组中的索引
//    for (i = 0; i < graph->numVertices; i++) {
//        if (graph->vertices[i] == startVertex) {
//            startIndex = i;
//            break;
//        }
//    }
//
//    if (startIndex != -1) {
//        breadthFirstTraversal(graph, startIndex, visited);
//    }
//    printf("\n");
//}
//
//int main() {
//    Graph graph;
//    initializeGraph(&graph);
//
//    int numVertices, numEdges;
//    char vertex;
//    int startVertex, endVertex;
//    int i;
//
//    printf("请输入顶点的个数：");
//    scanf("%d", &numVertices);
//
//    printf("请输入顶点的字符表示：\n");
//    for (i = 0; i < numVertices; i++) {
//        scanf(" %c", &vertex);
//        addVertex(&graph, vertex);
//    }
//
//    printf("请输入边的个数：");
//    scanf("%d", &numEdges);
//
//    printf("请输入边的起始顶点和结束顶点的索引：\n");
//    for (i = 0; i < numEdges; i++) {
//        scanf("%d %d", &startVertex, &endVertex);
//        addEdge(&graph, startVertex-1, endVertex-1);
//    }
//
//    char startChar;
//    printf("请输入遍历的起始顶点：");
//    scanf(" %c", &startChar);
//
//    printf("深度优先搜索遍历结果：");
//    depthFirstSearch(&graph, startChar);
//
//    printf("广度优先搜索遍历结果：");
//    breadthFirstSearch(&graph, startChar);
//
//    return 0;
//}
