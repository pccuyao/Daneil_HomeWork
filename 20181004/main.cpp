#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    // ����
    char input; // �إߤ@�Ӧr�� input
    cout << "�п�J�r��" << endl;
    cin >> input; // Ū�����e
    int input_get = input; // �ഫ�r�ꬰ���
    cout << "��J���r���O:'" << input << "�A'�s�X��:'" <<  input_get << "'�C" << endl;
    input_get = input_get - 65; //��h���A����65�A�Y�O��L�ƽЦۦ���C


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
