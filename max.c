#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int main(int argc, char *argv[]) {
    int f,s,t; //scanf("%d%d%d",&f,&s,&t);
    int f = atoi(argv[1]);
    int s = atoi(argv[2]);
    int t = atoi(argv[3]); // finds maximum of 3 numbers
    if (f < s && f >= t) // fix: f >= s
        printf("%d",f);
    if (f > s && s <= t) // fix: f < s and s >= t
        printf("%d",s);
    if (f > t && s > t) // fix: f < t and s < t
        printf("%d",t);
    return 0;
}