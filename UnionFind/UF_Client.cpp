/*
 * UF_Client.cpp
 *
 *  Created on: May 29, 2016
 *      Author: root
 */

#include "UF.h"
#include <fstream>
#include <string>

/*
 * Read the input file.
 * If connection does not exist then print connection not exists.
 * else add connection.
 */
int UF_main()
{
	string filename = string(DATA_FOLDER)  + DATA_FILE;
	ifstream in(filename.c_str());
	int maxValue;
	if (in)
	{
		in>>maxValue;
		cout <<maxValue<<endl;
		UF oUF(maxValue);
		int u,v;

		while(in>>u>>v)
		{
			if(!oUF.isConnected(u,v))
			{
				oUF.addConnection(u,v);
			}
			cout<<u<<"\t"<<v<<endl;
		}
		oUF.Print();
	}

	return 0;
}



