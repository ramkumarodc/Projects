<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 520c1e359d20e898cf8912a5c81e369acd0bf715
#include<stdio.h>

#define swap(a, b, c) {c t; t=a; a=b; b =t;}
int main()
{
	int a =5;
	int b=4;
	swap(a, b, int);
	printf("%d %d",a,b);
	//printf("%d",(void*)0);
	return 0;
}
<<<<<<< HEAD
=======
#include<stdio.h>
#include<string.h>

#define swap(a, b, c) {c t; t=a; a=b; b =t;}
int main()
{

	char arr[5];
	printf("arr size:%d\n",sizeof(arr));
	memset(arr,' ', sizeof(arr));
	memcpy(&arr, "Hel", sizeof(arr)-1);
	arr[sizeof(arr)] ='\0';

	printf("%s", arr);
	return 0;
}
>>>>>>> main
=======
>>>>>>> 520c1e359d20e898cf8912a5c81e369acd0bf715
