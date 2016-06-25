/*
 * QuickUnion.cpp
 *
 *  Created on: May 29, 2016
 *      Author: ved57
 */

#include "UF.h"

#ifdef QUICKUNION

#include <set>
UF::UF(int N):vecElements(N)
{
	for (int i =0;i<N;i++)
	{
		vecElements[i]=i;
	}
}

void UF::addConnection(int p, int q)
{
	vecElements[q] = p;
}

bool UF::isConnected(int p, int q)
{
	return find(p) == find(q);
}

//chase and track the parent root to find the set it belongs to
int UF::find(int p)
{
	int child = p;
	while(vecElements[child]!=child)
	{
		child = vecElements[child];
	}
	return child;
}

//Count how many unique roots are there
int UF::count()
{
	set<int> setId;
	for (size_t i =0;i<vecElements.size();i++)
	{
		setId.insert(find(i));
	}
	return  setId.size();
}

void UF::Print(void)
{
	for (size_t i =0;i<vecElements.size();i++)
	{
		cout<<"\t"<<i;
	}
	cout<<"\n";
	for (size_t i =0;i<vecElements.size();i++)
	{
		cout<<"\t"<<vecElements[i];
	}
}
#endif //QUICKUNION
