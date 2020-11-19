#include <stdio.h>
#define MAX_LEN 1000
int len_str(char s[]);
int min_number(char s[]);
void remove_digit(char s[],int n);
int min_digit(char s[]);
int main()
{
    char a[MAX_LEN];
    int i,c ;
     i = 0 ;
    while((c=getchar())!=EOF&&c!='\n'){
        a[i] = c - '0' ;
        i++;
    }
    a[i] = '\0';
    printf("%d",min_number(a));
    return 0;
}
int len_str(char s[]){
    int i;
    for(i=0;(i<MAX_LEN)&&(s[i]!='\0');i++){
        ;
    }
    return i;
}
int min_digit(char s[]){
    int i,n;
    i = len_str(s);
    int min;
    min = s[0];
    for(n=0;n<i;++n){
        if(s[n]<min){
            min = s[n];
        }
    }
    return min ;
}
void remove_digit(char s[],int n){
    int i,j;
    i = len_str(s);
    for(j = 0;j<i;j++){
        if(s[j]==n){
            s[j] = 10;
            break ;
        }
    }
}
int min_number(char s[]){
    int i,j,min,m;
    m = 0 ;
    i = len_str(s);
    for(j=0;j<i;j++){
        min = min_digit(s);
        remove_digit(s,min);
        m = 10*m + min ;
    }
  return m ;
}
