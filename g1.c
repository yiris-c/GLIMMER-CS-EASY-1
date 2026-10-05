
#include <stdio.h>
#include <string.h>
struct student {
    char name[256];
    int score;

};

int czh(int x, int y, int z) {
    int p = (x + y + z) / 3;
    int f = ((p - x) * (p - x) + (p - y) * (p - y) + (p - z) * (p - z)) / 3;
    int zh = 3 * p - f / 3;
    return zh;
}
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sort(int* a, int* b, int* c) {
    if (*a < *b) {
        swap(a, b);
    }

    if (*a < *c) {
        swap(a, c);
    }

    if (*b < *c) {
        swap(b, c);
    }
}

void main() {

    int x1, x2, x3;
    int y1, y2, y3;
    int z1, z2, z3;
    int zh1, zh2, zh3;

    printf("请输入小明的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("请输入小强的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &y1, &y2, &y3);
    printf("请输入小林的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &z1, &z2, &z3);




    zh1 = czh(x1, x2, x3);
    zh2 = czh(y1, y2, y3);
    zh3 = czh(z1, z2, z3);
     
    struct student a[3];
    {
        strcpy(a[0].name, "小明");
        a[0].score = zh1;
        strcpy(a[1].name, "小强");
        a[1].score = zh2;
        strcpy(a[2].name, "小林");
        a[2].score = zh3;

    };

    sort(&zh1, &zh2, &zh3);



    printf("%s>%s>%s", a[0].name, a[1].name, a[2].name);


    return;
}