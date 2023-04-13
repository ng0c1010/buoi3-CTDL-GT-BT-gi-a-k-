// bài 8  stack

#include <iostream>
using namespace std;

const int MAX_SIZE = 6; // kích thu?c c?a stack

int stack[MAX_SIZE]; // kh?i t?o stack b?ng m?ng
int top = -1; // kh?i t?o giá tr? top ban d?u

// hàm ki?m tra stack r?ng
bool kiemTraRong() {
    return (top == -1);
}

// hàm ki?m tra stack d?y
bool kiemTraDay() {
    return (top == MAX_SIZE - 1);
}

// hàm thêm ph?n t? vào stack
void them(int x) {
    if (kiemTraDay()) {
        cout << "Stack da day, khong the them phan tu.\n";
    } else {
        top++;
        stack[top] = x;
    }
}

// hàm l?y giá tr? top c?a stack
int layTop() {
    if (kiemTraRong()) {
        cout << "Stack rong, khong the lay gia tri top.\n";
        return -1;
    } else {
        return stack[top];
    }
}

// hàm l?y và xóa giá tr? top c?a stack
int layVaXoaTop() {
    if (kiemTraRong()) {
        cout << "Stack rong, khong the lay va xoa gia tri top.\n";
        return -1;
    } else {
        int x = stack[top];
        top--;
        return x;
    }
}

// hàm in các ph?n t? trong stack
void inStack() {
    cout << "Cac phan tu trong stack la:\n";
    while (!kiemTraRong()) {
        cout << layVaXoaTop() << " ";
    }
    cout << endl;
}

int main() {
    // nh?p vào stack 6 ph?n t?
    them(41);
    them(23);
    them(4);
    them(14);
    them(56);
    them(1);

    // xu?t giá tr? top ra kh?i stack
    cout << "Gia tri top cua stack la: " << layTop() << endl;

    // in các ph?n t? trong stack còn l?i
    inStack();

    return 0;
}

