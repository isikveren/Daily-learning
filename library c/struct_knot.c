#include<stdio.h>
#include<stdlib.h>
struct knot{
    int num;
    struct knot *next;
};
int main(){
    struct knot *head;
    head = (struct knot *)malloc(sizeof(struct knot));
    head->num = 100;

   printf("hello%d\n",head->num);
   free(head);
    return 0;
}