#include <iostream>

int *calc_moda(int *array, int size)
{
	if (size == 0)
		return (nullptr);

	//Inicialización de variables
	int *mode = array;
	int max = 0;
	int index = 0;
	
	//Calculo
	while (index < size)
	{
		int number = 0;
		int index_number = 0;

		// Numero de apariciones de array[index]
		while (index_number < size)
		{
			if (array[index_number] == array[index])
				number++;
			index_number++;
		}

		//Actualizar moda
		if (number > max)
		{
			max = number;
			mode = &array[index];
		}
		index++;
	}
	return mode;
}
