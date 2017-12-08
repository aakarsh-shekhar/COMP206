#include <stdio.h>
#include "list.c"

int main()
{
	newList();
	int n=1;		//initialized n greated than 0 (not required)
	while(1)
	{
		printf("Enter a number: ");
		scanf("%d", &n);

		if(n<=0)
			break;
		
		addNode(n);
	}

	prettyPrint();

	return 1;
}
