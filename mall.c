#include <stdio.h>
#include <stdlib.h>//malloc and rand

int main()
{
	
	char work;
	char add; 
	char subtract;
	//int* ptr;
	int size = 0;
	int i;
	int* array = (int*)malloc(sizeof(int));
do
	{
	printf("Please press 'a' for add a new value to the stack.\n");
	printf("Please press 's' for process a node on the stack.\n");	
	printf("Please press 'q' for quit.\n\n");
	
	
	
	array = (int*)realloc(array, sizeof(int)*size);
	
	if(size == 0)
	{
		printf("The stack is currently empty.\n");
	}
	else
	{
		printf("Current Stack:\n");
			for(i = 0; i < size; i++)
			{
				
				printf("%d\t", array[i]);	
			}
		printf("\n");
	}
	printf("\nPlease make a choice:");
	scanf( " %c",&work);
		
	if(work == 'q')
		break;
	
	
	if(work == 'a')
		{
			printf("\n\n");
			size++;
			array = (int*)realloc(array, sizeof(int)*size);
			printf("Please enter a number:\n");
			scanf("%d", &array[size-1]); 
			printf("\n");
		
		}
		
	else if(work == 's')
		{
			if(size != 0){
			printf("\n\n");
			printf("Now processing:\n");
			printf("%d\n", array[size-1]);
			size--;
			array = (int*)realloc(array, sizeof(int)*size);
			printf("\n\n");
			}
		}
		
	else
	{
		printf("Wrong input\n\n");
	}	
	
	}while(work!='q');
	 printf("Thank for playing.\n\n");
	 free(array);
	
	return 0;
	
}