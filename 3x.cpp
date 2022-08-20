//============================================================================
// Name        : 3x.cpp
// Author      : Nick Coy
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include  <fstream>
#include <bits/stdc++.h>
using namespace std;
ofstream  fout;

int main() {
	  clock_t start, end;
	   start = clock();
	fout.open("abc.txt");
	long long num;

	for (double i = 1; i <50000000; i++)
	{
		int loopnum = 0;
		num = i;

			while(num != 1)
			{
				if(num % 2 == 0)
				{
					num=num/2;
				}
				else
				{
					num=(3*num)+1;
				}
				loopnum++;
			}
			//fout<<i<<","<<loopnum<<"\n";
	}
	 end = clock();
	    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	    cout << "Time taken by program is : " << fixed
	         << time_taken << setprecision(5);
	    cout << " sec " << endl;

	return 0;
}
