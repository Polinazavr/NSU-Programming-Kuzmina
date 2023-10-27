#include <iostream>

using namespace std;

class A {
    public:
    A() { std::cout << ;}
    ~A() { std::cout << ;}
    void f() { // (A*) <-- A::f
        std::cout << "" << std::endl;
    }

}

class B : public A { // все знают что В в А и для В можно вызвать метод А
    public:
    B() { std::cout << "B" << std::endl; }
    ~B() { std::cout << "~B" << std::endl; }
    void f() { // сработает, (B* this) перегрузка функций
        A::f()
        std::cout << "new f()" << std::endl;
    }
}

class B1 : private A { // только знает что В в А и нельзя В.f() - инкапсуляция... наследуют всё
    public:
    B() { std::cout << "B" << std::endl; }
    ~B() { std::cout << "~B" << std::endl; }

}

class B1 : protected A { // любой наследник В будет знать что он ещё и А
    public:
    B() { std::cout << "B" << std::endl; }
    ~B() { std::cout << "~B" << std::endl; }
}

void f_(A* a){

}


class A1 {
    public:
    
}

class B1 : public A1 {
    public:
    
}
class C1 : public B1 {
    public:

}


class Word{
    private:
    string word;
    float x, y;

    //ololo word; //крутой класс , нет оператора присваивания
    public:
    Word(const string& w, float x, float y, float vx, float vy){
        word = w;
        x = x; 
        y = y;
    }

    //getter

    const string& GetWord() const{
        return word;
    }
    //setter
    

    void Update(float dt){
        x = x + vx * dt;
        y = y + vy * dt

    }

    bool Shoot(char c){
        if (c = s[0]){
            s.erase(s.beggin());
            return true;
        }
        return false;
    }

    void Render(){
        //
    }
}

class Render{
    void RenderWord(const Word& w){
        
    }
}

int main(){

    B b;
    b.f();
    A::f;
    b.B::f();




    Word w('abc', 10, 10, 1, 1);
    //initialize
    for (;;){
        //->
        const float DT = 0.01;
        for(float f; f < DeltaTime; f += DT){
            w.Update(DT)
        }
        DeltaTime -> ? 0.01;
        //update dt (dt - important)
        //render int - px
        //handle user input
        //-> DT -?
        char ch = 0; // current char
    }

    // free

    const char*
    Word w('abc', 10, 20);

    return 0;
}