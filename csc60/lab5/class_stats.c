// class_stats
#include "lab5.h"

void class_stats( int grades[], int number_of_grades, double *average, int distribution[])
{
    *average = 0;
    int i,position=0;

    for (i = 0; i < DIST_SIZE; i++)
    {
	distribution[i]= 0;
    }
    
    for (i = 0; i< number_of_grades; i++)
    {
	*average = *average + grades[i];

	position = (grades[i]/10);

	distribution[position]++;
    }

    *average = *average /number_of_grades;

    return;
}
