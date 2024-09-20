#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;
    cout << "Введіть основу степеня і показник степеня: ";
    cin >> base >> exponent;
    cout << base << " в степені " << exponent << " = " << power(base, exponent) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int sumRange(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int a, b;
    cout << "Введіть два числа для визначення діапазону: ";
    cin >> a >> b;
    cout << "Сума чисел у діапазоні від " << a << " до " << b << " = " << sumRange(a, b) << endl;
    return 0;
}
#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    return sum == num;
}

void findPerfectNumbers(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            cout << i << " є досконалим числом." << endl;
        }
    }
}

int main() {
    int start, end;
    cout << "Введіть інтервал для пошуку досконалих чисел: ";
    cin >> start >> end;
    findPerfectNumbers(start, end);
    return 0;
}
#include <iostream>
using namespace std;

void displayCard(char rank, char suit) {
    cout << "Ваша карта: " << rank << " " << suit << endl;
}

int main() {
    char rank, suit;
    cout << "Введіть ранг карти (наприклад, A для туза): ";
    cin >> rank;
    cout << "Введіть масть карти (наприклад, S для пік): ";
    cin >> suit;
    displayCard(rank, suit);
    return 0;
}
#include <iostream>
using namespace std;

bool isLucky(int num) {
    int firstHalf = num / 1000;
    int secondHalf = num % 1000;
    int sum1 = 0, sum2 = 0;

    while (firstHalf > 0) {
        sum1 += firstHalf % 10;
        firstHalf /= 10;
    }
    while (secondHalf > 0) {
        sum2 += secondHalf % 10;
        secondHalf /= 10;
    }

    return sum1 == sum2;
}

int main() {
    int num;
    cout << "Введіть шестизначне число: ";
    cin >> num;
    if (isLucky(num)) {
        cout << num << " є щасливим числом." << endl;
    }
    else {
        cout << num << " не є щасливим числом." << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Введіть ключ для пошуку: ";
    cin >> key;

    int index = linearSearch(arr, size, key);
    if (index != -1) {
        cout << "Елемент знайдено на позиції: " << index << endl;
    }
    else {
        cout << "Елемент не знайдено." << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Введіть ключ для пошуку: ";
    cin >> key;

    int index = binarySearch(arr, size, key);
    if (index != -1) {
        cout << "Елемент знайдено на позиції: " << index << endl;
    }
    else {
        cout << "Елемент не знайдено." << endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;
    while (binary > 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int binary;
    cout << "Введіть двійкове число: ";
    cin >> binary;
    cout << "Десяткове значення: " << binaryToDecimal(binary) << endl;
    return 0;
}
