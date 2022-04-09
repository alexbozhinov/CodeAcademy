#include "graph.h"

int visited[100] = {0};
Vector adjList[100];
bool hasPath = FALSE;

void buildAdjList(const int N, Vector *adjList)
{
    for (int i = 0; i < N; i++)
    {
        adjList[i] = vectorConstructor(N);
    }
}

void dfs(int v)
{
    visited[v] = 1;
    printf("%d ", v);

    for (int j = 0, i = adjList[v].elements[j]; j < adjList[v].size; j++, i = adjList[v].elements[j])
    {
        if (visited[i] == 0)
            dfs(i);
    }
}

void dfsPath(int from, int to)
{
    visited[from] = 1;

    if (from == to)
    {
        hasPath = TRUE;
        return;
    }

    for (int j = 0, i = adjList[from].elements[j]; j < adjList[from].size; j++, i = adjList[from].elements[j])
    {
        if (visited[i] == 0)
            dfsPath(i, to);
    }
}

void menu()
{
    int N = 100;
    buildAdjList(N, adjList);

    int n = 0, m = 0;
    printf("Input N and M: ");
    scanf("%d%d", &n, &m);

    while (m--)
    {
        int from = 0, to = 0;
        printf("Input from and to: ");

        scanf("%d%d", &from, &to);
        pushBack(&adjList[from], to);
        pushBack(&adjList[to], from);
    }

    int startV = 0;
    dfs(startV);

    for (int i = 0; i < 100; i++)
    {
        visited[i] = 0;
    }

    int x = 4;
    int y = 7;
    dfsPath(x, y);

    printf("\n\nIs there a path between %d and %d: %d\n", x, y, hasPath);

    for (int i = 0; i < N; i++)
    {
        vectorDestructor(&adjList[i]);
    }
}