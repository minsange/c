#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;
	
	printf("put the left top: " );
	scanf("%d %d", &r.p1.x, &r.p2.y);
	
	printf("put the right bottom: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x - r.p1.x);
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;
	peri = 2 * w + 2 * h;
	
	printf("square area = %d, square round = %d\n", area, peri);
	return 0;
}
