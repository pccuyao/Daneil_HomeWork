#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    // ����
    char input;
    cout << "�п�J�r��" << endl;
    cin >> input;
    int input_get = input;
    cout << "��J���r���O:'" << input << "�A'ASCII�X��:'" <<  input_get << "'�C" << endl;
    input_get = input_get - 97;

    // �j��
    cout << "�}�l" << endl;
    for(int i = 0;i <= input_get ;i++){
        for(int x = 0;x <= i;x++){
            cout << char(i + 97);
        }
        cout << endl;
    }
    return 0;
}
