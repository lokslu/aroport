#pragma once
#include <string>

using namespace std;
class plane
{
private:
	int nomber_reis; //����� �����
		string	type_plenet,//��� �����
		point_plein,//����� �����������
		time_vilet,//��� �������
		time_finish; // ��� ��������
public:
	plane();//����������� 
	float plane_time;//��� �������

	void vvod_nap_klav(string*type_mas_planet);//���������� � ���������� ����;
	void save_text();//�������� �������� � ���������;
	
	void read_text();//���������� ���������� � ����� �� ���� ����� � ������ ��������;	
	void search_for_dest();//����� ����� � ���������� ����� ������� � �������� ��������;
	void vivod_cmd();//���� � ��������� ���� ������� ����� � �������� �������� �� ���������� ���� �������.

	~plane();//����������
	
};
