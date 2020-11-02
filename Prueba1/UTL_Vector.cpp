#include"UTL_Vector.h"
#include<stdlib.h>

t_vector createVector(int size) {
	t_vector vector = (t_vector)malloc(size * sizeof(t_vector_value));

	for (int i = 0; i < size; i++)
	{
		vector[i] = 0;
	}

	return vector;
}
void destroyVector(t_vector vector) {
	free(vector);
	vector = 0;
}