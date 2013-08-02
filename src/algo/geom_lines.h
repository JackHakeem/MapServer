#ifndef _GEOM_ALGORITHM_LINES_H
#define _GEOM_ALGORITHM_LINES_H

#include "../base.h"

typedef swFloatPoint swga_Coordinate;

typedef std::deque<swga_Coordinate> swga_line;		//���߶�����





//typedef std::vector< swga_lineseg*> swga_multiline;		//���߶�����



//��ʾ����ĳһͷ�Ķ˵�
// struct swga_di{
// 	swga_multiline* lines;		
// 	swUInt32	p;	//�������
// };


//swga_Coordinate* swga_peerEndPoint(swga_endPoint* a);			//���ߵ�����һͷ�˵�

swga_line* swga_createReverseLine(swga_line*);	//�����߶�


float swga_length(swga_line*);			//�������߳���

//������ml��ʼoffstart��λ�ÿ�ʼ����len�����˶����߶�
//����������ĳһ�߶��У��������µ�����Ŷ
swga_line* swga_extraLines(swga_line* lines,float offstart,float len);  


float swga_distance(swga_Coordinate* a,swga_Coordinate* b);	//��������������

float swga_radian(swga_Coordinate* a,swga_Coordinate* b);		//���㻡��
float swga_angle(swga_Coordinate* a, swga_Coordinate* b);		//�����a��b�ĽǶ�
//���� a-b�߶����뿪a����dist�������,��������������������߶ε���λ�˵�ĽǶ�
swga_Coordinate	swga_interceptPoint(swga_Coordinate	* a,swga_Coordinate* b,float dist); 

//��Ѱ���߶�lineƫ��distλ�õĵ㣬����������������߶ε���β������
swga_Coordinate	swga_interceptPoint(swga_line* line,float dist,OUT swga_Coordinate* start,OUT swga_Coordinate* end); 



#endif
