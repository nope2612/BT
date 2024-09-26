#include<iostream>
#include<string>
using namespace std;

void ChkiTu (char arr[]){
    for (int i=0; arr[i] != '\0'; i++) {
        if (arr[0] >= 'a' && arr[0] <= 'z' ) {
            arr[0] -= 32;
        }
    }
}

int main() {
  
    int size = 100;
    char arr[size];
    cout << "nhap chuoi tu: " << endl;
    cin.getline(arr, size);

    cout << "chuoi ki tu: ";    
    ChkiTu(arr);
    cout << arr;
 
    return 0;
}