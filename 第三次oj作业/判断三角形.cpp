#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int d;
    cin >>a >>b >>c;

    // �����γ��������Ƕ̱�֮�ʹ��ڵ�����
    // ������ҵ������϶̵ı�

    // ��a �� b�У�ʹ a ��ɽ�Сֵ��b��ɽϴ�ֵ
    if(a > b){
        // ���� a �� b ��ֵ
        d = b;
        b = a;
        a = d;
    }
    // ��b��c�У� ʹ b ��ɽ�Сֵ��c��ɽϴ�ֵ
    if( b > c){
        // ���� c �� d ��ֵ
        d = c;
        c = b;
        b = d;
    }

    // ����a,b,c�Ĵ�С��ϵΪ a < b < c������̱�ֻ���Ƿ���ڵ�����
    if ( a + b > c){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}
