#include <stdio.h>

int re(int n, int x);

int main() {
    int n, x = 0;
    scanf("%d", &n);
    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    re(n, x);
    printf("��� �亯�Ͽ���.");

    return 0;
}

int re(int n, int x) {
    if (n == x){
        for (int i = 0; i < x; i++)
            printf("____");
        printf("\"����Լ��� ������?\"\n");
        for (int i = 0; i < x; i++)
            printf("____");
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
        return 0;
    }
    for (int i = 0; i < x; i++)
        printf("____");
    printf("\"����Լ��� ������?\"\n");
    for (int i = 0; i < x; i++)
        printf("____");
    printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
    for (int i = 0; i < x; i++)
        printf("____");
    printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
    for (int i = 0; i < x; i++)
        printf("____");
    printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
    re(n, x + 1);
    for (int i = 0; i < x + 1; i++)
        printf("____");
    printf("��� �亯�Ͽ���.\n");
}