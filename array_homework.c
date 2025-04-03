
#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int arr[SIZE];
int count = 0;

void addElement(int element) {
    if (count < SIZE) {
        arr[count] = element;
        count++;
        printf("Element added: %d\n", element);
    } else {
        printf("Array is full,cannot add element!\n");
    }
}

void removeElement(int element) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (arr[i] == element) {
            found = true;
            for (int j = i; j < count - 1; j++) {
                arr[j] = arr[j + 1];
            }
            count--;
            printf("Element remod: %d\n", element);
            break;
        }
    }
    if (!found) {
        printf("Element not found: %d\n", element);
    }
}

void searchElement(int element) {
    for (int i = 0; i < count; i++) {
        if (arr[i] == element) {
            printf("Element found at! Index: %d\n", i);
            return;
        }
    }
    printf("Element not founf: %d\n", element);
}

int main() {
    addElement(10);
    addElement(20);
    addElement(30);

    searchElement(20);
    searchElement(40);

    removeElement(20);
    removeElement(50);

    searchElement(20);

    return 0;
}
