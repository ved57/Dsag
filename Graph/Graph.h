/*
 * Graph.h
 *
 *  Created on: Jun 25, 2016
 *      Author: ved57
 */

#ifndef DSAG_GRAPH_GRAPH_H_
#define DSAG_GRAPH_GRAPH_H_

/* Adjacency List Representation of Graph
 * The list of neighbours are made as a list of
 * vectors
 */

#include "../Definitions.h"
#include <vector>
#include <list>

int Graph_main();


class Graph
{
public:
	Graph(int vertices, bool directed = false):V(vertices), adjList(V),bDirected(directed){std::cout<<adjList.size();}
	void vAddEdge(int src, int des);
	void vPrintGraph();

private:
	int V;
	bool bDirected;
	vector< list<int> > adjList;
};



#endif /* DSAG_GRAPH_GRAPH_H_ */
