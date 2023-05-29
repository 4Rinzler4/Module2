#include <stdio.h>
//функція для введення елементів масиву
void inputArray(int arr[], int n){
    printf("Введіть елементи масиву:\n");
    for(int i = 0; i < n; i++){
        printf("Елемент %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}
//функція для виведення елементів масиву
void printArray(int arr[], int n){
    printf("Елементи масиву: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//функція для підрахунку кількості від'ємних елементів масиву
int countNegativeElements(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            count++;
        }
    }
    return count;
}
//функція для обчислення розміру масиву
int getArraySize(){
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    return n;
}
int main(){
    int size_a = getArraySize();
    int a[50];//виставляємо максимальний розмір масиву 50
    inputArray(a, size_a);
    int size_b = getArraySize();
    int b[50];//виставляємо максимальний розмір масиву
    inputArray(b, size_b);
    int count_a = countNegativeElements(a, size_a);
    int count_b = countNegativeElements(b, size_b);
    printf("Кількість від'ємних елементів в масиві a: %d\n", count_a);
    printf("Кількість від'ємних елементів в масиві b: %d\n", count_b);
    if (count_a == 0 && count_b == 0){
        printf("Масиви немають від'ємних елементів.\n");
    } else if (count_a > count_b){
        printf("Масив a має більше від'ємних елементів.\n");
    } else if (count_b > count_a){
        printf("Масив b має більше від'ємних елементів.\n");
    } else {
        printf("Масиви мають одинакову кількість від'ємних елементів.\n");
    }
    return 0;
}