/*Program to read a file containing lyrics and print it back on the terminal; AUTHOR: rapteon; DATE: 2019-07-22*/

#include<stdio.h>
#include<stdlib.h>


int main(){
	FILE *lyrics;
	int songChoice;
	char ch;
/*----------Menu----------*/
	printf("Available Lyrics:\n");
	printf("1	Yellow Submarine by The Beatles\n");
	printf("2	Holocene by Bon Iver\n");
	printf("3	Burn The Witch by Radiohead\n");
	
	printf("[1/2/3]?\n: ");
	scanf("%d", &songChoice);
	printf("\n\n");


/*----------General Form of File reading operation----------*/
/*	1. Create a pointer pointing to a FILE structure.   */
/*	2. Assign the structure returned by                 */ 
/*		fopen("<nameOfFile>", "operationType")      
		 to the pointer created above.              */
/*	3. Create a variable of char datatype               
		to store each character of the file.        */ 
/*	4. Use a 'while' loop to read each character
		from the file by assigning the value of
			fgetc(<pointerToFile>) to the
				character variable.         */
/*	5. Use an 'if' inside the 'while' loop
		to check the characters 
			returned by fgetc() since
				fgetc() returns a macro 
					named 'EOF' when
						the last character of the file is read. Use this knowledge to break out of the 'while'.*/
/*	6. Close the file using fclose(<file pointer>)       */


	switch(songChoice){
		case 1: lyrics = fopen("./lyricsFiles/yellowSubmarine", "r");
			if(lyrics == NULL){
				printf("Could not open file.");
				exit(1);
			}
			while(1){				
				ch = fgetc(lyrics);
				if(ch == EOF)
					break;
				else if(ch == '\n')
					printf("\n");
				else
					printf("%c", ch);
			}
			fclose(lyrics);
			break;
		case 2: lyrics = fopen("./lyricsFiles/holocene", "r");
			if(lyrics == NULL){
				printf("Could not open file.");
				exit(1);
			}
			while(1){
				ch = fgetc(lyrics);
				if(ch == EOF)
					break;
				else if(ch == '\n')
					printf("\n");
				else
					printf("%c", ch);
			}
			fclose(lyrics);
			break;
		case 3: lyrics = fopen("./lyricsFiles/burnTheWitch", "r");
			if(lyrics == NULL){
				printf("Could not open file.");
				exit(1);
			}
			while(1){
				ch = fgetc(lyrics);
				if(ch == EOF)
					break;
				else if(ch == '\n')
					printf("\n");
				else
					printf("%c", ch);
			}
			fclose(lyrics);
			break;		
	}
}
