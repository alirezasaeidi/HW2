#include <stdio.h>
#define MAX_LEN 1000
void change(char a[],int k);
void swap(char a[],int b,int c);
int len_str(char a[]);
int main()
{
    char a[MAX_LEN];
    int i,c,k;
    i =0 ;
    while((c = getchar())!=EOF&&c!='\n'){
        a[i] = c;
        i++;
    }
    a[i] = '\0';
    k = getchar();
    k = k -'0';
    change(a,k);
    printf("%s",a);
    return 0;
}
int len_str(char a[]){
    int i ;
    for(i=0;a[i]!='\0';i++)
        ;
    return i;
}
void swap(char a[],int b,int c){
    char d ;
    d = a[b];
    a[b] = a[c];
    a[c] = d;
}
void change(char a[],int k){
    int i ,j;
    j = len_str(a);
    for(i = 0;i<k;i++)
            swap(a,i,j-i-1);
}
