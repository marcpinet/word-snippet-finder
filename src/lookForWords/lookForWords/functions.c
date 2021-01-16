#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int lookForWords(char *snippet)
{
	FILE* dict;
	fopen_s(&dict, "dicts/en.txt", "r");
	if (dict == NULL)
		return 1;
	else
	{
		char *singleLine = (char*)malloc(sizeof(char) * 101);

		while (!feof(dict))
		{
			if (singleLine == NULL)
				return 1;
			else
			{
				fgets(singleLine, 101, dict);
				if (strstr(singleLine, snippet) != NULL)
					puts(singleLine);
			}
		}
		fclose(dict);
		free(singleLine);
	}
	return 0;
}