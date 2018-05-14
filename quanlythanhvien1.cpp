#include <iostream>
using namespace std;

typedef struct {
	int ID;
	int age;
	char name[255];
	int group_id;
} Member;                                                                                // tao kieu du lieu moi

Member members[200];

int number_of_members;

void insert_member();
int main() {
	insert_member(members);
	return 0;
	
}

void insert_member(Member members[200]){                   // phai truyen tham so vào hàm 
	number_of_members= sizeof(&members)/sizeof(Member);    // có & do danh sach member luôn thay doi, de co dinh so phan tu tai thoi diem do
	for(int i=number_of_members;i<200;i++){                // tìm so phan tu co san trong do truoc khi them vao
		cout <<"Nhap thong tin thanh vien" << endl;
		cout <<"Nhap ID" << endl;
		cin >>members[i].ID ;
		cout <<"Nhap age" << endl;
		cin >> members[i].age ;
		cout <<"Nhap name" << endl;
		cin >> members[i].name ;
		cout << "Nhap group_id" << endl;
		cin >> members[i].group_id ;
	}
}

void del_member(int members[200], int &n, int x){
	int vtri=timx(member, n, x);    // tim x trong mang
	if(vtri==-1){
		cout<< "Khong tim thay x" << endl;
	}
	else{
		for (int i=vtri; i<=n-2; i++)
		a[i]= a[i+1];  // dich cac phan tu sang trai 1 vtri
		n--;
		
	}
	
	
	
	
	
	
	
	
	
}



