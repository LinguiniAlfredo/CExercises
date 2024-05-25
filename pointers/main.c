#include <stdio.h>

#define SIZE 10;

void swapValue(int*, int*);
void swapAddress(int*, int*);
int getInt(int*);

int main()
{
    int x = 1, y = 2, z[10];
    int *px = &x;
    int *py = &y;

    printf("x: %d y: %d\n", x, y);
    swapValue(px, py);
    printf("x: %d y: %d\n", x, y);
    swapAddress(px, py);
    printf("x: %d y: %d\n", x, y);

    int array[SIZE];
    for (int n = 0; n < SIZE && getInt(&array[n]) != EOF; n++);
}

void swapValue(int *px, int *py)
{
    int temp = *px;

    *px = *py;
    *py = temp;
}

void swapAddress(int *px, int *py) 
{
    int *ptemp = px;

    px = py;
    py = ptemp;
}

int binarySearch(int x, int arr[], int n) 
{
    int low, mid, high;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < arr[mid])
            mid = high - 1;
        else if (x > arr[mid])
            low = mid + 1;
        else 
            return mid;
    }
    return -1;
}


int getInt(int *p) 
{

}
