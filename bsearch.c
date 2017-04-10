#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 10
#define true 1

typedef struct {
    double x;
    double y;
    double z;
} vector;

typedef struct {
    vector vec;
    double length;
} ext_vector;

int main() {

}

int compare(const void *first, const void *second) {
    ext_vector* first_vec = (ext_vector *) first;
    ext_vector* second_vec = (ext_vector *) second;

    if()
}

void calc_length(ext_vector *vec1) {
    vec1-> = sqrt(pow(vec1->vec.x, 2) + pow(vec
    ->vec.y, 2) + pow(vec1->vec.z, 2));
}
