#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>
#include "Header.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int count = 0;
	FilesCreation(0, 5, &count);
}