#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

void buildAdjList(const int N, Vector *adjList);

void dfs(int v);

void dfsPath(int from, int to);

void menu();
