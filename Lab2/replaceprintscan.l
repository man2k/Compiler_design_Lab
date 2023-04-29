%{
#include<stdio.h>
int pfc=0, sfc =0;
%}

%%
"printf" {fprintf(yyout, "writef"); pfc++;}
"scanf" {fprintf(yyout, "readf"); sfc++;}
%%

int main(int argc, char *argv[]){
    if(argc!=3){
        printf("Usage: ./a.exe input.txt output.txt\n");
        exit(0);
    }
    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2],"w");
    yylex();
    printf("\n THe no. of printf lines = %d \n",pfc);
    printf("\n THe no. of scanf lines = %d \n",sfc);
}
int yywrap(){
    return 1;
}