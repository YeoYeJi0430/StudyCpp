#include <stdio.h>

class Shape
{
public:
    virtual void draw() = 0;//{ puts("도형 오브젝트입니다."); }
 };

class Line : public Shape
{
public:
    virtual void draw() { puts("선을 긋습니다."); }
};

class Circle :public Shape
{
public:
    virtual void draw() { puts("동그라미"); }
};

class Rect :public Shape
{
public:
    virtual void draw() { puts("사각형"); }
};

class Triangle : public Shape
{
    virtual void draw() { puts("삼각형!"); }
};

int main()
{
    Shape* ar[] = { new Rect,new Circle(),new Rect(),new Line(),new Triangle() };

    printf("ar size : %d, ar[0] size : %d\n", sizeof(ar), sizeof(ar[0]));

    for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
    {
        ar[i]->draw();
    }
    for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
    {
        delete ar[i]; // new - delete
    }
}
// 순수가상함수