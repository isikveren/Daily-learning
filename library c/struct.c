#include<stdio.h>
struct score{
    float english;
    float math;
    float computer;
};
struct student{
    unsigned num;
    char name[10];
    char sex;
    int age;
    struct score class;  //1.结构体声明不影响内存的分配，结构体类型的定义才会。2.先声明的结构体可作为其他结构体的成员。
};
struct date{
    int year;
    int mounth;
    int day;
};
int main(){
    printf("hello world\n");
    struct student s = {12,"zhangsan",'1',22,{90,100,100}};
    printf("%f\n",s.class.english);   //int d char c char[] s float f
    struct date person[2] = {{1999,2,1},{2000,2,2}};
    printf("%d\n",person[1].year);
    struct date *p = person;
    p++;
    printf("%d",p->year);
    return 0;
}