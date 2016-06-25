/*
 * UF.cpp
 *
 *  Created on: May 29, 2016
 *      Author: ved57
 */

#include "UF.h"

#ifdef QUICKFIND
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
	for (size_t i =0;i<vecElements.size();i++)
	{
		if (vecElements[i]==vecElements[q])
		vecElements[i]=vecElements[p];
	}
}

bool UF::isConnected(int p, int q)
{
	return vecElements[p]==vecElements[q];
}

int UF::find(int p)
{
	return vecElements[p];
}

int UF::count()
{
	set<int> setId;
	for (size_t i =0;i<vecElements.size();i++)
	{
		setId.insert(vecElements[i]);
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
#endif
