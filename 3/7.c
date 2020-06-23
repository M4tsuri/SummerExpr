#include <stdio.h>
int main()
{
    int matrix[100][100];
    int m;
    int n;
    int i;
    int j;
    int startX;
    int startY;
    int endX;
    int endY;

    startX = 0;
    startY = 0;
    endX = m;
    endY = n;

    //��������m������n
    scanf("%d %d", &m, &n);
    // ����һ��m*n�ľ���
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // �ж�ѭ��Ȧ��������
    while (startX * 2 < m && startY * 2 < n)
    {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        // �����һ��
        if (startY < endY)
        {
            for (j = startY; j <= endY; j++)
            {
                printf("%d", matrix[startX][j]);
                if (j <= endY)
                {
                    printf(" ");
                }
            }
        }

        //����������������ڶ���
        if (startX < endX)
        {
            for (j = startX + 1; j <= endX; j++)
            {
                printf("%d", matrix[j][endY]);
                if (j <= endY)
                {
                    printf(" ");
                }
            }
        }
        //���������������������
        if (endX > startX && startY < endY)
        {
            for (j = endY - 1; j >= startY; j--)
            {
                printf("%d", matrix[endX][j]);
                if (j >= startY)
                {
                    printf(" ");
                }
            }
        }
        //������������������Ĳ�
        if (endX - 1 > startX && startY < endY)
        {
            for (i = endX - 1; i >= startX + 1; i--)
            {
                printf("%d ", matrix[i][startX]);
                if (i >= startX + 1)
                {
                    printf(" ");
                }
            }
        }
        startX++;
        startY++;
    }

    return 0;
}