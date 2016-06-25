/*
 * Graph.cpp
 *
 *  Created on: Jun 25, 2016
 *      Author: ved57
 */
#include "Graph.h"
#include "../Definitions.h"

void Graph::vAddEdge(int src, int des)
{

	adjList[src].push_back(des);
	if (!bDirected)
	{
		adjList[des].push_back(src);
	}
}

void Graph::vPrintGraph()
{
	cout<<"\n Printing all the graph information";
	for (size_t i=0;i<adjList.size();++i)
	{
		cout<<"\n Vertice :: "<<i <<"  Neighbours are :: ";
		list<int>::const_iterator it;
		for (it = adjList[i].begin();it!=adjList[i].end();++it)
		{
			cout<<"\t "<<*it;
		}
	}
}


