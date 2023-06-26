#include<iostream>
#include<fstream>
using namespace std;
void scandata()//增加函数 
{
	ofstream fout;//定义ofstream 
	fout.open("d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt",ios::out|ios::app);//打开文件并使文件指针处于文件的最后 
	if(fout.is_open()==false)
	{
		cout<<"打开d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt文件失败"<<endl;
		return; 
	}
	system("cls");
	string id,name,sex,birth,college,Class,phone;
	cout<<"请输入要增加学生的信息"<<endl;
	cout<<"学号：";
	cin>>id;
	fout<<id<<" ";
	cout<<endl<<"姓名：";
	cin>>name;
	fout<<name<<" ";
	cout<<endl<<"性别：";
	cin>>sex;
	fout<<sex<<" ";
	cout<<endl<<"生日：";
	cin>>birth;
	fout<<birth<<" ";
	cout<<endl<<"学院名称：";
	cin>>college;
	fout<<college<<" ";
	cout<<endl<<"班级：";
	cin>>Class;
	fout<<Class<<" ";
	cout<<endl<<"电话号码：";
	cin>>phone;
	fout<<phone<<endl;
	fout.close() ;//关闭文件 
}
void scan()//写入文件 
{
	ofstream fout;//定义ofstream 
	fout.open("d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt",ios::out|ios::app);//打开文件并使文件指针处于文件的最后 
	if(fout.is_open()==false)
	{
		cout<<"打开d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt文件失败"<<endl;
		return; 
	}
	system("cls");
	string id,name,sex,birth,college,Class,phone;
	int n,i=0;
	cout<<"请输入想要输入的学生人数"<<endl;
	cin>>n;
	while(i<n)
	{
		cout<<"请输入要增加学生的信息"<<endl;
		cout<<"学号：";
		cin>>id;
		fout<<id<<" ";
		cout<<endl<<"姓名：";
		cin>>name;
		fout<<name<<" ";
		cout<<endl<<"性别：";
		cin>>sex;
		fout<<sex<<" ";
		cout<<endl<<"生日：";
		cin>>birth;
		fout<<birth<<" ";
		cout<<endl<<"学院名称：";
		cin>>college;
		fout<<college<<" ";
		cout<<endl<<"班级：";
		cin>>Class;
		fout<<Class<<" ";
		cout<<endl<<"电话号码：";
		cin>>phone;
		fout<<phone<<endl;
		i++;
	}
	
	fout.close() ;//关闭文件 
}
void Print_Printf()
{
	printf("|学号\t\t|姓名\t|性别\t|出生日期\t|学院\t\t\t|班级\t\t|电话\t\t|\n");
}
void modify()//修改学生信息 
{
	system("cls");
	string str,str1;
	cout<<"请输入要编辑的学生名字或学号："<<endl;
	cin>>str;
	ifstream fin;
	ofstream fout;
	string  id,name,sex,birth,college,Class,phone;
	fin.open("d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt", ios::binary | ios::out | ios::in);//打开源文件 
	fout.open("d:\\项目设计作业\\项目文件及数据文件\\tmp.txt", ios::binary | ios::out);//打开中介文件 并清空里面的内容 
	if(fout.is_open()==false||fin.is_open()==false)
	{
		cout<<"打开d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt文件失败"<<endl;
		return; 
	}
	while(fin>>id&&fin>>name&&fin>>sex&&fin>>birth&&fin>>college&&fin>>Class&&fin>>phone)//提取信息 
	{
		if(id==str||name==str)
		{
			Print_Printf();
			cout<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<endl;
			cout<<"学号：";
			cin>>id;
			cout<<endl<<"姓名：";
			cin>>name;
			cout<<endl<<"性别：";
			cin>>sex;
			cout<<endl<<"生日：";
			cin>>birth;
			cout<<endl<<"学院名称：";
			cin>>college;
			cout<<endl<<"班级：";
			cin>>Class;
			cout<<endl<<"电话号码：";
			cin>>phone;
		}
		fout << id << " " << name << " " << sex << " " << birth << " " << college << " " << Class << " " << phone << endl;//将修改过后的信息传进中介文件 
	}
	fin.close();
	fout.close();
	ofstream of;
	ifstream If;
	of.open("d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt",ios::binary | ios::out);//打开源文件并清空里面的数据 
	If.open("d:\\项目设计作业\\项目文件及数据文件\\tmp.txt",ios::binary|ios::out|ios::in);
	if(of.is_open()==false||If.is_open()==false)
	{
		cout<<"打开d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt文件失败"<<endl;
		return; 
	}
	while(If>>id>>name>>sex>>birth>>college>>Class>>phone)
	{
		of<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<endl;//将中介文件的内容传进源文件 
	}
	If.close();
	of.close();
}
void Search()//按输入的方式查找 
{
	ifstream fin;//定义一个ifstream 
	string str;//定义字符串方便后面的查找 
	string id,name,sex,birth,college,Class,phone;
	cin>>str;//输入我想查找的变量 
	fin.open("d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt",ios::in);
	if(fin.is_open()==false)
	{
		cout<<"打开d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt文件失败"<<endl;
		return; 
	}
	int count=0;//统计人数 
	Print_Printf();
	while(fin>>id&&fin>>name&&fin>>sex&&fin>>birth&&fin>>college&&fin>>Class&&fin>>phone)
	{
		if(id==str||name==str||sex==str||college==str||Class==str)//当我想查找的与文件相对应 
		{
			count++;//人数加一 
			cout<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<" "<<endl;//输出 
		}
	}
	fin.close();//关闭文件 
	if(count==0)//未找到 
	cout<<"查无此人"<<endl; 
	else
	cout<<"共"<<count<<"位学生"<<endl; 
}
void putfile()//文件内容全部输出 
{
	system("cls");
	ifstream fin;
	string str;
	fin.open("d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt",ios::in);
	if(fin.is_open()==false)
	{
		cout<<"打开d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt文件失败"<<endl;
		return; 
	}
	Print_Printf();
	while(getline(fin,str))
	{
		cout<<str<<endl;
	}
	fin.close();
}
void dedata()//删除 
{
	system("cls");
	string str;
	cout<<"请输入要删除的学生名字或学号："<<endl;
	cin>>str;
	ifstream fin;
	ofstream fout;
	string id,name,sex,birth,college,Class,phone;
	fin.open("d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt", ios::binary | ios::out | ios::in);//打开源文件 
	fout.open("d:\\项目设计作业\\项目文件及数据文件\\tmp.txt", ios::binary | ios::out);//打开中介文件 并清空里面的内容 
	if(fout.is_open()==false||fin.is_open()==false)
	{
		cout<<"打开d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt文件失败"<<endl;
		return; 
	}
	while(fin>>id&&fin>>name&&fin>>sex&&fin>>birth&&fin>>college&&fin>>Class&&fin>>phone)//提取信息 
	{
		if(id==str||name==str)
		{
			continue;
		} 
		fout<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<" "<<endl;
	}
	fin.close();
	fout.close();
	ofstream of;
	ifstream If;
	of.open("d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt",ios::binary | ios::out);//打开源文件并清空里面的数据 
	If.open("d:\\项目设计作业\\项目文件及数据文件\\tmp.txt",ios::binary|ios::out|ios::in);
	if(of.is_open()==false||If.is_open()==false)
	{
		cout<<"打开d:\\项目设计作业\\项目文件及数据文件\\学生信息.txt文件失败"<<endl;
		return; 
	}
	while(If>>id>>name>>sex>>birth>>college>>Class>>phone)
	{
		of<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<endl;//将中介文件的内容传进源文件 
	}
	If.close();
	of.close();
}
void Menu()
{
	cout<<"************************************"<<endl;
	cout<<"     学生成绩管理系统"<<endl;
	cout<<"     1——记录学生信息"<<endl;
	cout<<"     2——增加学生信息"<<endl;
	cout<<"     3——删除学生信息"<<endl;
	cout<<"     4——修改学生信息"<<endl;
	cout<<"     5——查询学生信息"<<endl;
	cout<<"     6——输出学生信息"<<endl;
	cout<<"     7——统计各班学生信息"<<endl;
	cout<<"     0——退出学生信息管理系统"<<endl;
	cout<<"************************************"<<endl;
	cout<<"请选择你要实现的功能(0-7)："<<endl;
}
int main()
{
	char ch1;
	while(1)
	{
		Menu();
		cin>>ch1;
		switch(ch1)
		{
			case '1':scan();break;
			case '2':scandata();break;
			case '3':dedata();break;
			case '4':modify();break;
			case '5':
				system("cls");
				cout<<"请输入需要查找学生的学号，姓名，性别，学院，班级之中的任意一项"<<endl;
			    Search();
				break;
			case '6':putfile();break;
			case '7':
				system("cls"); 
				cout<<"请选择你要统计的班级"<<endl;
				Search();
				break;
			case '0':break;
			default:cout<<"输入错误，请重新输入"<<endl;break;
		}
		if(ch1=='0')
		{
			cout<<"已经退出系统"<<endl;
			break;
		}
		
	}
}
