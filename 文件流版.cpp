#include<iostream>
#include<fstream>
using namespace std;
void scandata()//���Ӻ��� 
{
	ofstream fout;//����ofstream 
	fout.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt",ios::out|ios::app);//���ļ���ʹ�ļ�ָ�봦���ļ������ 
	if(fout.is_open()==false)
	{
		cout<<"��d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt�ļ�ʧ��"<<endl;
		return; 
	}
	system("cls");
	string id,name,sex,birth,college,Class,phone;
	cout<<"������Ҫ����ѧ������Ϣ"<<endl;
	cout<<"ѧ�ţ�";
	cin>>id;
	fout<<id<<" ";
	cout<<endl<<"������";
	cin>>name;
	fout<<name<<" ";
	cout<<endl<<"�Ա�";
	cin>>sex;
	fout<<sex<<" ";
	cout<<endl<<"���գ�";
	cin>>birth;
	fout<<birth<<" ";
	cout<<endl<<"ѧԺ���ƣ�";
	cin>>college;
	fout<<college<<" ";
	cout<<endl<<"�༶��";
	cin>>Class;
	fout<<Class<<" ";
	cout<<endl<<"�绰���룺";
	cin>>phone;
	fout<<phone<<endl;
	fout.close() ;//�ر��ļ� 
}
void scan()//д���ļ� 
{
	ofstream fout;//����ofstream 
	fout.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt",ios::out|ios::app);//���ļ���ʹ�ļ�ָ�봦���ļ������ 
	if(fout.is_open()==false)
	{
		cout<<"��d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt�ļ�ʧ��"<<endl;
		return; 
	}
	system("cls");
	string id,name,sex,birth,college,Class,phone;
	int n,i=0;
	cout<<"��������Ҫ�����ѧ������"<<endl;
	cin>>n;
	while(i<n)
	{
		cout<<"������Ҫ����ѧ������Ϣ"<<endl;
		cout<<"ѧ�ţ�";
		cin>>id;
		fout<<id<<" ";
		cout<<endl<<"������";
		cin>>name;
		fout<<name<<" ";
		cout<<endl<<"�Ա�";
		cin>>sex;
		fout<<sex<<" ";
		cout<<endl<<"���գ�";
		cin>>birth;
		fout<<birth<<" ";
		cout<<endl<<"ѧԺ���ƣ�";
		cin>>college;
		fout<<college<<" ";
		cout<<endl<<"�༶��";
		cin>>Class;
		fout<<Class<<" ";
		cout<<endl<<"�绰���룺";
		cin>>phone;
		fout<<phone<<endl;
		i++;
	}
	
	fout.close() ;//�ر��ļ� 
}
void Print_Printf()
{
	printf("|ѧ��\t\t|����\t|�Ա�\t|��������\t|ѧԺ\t\t\t|�༶\t\t|�绰\t\t|\n");
}
void modify()//�޸�ѧ����Ϣ 
{
	system("cls");
	string str,str1;
	cout<<"������Ҫ�༭��ѧ�����ֻ�ѧ�ţ�"<<endl;
	cin>>str;
	ifstream fin;
	ofstream fout;
	string  id,name,sex,birth,college,Class,phone;
	fin.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt", ios::binary | ios::out | ios::in);//��Դ�ļ� 
	fout.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\tmp.txt", ios::binary | ios::out);//���н��ļ� �������������� 
	if(fout.is_open()==false||fin.is_open()==false)
	{
		cout<<"��d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt�ļ�ʧ��"<<endl;
		return; 
	}
	while(fin>>id&&fin>>name&&fin>>sex&&fin>>birth&&fin>>college&&fin>>Class&&fin>>phone)//��ȡ��Ϣ 
	{
		if(id==str||name==str)
		{
			Print_Printf();
			cout<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<endl;
			cout<<"ѧ�ţ�";
			cin>>id;
			cout<<endl<<"������";
			cin>>name;
			cout<<endl<<"�Ա�";
			cin>>sex;
			cout<<endl<<"���գ�";
			cin>>birth;
			cout<<endl<<"ѧԺ���ƣ�";
			cin>>college;
			cout<<endl<<"�༶��";
			cin>>Class;
			cout<<endl<<"�绰���룺";
			cin>>phone;
		}
		fout << id << " " << name << " " << sex << " " << birth << " " << college << " " << Class << " " << phone << endl;//���޸Ĺ������Ϣ�����н��ļ� 
	}
	fin.close();
	fout.close();
	ofstream of;
	ifstream If;
	of.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt",ios::binary | ios::out);//��Դ�ļ��������������� 
	If.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\tmp.txt",ios::binary|ios::out|ios::in);
	if(of.is_open()==false||If.is_open()==false)
	{
		cout<<"��d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt�ļ�ʧ��"<<endl;
		return; 
	}
	while(If>>id>>name>>sex>>birth>>college>>Class>>phone)
	{
		of<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<endl;//���н��ļ������ݴ���Դ�ļ� 
	}
	If.close();
	of.close();
}
void Search()//������ķ�ʽ���� 
{
	ifstream fin;//����һ��ifstream 
	string str;//�����ַ����������Ĳ��� 
	string id,name,sex,birth,college,Class,phone;
	cin>>str;//����������ҵı��� 
	fin.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt",ios::in);
	if(fin.is_open()==false)
	{
		cout<<"��d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt�ļ�ʧ��"<<endl;
		return; 
	}
	int count=0;//ͳ������ 
	Print_Printf();
	while(fin>>id&&fin>>name&&fin>>sex&&fin>>birth&&fin>>college&&fin>>Class&&fin>>phone)
	{
		if(id==str||name==str||sex==str||college==str||Class==str)//��������ҵ����ļ����Ӧ 
		{
			count++;//������һ 
			cout<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<" "<<endl;//��� 
		}
	}
	fin.close();//�ر��ļ� 
	if(count==0)//δ�ҵ� 
	cout<<"���޴���"<<endl; 
	else
	cout<<"��"<<count<<"λѧ��"<<endl; 
}
void putfile()//�ļ�����ȫ����� 
{
	system("cls");
	ifstream fin;
	string str;
	fin.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt",ios::in);
	if(fin.is_open()==false)
	{
		cout<<"��d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt�ļ�ʧ��"<<endl;
		return; 
	}
	Print_Printf();
	while(getline(fin,str))
	{
		cout<<str<<endl;
	}
	fin.close();
}
void dedata()//ɾ�� 
{
	system("cls");
	string str;
	cout<<"������Ҫɾ����ѧ�����ֻ�ѧ�ţ�"<<endl;
	cin>>str;
	ifstream fin;
	ofstream fout;
	string id,name,sex,birth,college,Class,phone;
	fin.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt", ios::binary | ios::out | ios::in);//��Դ�ļ� 
	fout.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\tmp.txt", ios::binary | ios::out);//���н��ļ� �������������� 
	if(fout.is_open()==false||fin.is_open()==false)
	{
		cout<<"��d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt�ļ�ʧ��"<<endl;
		return; 
	}
	while(fin>>id&&fin>>name&&fin>>sex&&fin>>birth&&fin>>college&&fin>>Class&&fin>>phone)//��ȡ��Ϣ 
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
	of.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt",ios::binary | ios::out);//��Դ�ļ��������������� 
	If.open("d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\tmp.txt",ios::binary|ios::out|ios::in);
	if(of.is_open()==false||If.is_open()==false)
	{
		cout<<"��d:\\��Ŀ�����ҵ\\��Ŀ�ļ��������ļ�\\ѧ����Ϣ.txt�ļ�ʧ��"<<endl;
		return; 
	}
	while(If>>id>>name>>sex>>birth>>college>>Class>>phone)
	{
		of<<id<<" "<<name<<" "<<sex<<" "<<birth<<" "<<college<<" "<<Class<<" "<<phone<<endl;//���н��ļ������ݴ���Դ�ļ� 
	}
	If.close();
	of.close();
}
void Menu()
{
	cout<<"************************************"<<endl;
	cout<<"     ѧ���ɼ�����ϵͳ"<<endl;
	cout<<"     1������¼ѧ����Ϣ"<<endl;
	cout<<"     2��������ѧ����Ϣ"<<endl;
	cout<<"     3����ɾ��ѧ����Ϣ"<<endl;
	cout<<"     4�����޸�ѧ����Ϣ"<<endl;
	cout<<"     5������ѯѧ����Ϣ"<<endl;
	cout<<"     6�������ѧ����Ϣ"<<endl;
	cout<<"     7����ͳ�Ƹ���ѧ����Ϣ"<<endl;
	cout<<"     0�����˳�ѧ����Ϣ����ϵͳ"<<endl;
	cout<<"************************************"<<endl;
	cout<<"��ѡ����Ҫʵ�ֵĹ���(0-7)��"<<endl;
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
				cout<<"��������Ҫ����ѧ����ѧ�ţ��������Ա�ѧԺ���༶֮�е�����һ��"<<endl;
			    Search();
				break;
			case '6':putfile();break;
			case '7':
				system("cls"); 
				cout<<"��ѡ����Ҫͳ�Ƶİ༶"<<endl;
				Search();
				break;
			case '0':break;
			default:cout<<"�����������������"<<endl;break;
		}
		if(ch1=='0')
		{
			cout<<"�Ѿ��˳�ϵͳ"<<endl;
			break;
		}
		
	}
}
