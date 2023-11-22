#include <iostream>
//#include <memory>
//#include <vector>
/*
class Vector2d {
 private:
  float x, y;

 public:
  Vector2d() {
    this->x = 0;
    this->y = 0;
    // std::cout << this->x << "," << this->y << std::endl;
  }
  Vector2d(float x, float y) {
    this->x = x;
    this->y = y;
    // std::cout << this->x << "," << this->y << std::endl;
  }
  Vector2d operator+(const Vector2d& vector) {
    Vector2d temp;
    temp.x = this->x + vector.x;
    temp.y = this->y + vector.y;
    return temp;
    //return Vector2d(x + vector.x, y + vector.y);
  }
  Vector2d operator-(const Vector2d& vector) {
    Vector2d temp;
    temp.x = this->x - vector.x;
    temp.y = this->y - vector.y;
    return temp;
  }

  Vector2d operator*(const float& scalar) {
    Vector2d temp;
    temp.x = scalar * this->x;
    temp.y = scalar * this->y;
    return temp;
  }
  friend Vector2d operator*(float scalar, const Vector2d& vector);

  float operator*(const Vector2d& vector) {
    return this->x * vector.x + this->y * vector.y;
  }

  float norme() { return sqrt(*this * *this); }

  float getX() const { return this->x; }
  float getY() const { return this->y; }
};

std::ostream& operator<<(std::ostream& o, const Vector2d& vector) {
  o << "{" << vector.getX() << ", " << vector.getY() << "}";
  return o;
  //return << "{" << vector.getX() << ", " << vector.getY() << "}";
}
Vector2d operator*(float scalar, const Vector2d& vector) {
  Vector2d temp;
  temp.x = scalar * vector.x;
  temp.y = scalar * vector.y;
  return temp;
}

int main() {
  float scalar = 5;
  Vector2d a(1, 2);
  Vector2d b(3, 4);
  Vector2d c = a + b;
  Vector2d d = a - b;
  Vector2d e = 5 * c;
  Vector2d f = c * 5;
  float g = f.norme();
  float h = f * f;

  std::cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f
            << ' ' << g << ' ' << h;
};
*/

#include<vector>
#include<list>
#include<map>
#include<algorithm>

class Aimpl {
  int* data;
  int len;
  int data_buf;
};

// sizeof(Aimpl) > sizeof(int*);

class A {
  public:

  private:
  Aimpl* pimpl = nullptr;
};

void print(int* p, int size){
  for (int i = 0; i < size; ++i){
    std::cout << *(p+i) << std::endl;
  }
}

// void print_(int* data, size_t size){
// }

struct item{
  int data;
  item* next = nullptr; 
  item* prev = nullptr;
};

void print(item* head){
  for(item* i = head; i; i = i->next){
    std::cout << i -> data << std::endl;
  }
}

//sizeof(A) == sizeof(Aimpl) == sizeof(void*);

int main() {
  std::list<int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);
  l.push_back(4);
  l.push_back(5);

  // std::sort(l.begin(), l.end());

  l.sort();
  for(auto i:l){
    std::cout << i << std::endl;
  }


  item head = {1};
  item second = {2, nullptr, &head};
  item third = {3, nullptr, &second};


  head.next = &second;
  second.prev = &third;





  std::vector<int> v; //->buf[2 * n];
  // std::deque<int> d; [n] [n] 
  std::vector<int>::iterator i = v.end();


  v.reserve(10);
  v.capacity();// -> 10;
  v.size(); //->0;

  v.push_back(1);
  // ->new[1];
  v.push_back(2);
  // ->new[4];
  v.push_back(3);
  // ->no new;
  v.push_back(4);
  // ->no new;
  v.push_back(5);
  // ->new[1];
  v.push_back(6);

  std::sort(v.begin(), v.end());

  auto b = v.rbegin(); //++ became --

  print(v.data(), v.size());


  // [1] = x;

  // new[2]->copy x

  return 0;
}


/*обобщенный for range based for


for(a:b){

}

auto b = y.begin();
auto e = y.end();
for (auto )


*/