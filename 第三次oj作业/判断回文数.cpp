#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    // ������������Ǽ�λ���ֱ���

    if(a >=1000){
        // ����Ϊ4λ��
        // ��λ�� a%10, ǧλ�� a/1000�� ʮλ�� a%100/10, ��λ��a/100%10
        if(a%10 == a/1000 && a%100/10 == a/100%10){
            cout << 1;
        }else{
            cout << 0;
        }
    }else if(a >= 100){
        // ����Ϊ3λ��
        // ��λ�� a%10�� ��λ��a/100
        if(a %10 == a/100){
            cout << 1;
        }else{
            cout << 0;
        }
    }else if(a >= 10){
        // ����Ϊ2λ��
        // ��λ�� a%10, ʮλ�� a/10
        if(a % 10 == a / 10){
            cout << 1;
        }else{
            cout << 0;
        }
    }else{
        // 1λ��һ���ǻ�����
        cout << 1;
    }


    return 0;
}
