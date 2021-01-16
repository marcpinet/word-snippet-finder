#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

#include "headers.h"

int main()
{
	char* snippet = (char*)malloc(sizeof(char) * 101);
	if (snippet == NULL)
		return 1;
	else
	{
		printf("Put a snippet here : (e.g 'lia' will return every words with 'lia' inside of it)\n\n");
		fgets(snippet, 101, stdin);
		printf("\n--------------------\n");
		lookForWords(snippet);
	}
	printf("Close the window to stop the program...\n");
	free(snippet);
	Sleep(300000);
	return 0;
}