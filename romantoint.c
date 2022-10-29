///////////////////
//length of array//
///////////////////

int length(char * s)
{
    int x = 0;
while(s[x] != '\0')
x++;

return x;

}

////////////////////////////////////////////////
//CHAEK if INPUT IS I , V , X , L , C , D , M;//
////////////////////////////////////////////////

int chekchar(char * s){
int x = 0;

while(s[x] != '\0')
{

if(s[x] == 'I' || s[x] == 'V' || s[x] == 'X' || s[x] == 'L' || s[x] == 'C' || s[x] == 'D' || s[x] == 'M')
{
	x++;
}
else
{
	return 0;
}
}
return 1;
}

/////////////
//RomaToInt//
/////////////

int romanToInt(char * s){
	int x = 0 , rmint = 0;
	if(length(s) == 0 || length(s) >= 16)
		return 0;
	if(chekchar(s) == 0)
		return 0;
	
	while(s[x] != '\0')
	{

		if((s[x] == 'I')  && (s[x + 1] != 'V' && s[x + 1] != 'X'))
		{
			printf("%c\n" , s[x]);
			rmint = rmint + 1 ;
			x++;
		}
		if(s[x] == 'V')
		{
			printf("%c\n" , s[x]);
			rmint = rmint + 5 ;
			x++;
		}
		
		if((s[x] == 'X') && (s[x + 1] != 'L' && s[x + 1] != 'C'))
		{
			printf("%c\n" , s[x]);
			rmint = rmint + 10 ;
			x++;
		}

		if(s[x] == 'L')
		{
			printf("%c\n" , s[x]);
			rmint = rmint + 50 ;
			x++;
		}

		if((s[x] == 'C') && (s[x + 1] != 'D' && s[x + 1] != 'M'))
		{
			printf("%c\n" , s[x]);
			rmint = rmint + 100 ;
			x++;
		}

		if(s[x] == 'D')
		{
			printf("%c\n" , s[x]);
			rmint = rmint +500 ;
			x++;
		}

		if(s[x] == 'M')
		{
			printf("%c\n" , s[x]);
			rmint = rmint + 1000 ;
			x++;
		}

		if(s[x] == 'I' && s[x + 1] == 'V')
		{
			printf("%c%c\n" , s[x] , s [x + 1]);
			rmint = rmint + 4;
			x+=2;
		}

		if(s[x] == 'I' && s[x + 1] == 'X')
		{
			printf("%c%c\n" , s[x] , s [x + 1]);
			rmint = rmint + 9;
			x+=2;
		}

		if(s[x] == 'X' && s[x + 1] == 'L')
		{
			printf("%c%c\n" , s[x] , s [x + 1]);
			rmint = rmint + 40;
			x+=2;
		}
		if(s[x] == 'X' && s[x + 1] == 'C')
		{
			printf("%c%c\n" , s[x] , s [x + 1]);
			rmint = rmint + 90 ;
			x+=2;
		}

		if(s[x] == 'C' && s[x + 1] == 'D')
		{
			printf("%c%c\n" , s[x] , s [x + 1]);
			rmint = rmint + 400;
			x+=2;
		}
		if(s[x] == 'C' && s[x + 1] == 'M')
		{
			printf("%c%c\n" , s[x] , s [x + 1]);
			rmint = rmint + 900 ;
			x+=2;
		}

	}

return rmint;
}
