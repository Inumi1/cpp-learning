#include<iostream>
#include<string>
using namespace std;

//学生类
class Student {
private:
	string name;
	string Id;
public:
	Student(string inputName, string inputId) {
		setName(inputName);
		setId(inputId);
		cout << "创造学生对象成功" << '\n';
	}
	void setName(string inputName) {
		if (inputName.size() > 10){
			cout << "名字太长" << '\n';
			return;
	    }
		name = inputName;
	}
	void setId(string inputId) {
		if (inputId.size() != 8) {
			cout << "学号必须为8位数" << '\n';
			return;
		}
		Id = inputId;
	}
	string getName()const { 
		return name;
	}
	string getId()const {
		return Id;
	}
};

int main() {
		// 1. 正常创建
		Student s1("李四", "25190218");

		// 2. 尝试搞事情（名字超长、学号不对）
		Student s2("一二三四五六七八九十十一", "123");

		// 3. 打印正常学生的信息
		cout << "s1 姓名: " << s1.getName() << ", 学号: " << s1.getId() << endl;

		return 0; 
}