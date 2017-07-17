#include<iostream>
using namespace std;
struct Student{
	int number;
	char name[10];
	int grade;
};
int main(){
	struct Student student[10];
//	int sum=0;
	int a[10];//存入每个学生的数学成绩
	
	for(int i=0;i<10;i++){
		student[i].number=i+1;
		cout<<"输入第"<<i+1<<"个学生的姓名:";
		cin>>student[i].name;
		cout<<"输入第"<<i+1<<"个学生的数学成绩:";
		cin>>student[i].grade;
	//	sum+=student[i].grade;
		a[i]=student[i].grade;
		cout<<endl;
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++)
			if(a[j]<a[i]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}//保证a[i]是当前最小的
		for(int k=0;k<10;k++){
			if(student[k].grade==a[i]){//如果学生的数学成绩等于当前最小的数学成绩  就输出这个学生的信息
				cout<<student[k].number<<"\t"<<student[k].name<<"\t"<<student[k].grade<<endl;
				break;
			}
			continue;
		}
	}
	return 0;
}
