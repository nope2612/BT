#include<iostream>
#include<cstring>
using namespace std;

// 8.a- tim tu ben trai va phai
void find_l_Word (char s[]) {
    string l_word;
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            l_word += s[i];
            if (s[i+1] == ' ' ) {
                break;
            }
        }
    }
    cout << "tu ben trai: " << l_word << endl;
}
void find_r_word (char s[]) {
    int index_last_space;// vi tri dau cach cuoi cung
    int cdc = strlen(s); // chieu dai chuoi
    for (int i = cdc-1; i >= 0; i--) { // vong lap chay tu phai sang trai
        if (s[i] == ' ') {
            index_last_space = i;
            break;
        }
    }
    for (int i = index_last_space; i < cdc; i++){
        cout <<s[i];
    }
}
//8.b deo biet lam

//8.c- xep ky tu theo chiee tang (theo ma ascii)
void arrange (char s[]) {
    int cdc = strlen(s);
    for (int i = 0; i < cdc - 1; i++) {
        for (int j = 0; j < cdc - i - 1; j++) {
            if (s[j] != ' ' && s[j+1] != ' ' && s[j]  >  s[j+1] ) // bo qua khoang trang va so sanh
                swap(s[j], s[j+1]);

        }
    }
    for (int i = 0; i < cdc; i++) {
        cout << s[i];
    }
}
//8.d- tim so lan suat hien 
void C_appear (char s[]) { //c_appear = count appear = dem so lan xuat hien
    int cdc = strlen(s);
    int count[256] = {0};
    
    for (int i=0; i<cdc; i++){
        if (s[i] != ' ') { // bo qua khoang trang
            count[s[i]]++;
        }
    }
    for (int i=0; i < 256; i++) {
        if (count[i] != 0) {
            cout << (char)i << " xuat hien " << count[i] << " lan\n";
        }
    }
}

int main() {
    
    int size = 1000;
    char s[size];
    cout << "nhap chuoi : " << endl;
    cin.getline(s, size);

    find_l_Word(s);
    cout << "tu ben phai la:";
    find_r_word(s); 
    cout << endl;

    cout << "ki tu theo chieu tang: " << endl;
    arrange(s);
    cout << endl;

    C_appear(s);
    cout << endl;

    return 0;
}
