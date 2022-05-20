#include <stdio.h>
#include <stdlib.h>

char capital_to_small(char c)
{
	if(c>=65 && c<=90)
	return (c+32);
	else
	return c;
}

int main(){
	while(1){
		char ch,b;
		scanf("%c",&ch);
		if(ch=='$')
			break;
		b=capital_to_small(ch);
		printf("%c",b);

	}printf("%c",capital_to_small('H'));
	return 0;
}
