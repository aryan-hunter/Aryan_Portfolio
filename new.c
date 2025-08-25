#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef enum { false, true } boolean;

int top = -1;

void push(int A[], int item);
void pop(int A[]);
void display(int A[]);
boolean isfull(int A[]);
boolean isempty(int A[]);

void main() {
    int A[max], ch, item;
   

    do {
        printf("\n1: Push\n2: Pop\n3: Display\n4: Is Full\n5: Is Empty\n6: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &item);
                push(A, item);
                break;

            case 2:
                pop(A);
                break;

            case 3:
                display(A);
                break;

            case 4:
                if (isfull(A))
                    printf("Stack is full\n");
                else
                    printf("Stack is not full\n");
                break;

            case 5:
                if (isempty(A))
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
                break;

            case 6:
                exit(0);
        }
    } while (ch != 6);
}

void push(int A[], int item) {
    if (top == max - 1)
        printf("Stack is full\n");
    else {
        top++;
        A[top] = item;
    }
}

void pop(int A[]) {
    if (top == -1)
        printf("Stack is empty\n");
    else {
        printf("Popped element: %d\n", A[top]);
        top--;
    }
}

void display(int A[]) {
    int i;
    if (top == -1)
        printf("Stack is empty\n");
    else {
        printf("\nStack is:\n");
        for (i = 0; i <= top; i++)
            printf("%d\t", A[i]);
        printf("\n");
    }
}
boolean isfull(int A[]) {
    return (top == max - 1);
}

boolean isempty(int A[]) {
    return (top == -1);
}