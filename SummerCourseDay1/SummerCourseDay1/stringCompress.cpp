#include"stringCompress.h"
void stringCompression()
{
	char* str = (char *)calloc(sizeof(char),100);
	printf("enter the string:\n");
	scanf_s("%s", str,100);
	int ind1 = 0, ind2 = 0, count = 1;
	while (str[ind2+1] != '\0')
	{
		if (str[ind2] == str[ind2+1])
		{
			count++;
		}
		else if (count > 1)
		{
			str[ind1] = str[ind2];
			ind1++;
			str[ind1] = count+48;
			ind1++;
			count = 1;
		}
		else
		{
			str[ind1] = str[ind2];
			ind1++;
		}
		ind2++;
	}
	if (count != 1)
	{
		str[ind1] = str[ind2 - 1];
		ind1++;
		str[ind1] = count+48;
	}
	else
		str[ind1] = str[ind2];

	str[++ind1] = '\0';
	printf("%s", str);
}