#include <stdio.h>//���������� �������
#include<locale.h>
#include<math.h>
int main() {

    int x; //���������� ��������� ������
    int y;
    setlocale(LC_CTYPE, "ru");//���������� �������� �������� �������� ����//
    printf("����1�� ����� x:   \n");//��������� ������ �� �����//
    scanf("%d", &x);//�������� �������� ���� x//

    y = pow (x, 3) - 4 * pow (x,2) - 5 * x + 9 + cos (x) ; 
    printf("\tx \t y \n");//��������� ������ �� �����//
    printf("\t%d \t %d\n", x, y);//��������� ������ �� �����//


    return 0;//���1� 1� �������� //
}
