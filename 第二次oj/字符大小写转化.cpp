#include<iostream>
using namespace std;
int main(){
    char a,b,c,d;
    cin >> a >> b >> c >> d;
    // ����ASCII�����ת����'a' ��ASCII��97�� 'A'��ASCII��65.
    a = a - 'a' + 'A';
    b = b - 'a' + 'A';
    c = c - 'A' + 'a';
    d = d - 'A' + 'a';
    // �������
    cout << d << c << b << a << endl;

}
