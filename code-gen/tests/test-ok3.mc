//OPIS: num_exp sa dereferenciranjem
//RESULT: 3
int main() {
    int a;
    int b;
    int* x;
    a = 2;
    x= &a;
    b = *x + 1;
    return b;
}
