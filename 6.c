#include <stdio.h>
#define MAX_LEN 1000
int same_string(char a[],char b[]);
int len_str(char a[]);
int main()
{
    char a[MAX_LEN];
    char b[MAX_LEN];
    int i ,j,c,k;
    c = k = 0;
    while((i =getchar())!=EOF){
        a[c] = i;
        c++;
    }
    while((j=getchar())!= EOF){
        b[k]= j;
        k++;
    }
    a[c] = '\0';
    b[k] = '\0';
    printf("%d",same_string(a,b));
    return 0;
}
int len_str(char a[]){
    int i ;
    for(i=0;a[i]!='\0';i++){
        ;
    }
    return i ;
}
int same_string(char a[],char b[]){
    int i,j,k;
    i = len_str(a);
    j = len_str(b);
    if(i!=j)
        return -1;
    for(k=0;k<i;k++){
        if(a[k]!=b[k])
            return -1;
    }
    return 0 ;
}
