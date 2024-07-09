//Small Triangles,Large Triangles   
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct triangle
{
	int tr;
	int b;
	int c;
};

typedef struct triangle triangle;
struct Triangle {
    int tr, b, c;
};
int square(struct Triangle t) {
    int tr = t.tr, b = t.b, c = t.c;
    return (tr + b + c) * (tr + b - c) * (tr - b + c) * (-tr + b + c);
}
void sort_by_area(struct Triangle* tr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (square(tr[i]) > square(tr[j])) {
                struct Triangle temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
            }
        }
    }
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
