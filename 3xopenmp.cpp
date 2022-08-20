// g++ 3xopenmp.cpp -fopenmp

#include <iostream>
#include <omp.h>
#include  <fstream>
#include <chrono>
using namespace std;

ofstream  fout;
void step(long long y){
	long  x=y;
	long a = 0;
			while(y != 1){
				if(y % 2 == 0){
					y=y/2;
				}
				else{
					y=(3*y)+1;
				}
				a++;
			}
		#pragma omp critical
			{
		//fout<<x<<","<<a<<"\n";
				}
}

int main() {
	auto start = chrono::steady_clock::now();//auto is used to auto assign the data type

	fout.open("abc.txt");
	#pragma omp parallel for
	for (long long i = 1; i <50000000; i++){
		step(i);
	}

	auto end = chrono::steady_clock::now();
	   // double time_taken = end - start;/// double(CLOCKS_PER_SEC);
	    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count();
	    cout << " sec " << endl;
	return 0;
}
