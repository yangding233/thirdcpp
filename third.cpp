///////结构体struct////////////////////////////

// #include<iostream>
// using namespace std;
// #include<string>
// //1.创建学生数据类型
// struct Student
// {
//     //成员列表

//     //姓名
//     string name;

//     //年龄
//     int age;

//     //分数
//     int score;
// };

// int main()
// {
//     //2.通过学生类型创建具体学生
//     //2.1 struct Student s1
//     struct Student s1;//struct关键字可以省略
//     //给s1属性赋值，通过房网结构体变量中的属性
//     s1.name = "张三";//结构体变量利用操作符“.”来访问成员
//     s1.age = 18;
//     s1.score = 100;
//     cout << "name:" << s1.name << "age:" << s1.age << "score:" << s1.score<<endl;
//     //2.2struct Student s2 = {}
//     struct Student s2 = {"李四",19,80 };
//     cout << "name:" << s2.name << "age:" << s2.age << "score:" << s2.score<<endl;
//     system("pause");
//     return 0;

// }

/////////////////////结构体数组///////////////////////
// #include<iostream>
// using namespace std;
// #include<string>
// //1.定义结构体
// struct Student
// {
//     string name;

//     int age;

//     int score;
// };

// int main()
// {
//     //2.创建结构体数组
//     struct Student stuarray[3] =
//     {
//         {"张三",18,100},
//         {"李四",19,88},
//         {"王五",30,66}
//     };
//     //3.给结构体数组中的元素赋值
//     stuarray[2].name = "赵六";
//     stuarray[2].age = 80;
//     stuarray[2].score = 60;
//     //4.遍历结构体数组
//     for(int i = 0;i < 3;i++)
//     {
//         cout << "name:" << stuarray[i].name
//              << "age: " << stuarray[i].age
//              << "score" << stuarray[i].score<< endl;
//     }

//     system("pause");
//     return 0;

// }
/////////////////////结构体指针///////////////////////

// #include<iostream>
// using namespace std;
// #include<string>
// //1.定义结构体
// struct Student
// {
//     string name;

//     int age;

//     int score;
// };

// int main()
// {
//     //2.创建结构体数组
//     struct Student s =
//     {
//         {"张三",18,100}
//     };
//     //3.通过指针指向结构体变量
//     struct Student * p = &s;
//     //4.通过指针访问结构体变量中的数据
//     cout <<"name: "<< p->name <<"age: " <<p->age<<"score: "<<p->score<<endl;

//     system("pause");
//     return 0;
// }

///////////////////结构体嵌套结构体/////////////////////////

// #include<iostream>
// using namespace std;
// #include<string>
// //1.定义学生结构体
// struct student
// {
//     string name;
//     int age;
//     int score;
// };
// //定义老师结构体
// struct teacher
// {
//     int id;
//     string name;
//     int age;
//     struct student a; //后面这个a可以随便取
// };

// int main()
// {
//     struct teacher t;
//     t.id = 10000;
//     t.name = "老王";
//     t.age = 50;
//     t.a.name = "小王";
//     t.a.age = 20;
//     t.a.score = 60;


//     cout <<"name: "<< t.name <<"age: " <<t.a.age<<"score: "<<t.a.score<<endl;

//     system("pause");
//     return 0;
// }

/////////////////结构体做函数参数//////////////
// #include<iostream>
// using namespace std;
// #include<string>
// //1.定义学生结构体
// struct student
// {
//     string name;
//     int age;
//     int score;
// };
// //////1.值传递///////////
// void printStudent1(struct student s)
// {
//     cout <<"name: "<< s.name <<"age: " <<s.age<<"score: "<<s.score<<endl;

// }
/////////2.指针传递/////////////////
// void printStudent2(struct student * p)
// {
//     cout <<"name: "<< p->name <<"age: " <<p->age<<"score: "<<p->score<<endl;
// }

// int main()
// {
//     //将学生传入到一个参数中，打印学生身上的所有信息
//     struct student s;
//     s.name = "张三";
//     s.age = 18;
//     s.score = 100;

//     printStudent1(s);

//     printStudent2(&s);


    
//     system("pause");
//     return 0;
// }

//////////////////////结构体中const使用场景/////////////
#include<iostream>
using namespace std;
#include<string>
//1.定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent1(const struct student *s)//加const可以防止误操作
{
    cout <<"name: "<< s->name <<"age: " <<s->age<<"score: "<<s->score<<endl;
}

int main()
{
    //将学生传入到一个参数中，打印学生身上的所有信息
    struct student s;
    s.name = "张三";
    s.age = 18;
    s.score = 100;

    printStudent1(&s);


    
    system("pause");
    return 0;
}