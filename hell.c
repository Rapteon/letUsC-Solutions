/*Program is supposed to print HELL in the form of ASCII Art consisting of radiation symbols and cross-skulls, but instead produces a hellish error.  :/ */

#include<stdio.h>

#define X \xE2\x98\xA0; //Prints radioactive symbol
#define O \xE2\x98\xA2; //Prints cross-skull

int main(){
	
	
	while(getchar()!=3){
		printf("%c%c%c%c    %c%c%c%c	%c%c%c%c%c%c%c%c    %c%c		%c%c\n", X, X, X, X, X, X, X, X, O, O, O, O, O, O, O, O, X, X, O, O);
		printf("%c%c%c%c    %c%c%c%c	%c%c	    %c%c		%c%c%c\n", X, X, X, X, X, X, X, X, O, O, X, X, O, O, O);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c	%c%c%c%c%c%c	    %c%c		%c%c%c\n", X, X, X, X, X, X, X, X, X, X, X, X, O, O, O, O, O, O, X, X, O, O, O);
		printf("%c%c%c%c    %c%c%c%c	%c%c	    %c%c		%c%c%c\n", X,X, X, X, X, X, X, X, O, O, X, X, O, O, O);
		printf("%c%c%c%c    %c%c%c%c	%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c\n\n", X, X, X, X, X, X, X, X, O, O, O, O, O, O, O, ,X, X, X, X, X, X, X, X, O, O, O, O, O, O, O, O, O, O);
	}
}
