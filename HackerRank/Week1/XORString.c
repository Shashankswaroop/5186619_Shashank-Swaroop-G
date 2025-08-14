#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[10005], t[10005], res[10005];
   fgets(s,sizeof(s),stdin);
   fgets(t,sizeof(t),stdin);
    int len = strlen(s);
    for (int i=0; i<len;i++){
        if(s[i]==t[i])
        res[i]='0';
        else
         res[i]='1';
    }
    res[len]='\0';
    printf("%s",res);
    return 0;
}