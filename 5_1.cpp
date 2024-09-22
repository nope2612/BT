#include<iostream>
#include<cmath>
using namespace std;
//5.1a tinh tong
int array_sum (int a[], int n){
    int sum = 0;
    for (int i=0; i < n; i++){
        sum += a[i];
    }
    return sum;
}
//5.1b tim trung binh cong
int find_average (int a[], int n, int result ) {
    int average = 0;
    for (int i=0; i < n; i++) {
        average = result/n;
    }
    return average;
}
// sap xep
void arrange (int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j]  <  a[j+1] )
                swap(a[j], a[j+1]);

        }
    }
}
//in ham da xep
void printArray (int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
// dua ra gia tri thu k
int printValue (int a[], int n, int k) {
    return a[k-1];
}
    

int main() {
    int n, a[n];
    int k; 
    cout << "nhap n: "; cin >> n;
   
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> a[i];
    }

    int result = array_sum(a,n);
    cout << "tong = " << result << endl;

    int avrg = find_average(a,n,result);
    cout << "trung binh cong = " << avrg << endl;

    arrange(a,n);
    printArray(a,n);
    cout << " " << endl;
    cout << "nhap k: ";
    cin >> k;
    cout << "gia tri lon thu " << k << " la: "; 
    int value = printValue(a,n,k);
    cout << value;

    return 0;
}