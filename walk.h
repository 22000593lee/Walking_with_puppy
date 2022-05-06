#ifndef _WALK_H
#define _WALK_H

#include <stdio.h>

typedef struct {
    char day[20]; // ��å�� ��¥
    char place[30]; // ��å���
    int time; // ��å�� �ð�
    int weather; // ����(1:���� 2:�帲 3:�� 4:��)
}Walk;

int selectMenu(); // �޴� ����
int createWalk(Walk *w); // ��å���� �߰�
void readWalk(Walk w); // �ϳ��� ���� ���
int updateWalk(Walk *w); // ��å���� ����
int deleteWalk(Walk *w); // ��å���� ����

#endif