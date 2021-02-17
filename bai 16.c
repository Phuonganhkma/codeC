/*Viết chƣơng trình tạo một danh sách liên kết thuận để ghi danh sách các
sinh viên có cấu trúc gồm các thành phần: Ho_ten, Tuoi, Diem TB.
- In danh sách ra màn hình theo dạng:
DANH SACH SINH VIEN
STT Ho ten Tuoi Diem TB
... ...
- Chèn thêm một sinh viên (có tên nhập vào từ bàn phím) vào sau một sinh
viên nào đó (có tên nhập vào từ bàn phím) rồi in danh sách theo dạng trên
- Xóa một sinh viên nào đó (có tên nhập từ bàn phím) ra khỏi danh sách rồi
in danh sách theo dạng trên.8*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    int  stt;
    char hoten[30];
    int tuoi;
    float diemtb;
}SV;
typedef struct Node
{
    SV data;
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
node* taonode(SV *sv)
{
    node *p;
    p=(node*)malloc(sizeof(node));
    if(p==NULL) return NULL;
    p->data = *sv;
    p->next =NULL;
    return p;

}

void themCuoi(List *l, node *p)
{

    if(l->head==NULL){
        l->head = l->tail = p;
        p->next = NULL;
    }
    else{
        l->tail->next = p;
        l->tail = p;
        p->next = NULL;
    }

}
void nhap1SV(SV *sv)
{

    printf("nhap stt: ");
    scanf("%d",&sv->stt);
    printf("nhap ho ten: ");
    fflush(stdin);
    gets(sv->hoten);
    printf("nhap tuoi: ");
    scanf("%d",&sv->tuoi);
    printf("nhap diem trung binh: ");
    scanf("%f", &sv->diemtb);
}
void nhapDSLK(List *l, SV *sv)
{
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d",&n);
    node *p;
    init(l);
    for(int i=0; i<n; i++){
        printf("sinh vien thu %d:\n ",i+1);
        nhap1SV(sv);
        printf("\n");
        p= taonode(sv);
        themCuoi(l,p);
    }
}

void xuat1sv(SV sv)
{
   printf("\n%5d|%20s|%10d|%7.1f|",sv.stt, sv.hoten, sv.tuoi, sv.diemtb);
}
void xuatDSSV(List l)
{
    node *k;
    printf("\n%5s|%20s|%10s|%7s|", "stt", "hoten", "tuoi", "diemtb");
    for(k=l.head; k!=NULL; k=k->next){
        xuat1sv(k->data);
    }
}
void chenSV(List l)
{
    char HT[30];
    printf("\nnhap ten can chen sau: ");
    fflush(stdin);
    gets(HT);
    node *p;
    SV sv;
    nhap1SV(&sv);
    p= taonode(&sv);
    node *k=l.head;
    while(k != NULL && strcmp(HT,k->data.hoten)!=0){
        k=k->next;
    }
    p->next = k->next;
    k->next = p;
    xuatDSSV(l);
}
void xoaCoTenNHapTuBanPhim(List l)
{
    char HT[30];
    printf("\n nhap ten can xoa: ");
    fflush(stdin);
    gets(HT);
    node *k=l.head;
    node *p;
    while(k != NULL && strcmp(HT, k->data.hoten) != 0)
    {
        p=k;
        k= k->next;
    }
    if(k==NULL)
    {
    printf("khong tim thay ten can xoa");
    }
    else{
            if(l.head==k){
                k->next = l.head->next;
                l.head=k->next;
            }
            else{
    p->next = k->next;
    free(k);
            }
    xuatDSSV(l);
    }
}
 void hoanVi(SV *a, SV *b)
{
    SV tmp= *a;
    *a = *b;
    *b=tmp;
}
void sapXepGiamHT(List l)
{
    printf("\nsap xep ho ten giam dan: ");
    node *p, *k;
    for(p=l.head; p != NULL; p = p->next){
        for(k = p->next; k != NULL; k = k->next){
            if(strcmp(p->data.hoten, k->data.hoten) < 0){
                hoanVi(&p->data, &k->data);
            }
        }
    }
}
void sapXepTangHT(List l)
{
    printf("\nsap xep ho ten tang dan: ");
    node *p, *k;
    for(p=l.head; p != NULL; p = p->next){
        for(k = p->next; k != NULL; k = k->next){
            if(strcmp(p->data.hoten, k->data.hoten) > 0){
                hoanVi(&p->data, &k->data);
            }
        }
    }
}
void lietKeSinhVien(List l)
{
    printf("\n sing vien co diem tb>=7:\n");
    node *p;
    int dem=0;
    for(p=l.head; p!=NULL; p=p->next) {
        if(p->data.diemtb >= 7){
            xuat1sv(p->data);
        }
    }
}
void timKiemSV(List l)
{

    node *p;
    char chon[10];
    printf("\nnhap ten sinh vien can tim: ");
    fflush(stdin);
    gets(chon);
    for(p = l.head; p != NULL; p = p->next ){
        if(strcmp(p->data.hoten, chon) == 0) {
            printf("sinh vien can tim la: ");
            xuat1sv(p->data);
        }
    }
}

int main()
{
    List l;
    SV sv;
    nhapDSLK(&l, &sv);
    printf("\n............................................................................\n");
    xuatDSSV(l);
    printf("\n............................................................................\n");
    chenSV(l);
    printf("\n............................................................................\n");
    xoaCoTenNHapTuBanPhim(l);
    printf("\n............................................................................\n");
    sapXepGiamHT(l);
    xuatDSSV(l);
    printf("\n............................................................................\n");
    sapXepTangHT(l);
    xuatDSSV(l);
    printf("\n............................................................................\n");
    lietKeSinhVien(l);
    printf("\n............................................................................\n");
    timKiemSV(l);
    printf("\n............................................................................\n");

    return 0;
}

