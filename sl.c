#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void main(){
	system("clear");
	FILE *file;
	char textfile[1024];
	char item[1024]="test";
	int amount;
	printf("list filename: ");fgets(textfile,1024,stdin);
	textfile[strlen(textfile)-1]='\0';
	file = fopen(textfile,"a");
	char str[524288];
	struct tm* crrnt;
	time_t t;
	t = time(NULL);
	crrnt = localtime(&t);
	fprintf(file,asctime(crrnt));
	while(1){
		printf("item: ");fgets(item,1024,stdin);
		if(strcmp(item,"exit\n")==0){
			printf("leaving...\n");
			fclose(file);
			exit(1);
		}
		fprintf(file,item);
	}
}
