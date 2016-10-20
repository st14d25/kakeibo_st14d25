#ifndef _INCLUDE_AVERAGE_H_
#define _INCLUDE_AVERAGE_H_

#include <stdio.h>

int average(int payments[])
{
	int average;
	int i;
	int sum = 0;


	for(i = 0; i < 5; i++){
		 sum = sum + payments[i];
	}

	average = sum / 5;

	return average;
}

#endif // _INCLUDE_AVERAGE_H_
