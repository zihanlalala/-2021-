#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    // ��������ķ�������if , else if ,else ������ͬ�ȼ��������
    if(a >=90){
        cout << "A";
    }else if(a >= 80){
        cout << "B";
    }else if(a >= 70){
        cout << "C";
    }else if(a >= 60){
        cout << "D";
    }else {
        cout<<"E";
    }
    return 0;
}
