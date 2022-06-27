//OPIS: dereferenciranje
//RESULT: 5
int main() {
    int a;
    int b;
    int* x;
    a = 2;
    x= &a;
    a = 4;
    b = *x + 1;
    return b;
}
