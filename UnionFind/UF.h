/*
 * UF.h
 *
 *  Created on: May 29, 2016
 *      Author: root
 */

#ifndef UNIONFIND_UF_H_
#define UNIONFIND_UF_H_


#include "../Definitions.h"
#define DATA_FILE "/tinyUF.txt"
#include<vector>

#define QUICKUNION
int UF_main();

class UF{
public:
	UF(int N);
	void addConnection(int p, int q);
	bool isConnected(int p, int q);
	int find(int p); //find the component
	int count();
	void Print();
private:
	vector <int> vecElements;
};

#endif /* UNIONFIND_UF_H_ */
