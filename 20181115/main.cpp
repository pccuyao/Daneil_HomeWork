#include <iostream>

using namespace std;

int main()
{
    int num,i,j,e;
    cout << "insert number 4" << endl;
    cin >> num;

    if(num==4)
    {
           for(j=1;j<=num;j++) //�D�j��
           {
               for(i=j;i<num;i++) //�s�y�Ů�
               {
                   cout<< " ";
               }
               for(e=j;e>0;e--) //�s�y�Ʀr
                {
                    cout << e ;
                }
                cout << endl;
          }
    }
    return 0;
}
