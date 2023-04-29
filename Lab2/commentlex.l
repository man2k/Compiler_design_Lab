%{
  #include<stdio.h>
  int c =0;  
%}

%%
[/]{1}[*]{1}[a-zA-Z0-9\/ ]*[*]{1}[/]{1} {printf("Multi Line comment");}
[/]{1}[/]{1}[a-zA-Z0-9\/ ]* {printf("Single Line Comment");}

%%

int main(){
    yylex();
    return 0;
}
int yywrap(){}