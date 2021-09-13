#include <stdio.h>
#include <windows.h>
#include <conio.h>

int g_GamePlay;

void intro();
void room();
void Blacksafe();	//1. 검은색 금고 
void whitesafe();	//2. 하얀색 금고
void Drawer();	//3. 서랍 
void Clock();	//4. 시계 
void Washroom(); //5. 화장실 
void door();	//6. 현관문 
void study();	//7. 서재 
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
		printf("1. 입장\n");
		printf("0. 종료\n");
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
				printf("입력 오류\n\n");
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
	printf("눈을 떠보니 영문 모를 방에서 깨어났다.\n");
	WaitForSeconds(1.5f);
	printf("어.... 여긴 어디지 아무 기억도 나지 않는다.\n");
	WaitForSeconds(1.5f);
	printf("술과 담배에 찌든 옷으로 부터 시큰한 냄새가 코를 찌르고\n");
	WaitForSeconds(3.5f);
	printf("몇분이 지나서야 정신이 조금 돌아왔다.\n\n");
	WaitForSeconds(1.5f);
	printf("주변을 둘러보자.\n\n");
	WaitForSeconds(1.5f);
	printf("창문이 없는 밀폐된 공간과 거실 한가운데 덩그러니 빛을 비추는 백열등이 있었다.\n");
	WaitForSeconds(1.5f);
	printf("심상치 않다 어서 탈출하자.\n\n");
	WaitForSeconds(1.5f);
	system("pause");
}

void room() {
	int count = 0; 
	int menu;
	
	while(g_GamePlay) {
		system("cls");	
		printf("[영문 모를 방]-[거실]\n\n");
		printf("꺼림칙한 방에서 탈출할 방법을 찾아보자.\n\n");
		printf("1. 출입문 2. 책상 3. 화장실\n");
		printf("4. 시계  5. 서재 6. 하얀색 금고 7. 검은색 금고\n"); 
		
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
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
	}
	
}

void door(){//1. 출입문 
	int menu;
	
	while(1) {
		system("cls");
		printf("[거실]-[철문]\n\n");
		printf("회색 철문이 잠겨 있다.\n\n");
		printf("1. 철문를 살펴본다\n");
		printf("2. 철문를 부순다\n");
		printf("0. 돌아가기\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("단단히 잠겨있다.\n");
				//현관 암호 escape 입력 후 탈출
				break;
			case 2:
				count++;
				printf("\n주먹을 내질렀다.\n");
				printf("쾅 시발!\n\n");
				printf("아무 키나 누르시오...\n\n");
				printf(">>> \n");
				getch();
				
				if (count == 18) 
				{
					printf("\n잠금장치가 망가졌습니다.\n");
					printf("끼익 탈출성공!!!!\n\n"); //히든 루트 
					g_GamePlay = 0;
				}	
				return; 
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
	
}

void Drawer(){//2. 서랍 
	int menu;
	
	while(1) {
		system("cls");
		printf("[거실]-[서랍]\n\n");
		printf("철제로된 책상이 놓여있다.\n\n");
		printf("1. 책상를 살펴본다.\n");
		printf("2. 책상를 부순다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n서랍이 잠겨있다.\n\n");
				//printf("\n서랍에서 블랙라이트 손전등을 획득\n\n"); //블랙 라이트 
				break;
			case 2:
				printf("\n발차기를 날렸다.\n");
				printf("아악!\n\n");
				system("pause");
				return;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
	
}

void Washroom(){//3. 화장실 
	int menu;
	
	while(1) {
		system("cls");
		printf("[거실]-[화장실]\n\n");
		printf("지극히 평범한 문이다.\n\n");
		printf("1. 화장실을 살펴본다.\n");
		printf("2. 화장실 거울을 살펴본다.\n");
		printf("3. 변기를 살펴본다.\n");
		printf("4. 욕조 물을 비운다.\n"); 
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n화장실이 잠겨있다.\n\n");
				break;
			case 2:
				printf("\n흐릿한 실루엣이 보인다.\n\n");
				//printf("\n화장실 거울의 숨겨진 검은색 금고의 암호 DOLOR 확인\n\n"); 
				//블랙라이트 손전등을 이용해야 함. 
				break;
			case 3:
				printf("\n변기 수조에서 지퍼팩에 들어있는 십자드라이버를 획득했다.\n\n");
				break;
			case 4:
				printf("\n욕조에 피처럼 보이는 액체가 가득차서 안이 보이지 않는다...\n");
				printf("\n화장실의 욕조를 채운 붉은색의 액체를 비우고 열쇠 획득\n\n"); //서랍 열쇠 
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
	
}

void Clock(){ //4. 시계 
	int menu;
	
	while(1) {
		system("cls");
		printf("[거실]-[시계]\n\n");
		printf("아날로그 시계이다.\n\n");
		printf("1. 시계를 살펴본다.\n");
		printf("2. 시계를 분해한다\n");
		printf("3. 시계를 부순다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n상하 반전된 시계가 오후 5시 20분을 가리키고 있다.\n\n");
				break;
			case 2:
				printf("\n드라이버가 있으면 분해할 수 있을 것같다.\n\n");
				//printf("\n시계를 분해하여 건전지 획득..\n\n");
				break;	
			case 3:
				printf("\n쨍그랑 시계가 부서졌다.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
	
}

void study(){ //5. 서재  
	int menu;
	while(1) {
		system("cls");
		printf("[거실]-[서재]\n\n");
		printf("곰팡이 냄새가 나는 낡은 서재이다.\n\n");
		printf("1. 서재를 살펴본다.\n");
		printf("2. 책을 찟는다.\n");
		printf("3. 영문 모를 아스키 코드표를 살펴본다.\n"); 
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n서재에서 각 각 빨강색(1), 주황색(2), 노란색(3), 초록색(4),\n");
				printf("파란색(5), 남색(6), 보라색(7), 갈색(8), 검정색(9), 하얀색(0)으로 칠해진 책을 확인\n\n");
				//서재의 책들을 확인 후 수신기의 암호를 확인 조합하여 101 115 99 97 112 101 코드 획득 
				break;
			case 2:
				printf("\n이런 책이 훼손됐군..\n\n");
				break;
			case 3:
				printf("\n이진법|팔진법|십진법|십육진법|모양|85진법(아스키85)\n");
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
				//escape라는 현관암호 획득
				break;
			case 0:
				printf("0");
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}

void whitesafe()//6. 하얀색 금고 
{
	int menu;
	
	while(1) {
		system("cls");
		printf("[거실]-[하얀색 금고]\n\n");
		printf("단단해 보이는디지털 흰색 금고이다.\n\n");
		printf("1. 하얀색 금고를 연다..\n");
		printf("2. 하얀색 금고를 부순다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n비밀번호가 필요해 보일듯하다.\n\n");
				//printf("\n영문 모를 수신기 획득\n\n");
				//수신기 획득 
				break;
			case 2:
				printf("\n음 이건 좀...무리\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}

void Blacksafe()//7. 검은색 금고 
{
	int menu;
	
	while(1) {
		system("cls");
		printf("[거실]-[검은색 금고]\n\n");
		printf("단단해 보이는 검은색 금고이다.\n\n");
		printf("1. 검은색 금고를 연다.\n");
		printf("2. 검은색 금고를 부순다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n흠..열쇠가 필요해 보일듯하다.\n\n");
				//printf("검은색 금고를 열어 열쇠 획득\n\n"); 
				//서재열쇠 획득
				break;
			case 2:
				printf("\n나의 물리 데미지가 소용 없어 보이니 포기하자.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}
}

