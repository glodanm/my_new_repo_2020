#include <stdio.h>

char emptyVal(char* input)
{
	int n = 0, i = 0;
	while (n == 0) {
		if(input [i]+1==input[i+1])
		{
			i = i + 1;
		}
		else { n = 1; }
	}
	return input[i] + 1;
}
void main()
{
	char mas[27];
		gets_s(mas, 27);
	
		
		printf("%c", emptyVal(mas));
cout<<"Hello world";



}



