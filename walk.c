#include <stdio.h>
#include <string.h>
#include "walk.h"

int createWalk(Walk *w) {
    printf("��å�� ��¥��? (��/��)\n");
    getchar();
    scanf("%[^\n]s", w->day);
    printf("��å�� ��Ҵ�?\n");
    getchar();
    scanf("%[^\n]s", w->place);
    printf("��å�� �ð���? (��)\n");
    scanf("%d", &w->time);
    printf("������? (1:���� 2:�帲 3:�� 4:��)\n");
    scanf("%d", &w->weather);
    
    return 1;
}

void readWalk(Walk w) {
    printf("\n��¥ - %s\n��� - %s\n��å�ð� - %d��\n���� - ", w.day, w.place, w.time);
    if(w.weather == 1) printf("����");
    else if(w.weather == 2) printf("�帲");
    else if(w.weather == 3) printf("��");
    else if(w.weather == 4) printf("��");
    printf("\n");
}

int updateWalk(Walk *w) {
    printf("��å�� ��¥��? (��/��)\n");
    getchar();
    scanf("%[^\n]s", w->day);
    printf("��å�� ��Ҵ�?\n");
    getchar();
    scanf("%[^\n]s", w->place);
    printf("��å�� �ð���? (��)\n");
    scanf("%d", &w->time);
    printf("������? (1:���� 2:�帲 3:�� 4:��)\n");
    scanf("%d", &w->weather);
    
    return 1;
}
