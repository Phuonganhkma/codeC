// nhap va in danh scahs cac sach cos n phan tu nhap tu ban phim : ten sach ten tac gia nam xuat ban
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char tenSach[20];
    char tenTG[20];
    int namXB;
}S;
typedef struct Node
{
    S data;
    struct Node *next;
}node;
typedef struct
{
    node *head, *tail;
}List;
void init(List *l)
{
    l->head = l->tail = NULL;
}

void addTail(List *l, node *p)
{
    if(l->head==NULL){
        l->head=l->tail=p;
        p->next=NULL;
    }
    else {
        l->tail->next = p;
        l->tail=p;
        p->next = NULL;
    }
}

void nhapSach(S *s)
{
    fflush(stdin);
    printf("nhap ten sach: ");
    gets(s->tenSach);
    printf("nhap ten tac gia: ");
    gets(s->tenTG);
    printf("nhap nam xuat ban: ");
    scanf("%d", &s->namXB);
}
node* getNode(S *s)
{
    node *p=(node*)malloc(sizeof(node));
    if(p == NULL ) return NULL;
    p->data = *s;
    p->next = NULL;
    return p;
}
void nhapDSS(List *l, S *s)
{
    int n;
    printf("nhap so luong sach: ");
    scanf("%d", &n);
    node *p;
    init(l);
    for(int i=0; i<n; i++){
        printf("sach %d\n", i+1);
        nhapSach(s);
        printf("\n");
        p = getNode(s);
        addTail(l,s);
    }
}
void xuat1Sach(S s)
{
    printf("\n %20s | %20s | %10d |", s.tenSach, s.tenTG, s.namXB);
}
void xuatDSS(List l)
{
    node *k;
    printf("\n %20s | %20s | %10s |", "ten sach", "ten tg", "namXB" );
    for(k=l.head; k != NULL; k=k->next){
        xuat1Sach(k->data);
    }
}
int main ()
{
    List l;
    S s;
    nhapDSS(&l,&s);
    xuatDSS(l);
//      xuat1Sach(s);
    return 0;
}
