/*様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様
様様様様様様� Mouse.c 様様様様様様� */
typedef struct _MOUSE_STATE_ {
		 unsigned bottoms ;
		 unsigned  x ;
		 unsigned  y ;
		 } MOUSE_STATE ;

extern union REGS reg ;
extern struct SREGS segregs ;
extern int botm ;
extern char buf_mous[20];
extern char *bufptr;
extern char form[64];
extern MOUSE_STATE state ;

int Ms_init(int * nbottoms);                /* ┃�罔��├�罔� �謌� */
void Ms_on(void);                           /* →�鈑キ┘ �窶甌�� �謌� */
void Ms_off(void);                          /* �覈�鈑キ┘ �窶甌�� �謌� */
MOUSE_STATE *Ms_query(MOUSE_STATE *state ); /* ��爛ぅ�キ┘ 皀�竕�� ���爐┃�� �窶甌�� �謌� */
void Ms_setcr(int,int);            			/* 竅����→� �窶甌�� �謌� � ������竡 皰腦� */
int Ms_querp(MOUSE_STATE *state,int); 		/* ��爛ぅ�キ┘ 甌痰�鎰�� �謌� �爬 ����皋� �� ���※蓊 */
void Ms_Posishion ( void );
void Ms_rang ( int, int, int, int ); 		/* ������腑�┘ �ムガラキ�� �謌� �� 蹣���� */


