#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int i=0, p=-1,q = 1;
	int number[100];
	FILE *fp;	
	fp = fopen("FILE1.txt","r");
	while(q ==1)
		{
		q=fscanf(fp, "%d", &number[i]);
//Ham fscanf neu thanh cong tra se ve gia tri q= 1. 
//		printf("%d\n", buff[i] );
//		printf("  %d \t ",q );
		fseek( fp , 1L, SEEK_CUR);
//Ham di chuyen con tro trong file.
		i++;
		p++;
//p là so cac so co trong file.
		}
	fclose(fp);
	
//Tinh tong cac so.
	int tong=0;
	for(int i=0; i<=p ; i++)
		{
		tong= tong+ number[i];	
		}

//Xuat ra file tong cac so
	FILE *in;
	in = fopen("FILE2.txt","w+");
	fprintf(in, "%d", tong);
return 0;

}
