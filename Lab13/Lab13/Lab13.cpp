#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
	setlocale(0,"RUS");
    int k, m, n;
    double** a, ** b, ** c;//��� ������������ ���������
    cout << "������� ���������� ����� ������� �: ";
        cin >> k;
    cout << "������� ���������� �������� ������� � � ����� �: ";
        cin >> m;
    cout << "������� ���������� �������� ������� B: ";
        cin >> n;
    a = new double* [k];
    cout << "�������� ������� A:" << endl;
        for (int i = 0; i < k; i++){
            a[i] = new double[m];
                for (int j = 0; j < m; j++){
                    a[i][j]=rand()%10;
                    cout<<a[i][j]<<"\t";
                }
            cout<<endl;
        }
    b = new double* [m];
    cout << "�������� ������� B:" << endl;
        for (int i = 0; i < m; i++){
            b[i] = new double[n];
                for (int j = 0; j < n; j++){
                    b[i][j]=rand()%10;
                    cout<<b[i][j]<<"\t";
                }
            cout<<endl;
        }
    
  // ��������� ������
    c = new double* [k];
        for (int i = 0; i < k; i++){
            c[i] = new double[n];
                for (int j = 0; j < n; j++){
                    c[i][j] = 0;
                    for (int k = 0; k < m; k++){
                        c[i][j] += a[i][k] * b[k][j];}
                }
        }
  // ����� ������� ������������
    cout << "������� ������������" << endl;
    for (int i = 0; i < k; i++){
        for (int j = 0; j < n; j++){
            cout << c[i][j] << "\t";}
    cout << endl;
  }
	system("pause");
}

