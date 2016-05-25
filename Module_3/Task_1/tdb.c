#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define nmsz 20 //размер массива для храниния имени контакта
#define tlfsz 12 //размер массива для хранения номера телефона

typedef struct number{ //тип данных для каждого номера
    char name[nmsz];
    char tel[tlfsz];
    struct number *next;
    struct number *prev;
}phone;

phone *start;//указатель на первый номер
phone *last;//указатель на последний номер

//  Прототипы функций:
phone *find(char *);//поиск имени в базе(prototype)
void display(void); //вывод базы на экран (prototype)
void insert(void);  //добавление номера в базу (prototype)
void search(void);  //поиск номера в базе (prototype)
void delete(phone **,phone **); //удаление номера из базы (prototype)
void sort(phone *,phone **,phone **);//сортировка книги в алфавитном порядке(prototype)
void sgets(char *,char *,int);// процедура считывания строки (prototype)
void save(void);// сохранение базы в файл (prototype)
void load(void);// загрузка базы из файла (prototype)
int inp(void);
void dis(phone *info);//вывод на экран

int main(void){
	start=last=NULL;
		for(;;){
			
			switch(inp()){
				case 0: exit(0); //выход из программы
					break;
				case 1: load(); //считывание базы из файла
					break;
				case 2: save(); //сохранение базы в файл
					break;
				case 3: insert(); //добавлеение контакта в базу
					break;
				case 4: delete(&start,&last); //удаление контакта из базы
					break;
				case 5: search(); //поиск контакта в базе
					break;
				case 6: display(); //вывод базы на экран
					break;
				default:
					printf("Command not found.\n");
			}
		}
	return 0;
}

int inp(void){
    int a;
    char s[50];
    printf("\n----------------  Menu Selection  ----------------\n");
            printf("1 - Reading phone book from a file\n");
            printf("2 - Saving phone book to file\n");
            printf("3 - Add new number in phone book\n");
            printf("4 - Delete some number from phone book\n");
            printf("5 - Search some number in phone book\n");
            printf("6 - Withdrawal of the phone book on the screen\n");
            printf("0 - Quit from the program\n");
            printf("--------------------------------------------------\n");
            printf("Your choice: ");
            do{
            fgets(s, sizeof(s), stdin);
            a=atoi(s);
            }while(a<0);
    return a;
}

void dis(phone *info)/*функция display выполняет вывод на экран*/
{
    printf("%s\t", info->name);
    printf("%s\n", info->tel);
    }

phone *find(char *name){ //поиск имени контакта в базе
    phone *info;
    info=start;
    while(info) {
        if(!strcmp(name, info->name)) return info;
        info=info->next;
    }
    return NULL;
}
void sort(phone *i, phone **start, phone **last){ //сортировка книги в алфавитном порядке(realization)
    phone *old, *p;
    if(*last==NULL) {
        i->next=NULL;
        i->prev=NULL;
        *last=i;
        *start=i;
        return;
    }
    p=*start;
    old=NULL;
    while(p){
        if(strcmp(p->name, i->name)<0) {
            old=p;
		p=p->next;
		}
		else{
			if(p->prev){
            	p->prev->next=i;
				i->next=p;
				i->prev=p->prev;
				p->prev=i;
            }
            i->next=p;
            i->prev=NULL;
            p->prev=i;
            *start=i;
        }
    }
    old->next=i;
    i->next=NULL;
    i->prev=old;
    *last=i;
}

void sgets(char *instruction, char *s, int len){ //ввод строки с клавиатуры ограниченной длины
    char a[300];
    	printf("%s\n", instruction);
        fgets(a, 299, stdin);
        if(strlen(a)>len+1)
        	printf("Error! Memory is empty!\n");
    a[strlen(a)-1]='\0';
    strcpy(s, a);
}

void insert(void){
	phone *info;
	   	info=(phone *)malloc(sizeof(phone));
            sgets("Please input name of contact: ", info->name, nmsz);
            sgets("Please input telephone number of contact: ", info->tel, tlfsz);
            sort(info, &start, &last);
}

void delete(phone **start, phone **last){
    phone *info;
    char s[80];
    sgets("Please input name of contact to delete: ", s, nmsz);
    info=find(s);
    if(info) {
        if(*start==info) {
            *start=info->next;
            if(*start) (*start)->prev=NULL;
            else *last=NULL;
        }
        else {
            info->prev->next=info->next;
            if(info!=*last)
                info->next->prev=info->prev;
            else
				*last=info->prev;
		}
		free(info);
	}  
}

void display(void){
	phone *info;
    info=start;
    while(info){
		dis(info);
		info=info->next;
    printf("\n\n");
	}
}

void search(void){
    char sname[20];
    phone *info;
    printf("Please input name of contact which you want to search: \n");
    scanf("%s", sname);
    info=find(sname);
    if(!info) printf("Contact with this name not found\n");
    else{
		printf("%s ",info->name);
		printf("%s\n",info->tel);
    }
}

void load(void){
	phone *info;
    FILE *base;
    base=fopen("tdb.bs", "rb");
    if(!base) {
        printf("File with telephone book not found\n");
        exit (1);
    }
    while(start) {/*освобождение памяти, если в ней уже есть список*/
        info=start->next;
        free(start);
        start=info;
    }
    start=last=NULL;
    while(!feof(base)) {
        info =(phone *)malloc( sizeof(phone));
        if(1 !=fread(info, sizeof(phone), 1, base)) break;
        sort(info, &start, &last);
    }
    fclose(base);
}

void save(void)/*сохранение в файле*/
{
   	phone *info;
    FILE *base;
    base=fopen("tdb.bs", "wb");
    if(!base) {
        printf("File with telephone book not found\n");
        exit (1);
    }
    printf("Saved");
    info=start;
    while(info) {
        fwrite(info, sizeof(phone), 1, base);
        info=info->next;
    }
    fclose(base);
}