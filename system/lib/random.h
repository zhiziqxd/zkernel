#ifndef random_H
#define random_H
#include "math.h"
#define RAND_MAX 32767
int seed=2333;
const int seed1=1664525,seed2=9244;
void srand(int a){
	seed=a;
}
int rand(){
	seed*3%2+1;
	return abs(seed1*seed+seed2)%RAND_MAX;
}
#endif
