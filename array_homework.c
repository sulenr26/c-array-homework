
#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int arr[SIZE];
int count = 0;

void addElement(int element) {
    if (count < SIZE) {
        arr[count] = element;
        count++;
        printf("Eleman eklendi: %d\n", element);
    } else {
        printf("Dizi dolu, eleman eklenemiyor!\n");
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
            printf("Eleman silindi: %d\n", element);
            break;
        }
    }
    if (!found) {
        printf("Eleman bulunamadi: %d\n", element);
    }
}

void searchElement(int element) {
    for (int i = 0; i < count; i++) {
        if (arr[i] == element) {
            printf("Eleman bulundu! Index: %d\n", i);
            return;
        }
    }
    printf("Eleman bulunamadi: %d\n", element);
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
