#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fp;
	FILE *fp2;
	fp=fopen("datain","r");
	
	char Chartab[80];
	char Chartab2[80];
	int intarray[80];

	fread(Chartab,80,8,fp);
   

	for(int i=0;i<10;i++){

		intarray[i]=atoi(&Chartab[8*i]); 
	}
	
	
	/*Apply *3 function to it*/
	for(int v=0;v<10;v++){
		intarray[v]*=3;
	}

	
	/*Prints the results in the 'dataout' file*/

	fclose(fp);	
	fp2=fopen("dataout","w+");	
	
	
	for(int l=0;l<10;l++){
		fprintf(fp,"%d\n",intarray[l]);	
	}
		
	fclose(fp2);

	

	return 0;


}
