#include <iostream>
#define MAX 100

// Definição da estrutura da fila
struct Queue {
    int items[MAX];
    int front;
    int rear;
    int size;

    Queue() {
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Fila cheia\n";
            return;
        }
        rear = (rear + 1) % MAX;
        items[rear] = value;
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Fila vazia\n";
            return -1;
        }
        int value = items[front];
        front = (front + 1) % MAX;
        size--;
        return value;
    }

    int peekFront() {
        if (isEmpty()) {
            std::cout << "Fila vazia\n";
            return -1;
        }
        return items[front];
    }
};


struct Stack {
    Queue q1, q2;

    void push(int value) {
        q1.enqueue(value);
    }

    int pop() {
        if (q1.isEmpty()) {
            std::cout << "Pilha vazia\n";
            return -1;
        }

        // Move elementos de q1 para q2, deixando apenas o último em q1
        while (q1.size != 1) {
            q2.enqueue(q1.dequeue());
        }

        // Último elemento de q1, que é o topo da pilha
        int poppedValue = q1.dequeue();

        // Trocar as filas
        Queue temp = q1;
        q1 = q2;
        q2 = temp;

        return poppedValue;
    }

    bool isEmpty() {
        return q1.isEmpty();
    }

    int top() {
        if (q1.isEmpty()) {
            std::cout << "Pilha vazia\n";
            return -1;
        }

        // Move elementos de q1 para q2, deixando apenas o último em q1
        while (q1.size != 1) {
            q2.enqueue(q1.dequeue());
        }

        // Último elemento de q1, que é o topo da pilha
        int topValue = q1.peekFront();

        // Enfileirar o elemento de volta em q2
        q2.enqueue(q1.dequeue());

        // Trocar as filas
        Queue temp = q1;
        q1 = q2;
        q2 = temp;

        return topValue;
    }
};


int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Topo da pilha: " << s.top() << "\n"; // Deve imprimir 30

    std::cout << "Elemento desempilhado: " << s.pop() << "\n"; // Deve imprimir 30
    std::cout << "Topo da pilha: " << s.top() << "\n"; // Deve imprimir 20

    s.push(40);
    std::cout << "Topo da pilha: " << s.top() << "\n"; // Deve imprimir 40

    return 0;
}
