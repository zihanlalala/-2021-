#include <iostream>
using namespace std;

int main(){
    int m;
    int n;
    int t;
    int sum = 0;
    cin >> m >> n;
    // ����Ҫ������������ÿ������ֵ
    // ÿ�������������룬�ӵ��ܺ���Ͳ���ʹ�ã���˲���Ҫ���档
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            sum = sum + t;
        }
    }
    cout << sum << endl;
}
