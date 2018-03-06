#include <stdio.h>
#include <string.h>
int main()
{
	int a=0, e=0, i=0, o=0, u=0, contador=0, contador2;
	char mango[10001];
	contador=0;
	
		while (scanf("%s", mango) != EOF )
		{
			for(contador2=0; contador2 <= strlen(mango); contador2++ )
			{
				if ( (mango[contador2]=='a')||(mango[contador2]=='A'))
				a++;
				if ( (mango[contador2]=='e')||(mango[contador2]=='E'))
				e++;
				if ( (mango[contador2]=='I')||(mango[contador2]=='i'))
				i++;
				if ( (mango[contador2]=='O')||(mango[contador2]=='o'))
				o++;
				if ( (mango[contador2]=='U')||(mango[contador2]=='u'))
				u++;
			}	
			contador++;
		}
	printf("%d %d %d %d %d\n", a,e,i,o,u);
	return 0;
}
