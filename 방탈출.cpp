#include <stdio.h>
#include <windows.h>
#include <conio.h>

int g_GamePlay;

void intro();
void room();
void Blacksafe();	//1. ������ �ݰ� 
void whitesafe();	//2. �Ͼ�� �ݰ�
void Drawer();	//3. ���� 
void Clock();	//4. �ð� 
void Washroom(); //5. ȭ��� 
void door();	//6. ������ 
void study();	//7. ���� 
void door_password();

int isFindDriver = 0;
int isFindbattery = 0;
int isFindDeskKey = 0;
int isFindFlashlight = 0;
int isFindstudyKey = 0;

int count, sum;

int main() {
	g_GamePlay = 1;
	int menu;
	
	while(g_GamePlay) {
		printf("ROOM ESCAPE\n\n");
		printf("1. ����\n");
		printf("0. ����\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("�Է� ����\n\n");
				break;
		}
	}
}

void WaitForSeconds(float _seconds)
{
	Sleep(_seconds * 1000);
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("���� ������ ���� �� �濡�� �����.\n");
	WaitForSeconds(1.5f);
	printf("��.... ���� ����� �ƹ� ��ﵵ ���� �ʴ´�.\n");
	WaitForSeconds(1.5f);
	printf("���� ��迡 ��� ������ ���� ��ū�� ������ �ڸ� ���\n");
	WaitForSeconds(3.5f);
	printf("����� �������� ������ ���� ���ƿԴ�.\n\n");
	WaitForSeconds(1.5f);
	printf("�ֺ��� �ѷ�����.\n\n");
	WaitForSeconds(1.5f);
	printf("â���� ���� ����� ������ �Ž� �Ѱ�� ���׷��� ���� ���ߴ� �鿭���� �־���.\n");
	WaitForSeconds(1.5f);
	printf("�ɻ�ġ �ʴ� � Ż������.\n\n");
	WaitForSeconds(1.5f);
	system("pause");
}

void room() {
	int count = 0; 
	int menu;
	
	while(g_GamePlay) {
		system("cls");	
		printf("[���� �� ��]-[�Ž�]\n\n");
		printf("����Ģ�� �濡�� Ż���� ����� ã�ƺ���.\n\n");
		printf("1. ���Թ� 2. å�� 3. ȭ���\n");
		printf("4. �ð�  5. ���� 6. �Ͼ�� �ݰ� 7. ������ �ݰ�\n"); 
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				door();
				break;
			case 2:
				Drawer();
				break;
			case 3:
				Washroom();
				break;
			case 4:
				Clock();	
				break;
			case 5:
				study();
				break;
			case 6:
				whitesafe();
				break;
			case 7:
				Blacksafe();
				break; 
			default:
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
	}
	
}

void door(){//1. ���Թ� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[�Ž�]-[ö��]\n\n");
		printf("ȸ�� ö���� ��� �ִ�.\n\n");
		printf("1. ö���� ���캻��\n");
		printf("2. ö���� �μ���\n");
		printf("0. ���ư���\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("�ܴ��� ����ִ�.\n");
				//���� ��ȣ escape �Է� �� Ż��
				break;
			case 2:
				count++;
				printf("\n�ָ��� ��������.\n");
				printf("�� �ù�!\n\n");
				printf("�ƹ� Ű�� �����ÿ�...\n\n");
				printf(">>> \n");
				getch();
				
				if (count == 18) 
				{
					printf("\n�����ġ�� ���������ϴ�.\n");
					printf("���� Ż�⼺��!!!!\n\n"); //���� ��Ʈ 
					g_GamePlay = 0;
				}	
				return; 
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
	
}

void Drawer(){//2. ���� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[�Ž�]-[����]\n\n");
		printf("ö���ε� å���� �����ִ�.\n\n");
		printf("1. å�� ���캻��.\n");
		printf("2. å�� �μ���\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n������ ����ִ�.\n\n");
				//printf("\n�������� ������Ʈ �������� ȹ��\n\n"); //�� ����Ʈ 
				break;
			case 2:
				printf("\n�����⸦ ���ȴ�.\n");
				printf("�ƾ�!\n\n");
				system("pause");
				return;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
	
}

void Washroom(){//3. ȭ��� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[�Ž�]-[ȭ���]\n\n");
		printf("������ ����� ���̴�.\n\n");
		printf("1. ȭ����� ���캻��.\n");
		printf("2. ȭ��� �ſ��� ���캻��.\n");
		printf("3. ���⸦ ���캻��.\n");
		printf("4. ���� ���� ����.\n"); 
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\nȭ����� ����ִ�.\n\n");
				break;
			case 2:
				printf("\n�帴�� �Ƿ翧�� ���δ�.\n\n");
				//printf("\nȭ��� �ſ��� ������ ������ �ݰ��� ��ȣ DOLOR Ȯ��\n\n"); 
				//������Ʈ �������� �̿��ؾ� ��. 
				break;
			case 3:
				printf("\n���� �������� �����ѿ� ����ִ� ���ڵ���̹��� ȹ���ߴ�.\n\n");
				break;
			case 4:
				printf("\n������ ��ó�� ���̴� ��ü�� �������� ���� ������ �ʴ´�...\n");
				printf("\nȭ����� ������ ä�� �������� ��ü�� ���� ���� ȹ��\n\n"); //���� ���� 
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
	
}

void Clock(){ //4. �ð� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[�Ž�]-[�ð�]\n\n");
		printf("�Ƴ��α� �ð��̴�.\n\n");
		printf("1. �ð踦 ���캻��.\n");
		printf("2. �ð踦 �����Ѵ�\n");
		printf("3. �ð踦 �μ���.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n���� ������ �ð谡 ���� 5�� 20���� ����Ű�� �ִ�.\n\n");
				break;
			case 2:
				printf("\n����̹��� ������ ������ �� ���� �Ͱ���.\n\n");
				//printf("\n�ð踦 �����Ͽ� ������ ȹ��..\n\n");
				break;	
			case 3:
				printf("\n¸�׶� �ð谡 �μ�����.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
	
}

void study(){ //5. ����  
	int menu;
	while(1) {
		system("cls");
		printf("[�Ž�]-[����]\n\n");
		printf("������ ������ ���� ���� �����̴�.\n\n");
		printf("1. ���縦 ���캻��.\n");
		printf("2. å�� ���´�.\n");
		printf("3. ���� �� �ƽ�Ű �ڵ�ǥ�� ���캻��.\n"); 
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n���翡�� �� �� ������(1), ��Ȳ��(2), �����(3), �ʷϻ�(4),\n");
				printf("�Ķ���(5), ����(6), �����(7), ����(8), ������(9), �Ͼ��(0)���� ĥ���� å�� Ȯ��\n\n");
				//������ å���� Ȯ�� �� ���ű��� ��ȣ�� Ȯ�� �����Ͽ� 101 115 99 97 112 101 �ڵ� ȹ�� 
				break;
			case 2:
				printf("\n�̷� å�� �ѼյƱ�..\n\n");
				break;
			case 3:
				printf("\n������|������|������|��������|���|85����(�ƽ�Ű85)\n");
				printf("\n1100001	141	97	61	a	64\n");
				printf("\n1100010	142	98	62	b	65\n");
				printf("\n1100011	143	99	63	c	66\n");
				printf("\n1100100	144	100	64	d	67\n");
				printf("\n1100101	145	101	65	e	68\n");
				printf("\n1100110	146	102	66	f	69\n");
				printf("\n1100111	147	103	67	g	70\n");
				printf("\n1101000	150	104	68	h	71\n");
				printf("\n1101001	151	105	69	i	72\n");
				printf("\n1101010	152	106	6A	j	73\n");
				printf("\n1101011	153	107	6B	k	74\n");
				printf("\n101100	154	108	6C	l	75\n");
				printf("\n101101	155	109	6D	m	76\n");
				printf("\n1101110	156	110	6E	n	77\n");
				printf("\n1101111	157	111	6F	o	78\n");
				printf("\n1110000	160	112	70	p	79\n");
				printf("\n1110001	161	113	71	q	80\n");
				printf("\n1110010	162	114	72	r	81\n");
				printf("\n1110011	163	115	73	s	82\n");
				printf("\n1110100	164	116	74	t	83\n");	
				printf("\n1110101	165	117	75	u	84\n");
				printf("\n1110110	166	118	76	v\n");
				printf("\n1110111	167	119	77	w\n");
				printf("\n1111000	170	120	78	x\n");
				printf("\n1111001	171	121	79	y\n");
				printf("\n1111010	172	122	7A	z\n\n");
				//escape��� ������ȣ ȹ��
				break;
			case 0:
				printf("0");
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
}

void whitesafe()//6. �Ͼ�� �ݰ� 
{
	int menu;
	
	while(1) {
		system("cls");
		printf("[�Ž�]-[�Ͼ�� �ݰ�]\n\n");
		printf("�ܴ��� ���̴µ����� ��� �ݰ��̴�.\n\n");
		printf("1. �Ͼ�� �ݰ� ����..\n");
		printf("2. �Ͼ�� �ݰ� �μ���.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n��й�ȣ�� �ʿ��� ���ϵ��ϴ�.\n\n");
				//printf("\n���� �� ���ű� ȹ��\n\n");
				//���ű� ȹ�� 
				break;
			case 2:
				printf("\n�� �̰� ��...����\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
}

void Blacksafe()//7. ������ �ݰ� 
{
	int menu;
	
	while(1) {
		system("cls");
		printf("[�Ž�]-[������ �ݰ�]\n\n");
		printf("�ܴ��� ���̴� ������ �ݰ��̴�.\n\n");
		printf("1. ������ �ݰ� ����.\n");
		printf("2. ������ �ݰ� �μ���.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n��..���谡 �ʿ��� ���ϵ��ϴ�.\n\n");
				//printf("������ �ݰ� ���� ���� ȹ��\n\n"); 
				//���翭�� ȹ��
				break;
			case 2:
				printf("\n���� ���� �������� �ҿ� ���� ���̴� ��������.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}
}

