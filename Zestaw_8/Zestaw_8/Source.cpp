#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define N 6
#define BUFLEN 1024

struct book
{
	char tytul[50];
	int data;
};



int main() {

	/*FILE *fp;

	char buff[255];

	fp = fopen("tmp/test.txt", "w");

	fputs("Co tam u was slychac ?", fp);

	fclose(fp);

	fp = fopen("tmp/test.txt", "r");

	fgets(buff, 255, (FILE*)fp);
	printf("%s\n", buff);
	fclose(fp);
	*/


	// 1	//Create a text file, containing some decimal numbers.Ask the user for the name of the file to be created.

	/*
	FILE *fp;
	char name[255];
	char numbers[N] = "16789";
	int num[N];
	//scanf("%s", name);

	//fp = fopen(name, "w");
	fp = fopen("test.txt", "w");
	//printf("Enter 5 variables: ");
		fprintf(fp, numbers);

	//fclose(fp);
	*/

// 2	//Read this file and compute the sum of all numbers.Print the result to the screen.

	/*
	//fp = fopen(name, "r");
	//fp = fopen("test.txt", "r");

	fseek(fp, 0, SEEK_SET);
	//
	for (int i = 0; i < 5; i++) {
		num[i] = fgetc(fp)-48;
		printf("%d", num[i]);
	}
	//
	size_t len;
	while ((len = fread(num, sizeof(char), BUFLEN, fp)) > 0)

	fclose(fp);
	int sum=0;
	for (int i = 0; i < 5; i++)
		sum += num[i];
	printf("\n%d", sum);
	*/

// 3	//Learn about functions fread and fwrite.Fill a matrix with numbers and write it as a memory block to a file.
		//Then read the file back to a one dimensional array and print all values.Take care about the size of arrays.

	/*
	FILE *fp;
	int numbers[N]={1,3,5,7,9,8};
	char pff[N+1];
	if ((fp = fopen("test.txt", "w+")) == NULL)
	{
		fprintf(stderr, "Cannot open output file.\n");
		return 1;
	}

	for (int i = 0; i < 6; i++) {
		pff[i] = numbers[i]+48;
	}
	fwrite(pff, sizeof(char), N, fp);
	
	fseek(fp, 0, SEEK_SET);
	char pffff[N+1];
	fread(pffff, sizeof(fp), N, fp);
	printf("%s", pffff);
	
	fclose(fp);
	*/

// 4	//Create an exact copy of an existing file, e.g.a JPG image.Use a different name, but the same extension.
		//Check the copied file e.g.by opening it in a browser.
	/*
	FILE *f1, *f2;
	char buf[BUFLEN];
	size_t len;
	f1 = fopen("wad.png", "rb");
	f2 = fopen("copywad.png", "wb");
	if (!(f1 && f2)) return -1;
	while ((len = fread(buf, 1, BUFLEN, f1))>0) 
		fwrite(buf, 1, len, f2);
	fclose(f1);
	fclose(f2);

	*/

		
book book1[5];
struct book *cos;
cos = &book1[1];
strcpy(book1[1].tytul , "tak ja mam racje");
book1[1].data = 2016;

printf("Title: %s\nData: %d\n", cos->tytul, cos->data);


return 0;

}