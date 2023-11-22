// #include <iostream>

// using namespace std;

// //int x == static int x
// int f(){
//     static int x = 0;
//     return ++x;
//     }


// class ABC_ {
//    public:
//     static int x = 0;
//     };

// class ABC {
//    public:
//     ABC() { cout << "abc"; }
//     ~ABC() { cout << "~abc"; }

//     static int x;
   

//     static void f(ABC* self) {  // не нужен объект - нет this// add ABC* self
//         cout << x << endl;
//         cout << self->y << endl;//  инкапсуляция на уровне классов
//     }

//    private:
//     int y = 0;
//     };

// int ABC::x = 0; // нужно обязательно положить 

// class A_ {
//    public:
//     A_() { cout << "a_"; }
//     ~A_() { cout << "~a_"; }


//    private:

// };

// struct ptr {
//     ptr(ABC* a) { this->a = a; }
//     ~ptr { delete a; }

//     ABC* operator->({ return a;// чтобы ptr стал вести себя как указатель -- умный указатель
//         })
// }

// void f_() {
//     unique_ptr<ABC> ptr
// }

// int my_main() {
//     ABC* a = new ABC;// new - оператор языка new ->; operator new другое
//     //динамическая память, возвращает указатель, который распологается на стеке .. утечка памяти

//     delete a;//:: - ищи в начале в глобпльной
//     a = nullptr;

//     char buf[sizeof(ABC)];

//     ABC* bu = new(buf) ABC;
//     bu->~ABC;  // delete bu;

//     //умное - перенос динамической памяти в автоматическую

//     ptr a__ = new ABC

//     unique_ptr<ABC>  ptr(new ABC);
//     f_(move(ptr); // вместо копирования, для удаления?
//     static A_ a_; //уничтожается после выхода из main позже всех
//     ABC a;
//     ABC b;
//     int x = 0; //живёт только внутри скобок
//     std::cout << a.x++ << std::endl;
//     std::cout << b.x++ << std::endl;

//     ABC::f();
//     a.f();
// }



// class A {
//     public:
//     A() { std::cout << ;}
//     ~A() { std::cout << ;}
//     void f() { // (A*) <-- A::f
//         std::cout << "" << std::endl;
//     }

// }

// class B : public A { // все знают что В в А и для В можно вызвать метод А
//     public:
//     B() { std::cout << "B" << std::endl; }
//     ~B() { std::cout << "~B" << std::endl; }
//     void f() { // сработает, (B* this) перегрузка функций
//         A::f()
//         std::cout << "new f()" << std::endl;
//     }
// }

// class B1 : private A { // только знает что В в А и нельзя В.f() - инкапсуляция... наследуют всё
//     public:
//     B() { std::cout << "B" << std::endl; }
//     ~B() { std::cout << "~B" << std::endl; }

// }

// class B1 : protected A { // любой наследник В будет знать что он ещё и А
//     public:
//     B() { std::cout << "B" << std::endl; }
//     ~B() { std::cout << "~B" << std::endl; }
// }

// void f_(A* a){

// }


// class A1 {
//     public:
    
// }

// class B1 : public A1 {
//     public:
    
// }
// class C1 : public B1 {
//     public:

// }


// class Word{
//     private:
//     string word;
//     float x, y;

//     //ololo word; //крутой класс , нет оператора присваивания
//     public:
//     Word(const string& w, float x, float y, float vx, float vy){
//         word = w;
//         x = x; 
//         y = y;
//     }

//     //getter

//     const string& GetWord() const{
//         return word;
//     }
//     //setter
    

//     void Update(float dt){
//         x = x + vx * dt;
//         y = y + vy * dt

//     }

//     bool Shoot(char c){
//         if (c = s[0]){
//             s.erase(s.beggin());
//             return true;
//         }
//         return false;
//     }

//     void Render(){
//         //
//     }
// }

// class Render{
//     void RenderWord(const Word& w){
        
//     }
// }

// int main(){

//     B b;
//     b.f();
//     A::f;
//     b.B::f();




//     Word w('abc', 10, 10, 1, 1);
//     //initialize
//     for (;;){
//         //->
//         const float DT = 0.01;
//         for(float f; f < DeltaTime; f += DT){
//             w.Update(DT)
//         }
//         DeltaTime -> ? 0.01;
//         //update dt (dt - important)
//         //render int - px
//         //handle user input
//         //-> DT -?
//         char ch = 0; // current char
//     }

//     // free

//     const char*
//     Word w('abc', 10, 20);

//     return 0;
// }