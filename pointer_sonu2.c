//program 1..........

#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapArrays(int *a, int *b){
    int size = sizeof(a)/sizeof(int);
    for(int i=0; i<size; i++){
        swap(&a[i], &b[i]);
    }
}

int main(){
   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Values of x and y before swap....\n");
    printf("x = %d, y = %d\n",x,y);
    swap(&x, &y);
    printf("Values of x and y after swap....\n");
    printf("x = %d, y = %d\n", x, y);
    int a[20],b[20];
    for(int i=0; i<20; i++)
    scanf("%d",&a[i]);
    for(int i=0; i<20; i++)
    scanf("%d",&b[i]);
    printf("content of array a and b before swapping is...\n");
    printf("array a is.....\n");
    for(int i=0; i<20; i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("array b is.....\n") ;
    for (int i = 0; i < 20; i++)
        printf("%d ", b[i]);
    printf("\n");
    swapArrays(a,b);
    printf("content of array a and b after swapping is...\n");
    printf("array a is.....\n");
    for (int i = 0; i < 20; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("array b is.....\n");
    for (int i = 0; i < 20; i++)
        printf("%d ", b[i]);
    printf("\n");
}

//program 2.......

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int wordCount(char *m){
    int count=0;
    for(int i=0; m[i]!='\0'; i++){
        if(m[i]==' ' || (m[i]=='.' && m[i+1]==' ') || (m[i]=='?' && m[i+1]!='\0'))
        count++;
    }
    return count;

}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
    char message[200];
    scanf("%[^\n]", message);
    printf("number of words in the given sentences = %d", wordCount(message));
}

//program 3.......

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Vector{
    float x;
    float y;
    float z;
};
struct Vector vectorSum(struct Vector *v1, struct Vector *v2){
    struct Vector v;
    v.x = v1->x + v2->x;
    v.y = v1->y + v2->y;
    v.z = v1->z + v2->z;
    return v;
}

float magnitude(struct Vector *v){
    float mod = sqrt(v->x * v->x + v->y * v->y + v->z + v->z);
    return mod;
}

float cosine(struct Vector *v1, struct Vector *v2){
    float cos = (v1->x * v2->x + v1->y * v2->y + v1->z * v2->z) / (magnitude(v1) * magnitude(v2));
    return cos;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    struct Vector V1;
    scanf("%f%f%f", &V1.x, &V1.y, &V1.z);
    struct Vector V2;
    scanf("%f%f%f", &V2.x, &V2.y, &V2.z);
    struct Vector sum;
    sum = vectorSum(&V1, &V2);
    printf("The net vector we get is SUM = %f(i)+%f(j)+%f(k)\n", sum.x, sum.y, sum.z);
    printf("The magnitude of V1 is.....%f\n", magnitude(&V1));
    printf("The magnitude of V2 is.....%f\n", magnitude(&V2));
    printf("The magnitude of sum is.....%f\n", magnitude(&sum));
    printf("The cosine of angle between V1 and V2 is = %f\n", cosine(&V1, &V2));
}