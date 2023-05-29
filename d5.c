#include <stdio.h>//підключення бібліотеки
//функція для введення елементів масиву
void inputArray(int arr[], int n){
    printf("Ввеліть елементи масиву:\n");
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
//функція для обчислення суми елементів масиву
int calculateSum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
//функція для обчислення розміру масиву
int getArraySize(){
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    return n;
}
int main(){
    int n = getArraySize();
    int arr[50];//виставляєм макимальний розмір масиву 50
    inputArray(arr, n);
    printArray(arr, n);
    int sum = calculateSum(arr, n);
    printf("Сума елементів масиву: %d\n", sum);//виведення результату
    return 0;//кінець програми
}