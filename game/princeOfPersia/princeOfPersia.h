#pragma once
#include "../graphics/graphics.h"

#include <iostream>

class Vector2d {
    private:

        float x, y;

    public:

        Vector2d() {
            this -> x = 0;
            this -> y = 0;
            std::cout << this -> x << "," << this -> y << std::endl;
        }

        Vector2d(float x, float y) {
            this -> x = x;
            this -> y = y;
            std::cout << this->x << "," << this->y << std::endl;
        }

        Vector2d operator+(const Vector2d& vector) {
            // Vector2d temp;
            // temp.x = this -> x + vector.x;
            // temp.y = this -> y + vector.y;
            // return temp;
            return Vector2d(x + vector.x, y + vector.y);
        }

        Vector2d operator-(const Vector2d& vector) {
            // Vector2d temp;
            // temp.x = this -> x - vector.x;
            // temp.y = this -> y - vector.y;
            // return temp;
            return Vector2d(x - vector.x, y - vector.y);
        }

        Vector2d operator*(const float& scalar) {
            // Vector2d temp;
            // temp.x = scalar * this -> x;
            // temp.y = scalar * this -> y;
            // return temp;
            return Vector2d(scalar * x, scalar * y);
        }

        //??????????????????????????????????????????????????????????????????
        friend Vector2d operator*(float scalar, const Vector2d& vector);

        //??????????????????????????????????????????????????????????????????

        float operator*(const Vector2d& vector) {
            return this -> x * vector.x + this -> y * vector.y;
        }

        friend std::ostream& operator<<(std::ostream& o, const Vector2d& vector);

        float norm() { 
            return sqrt(*this * *this); 
        }

        float getX() const { 
            return this -> x; 
        }
        float getY() const { 
            return this -> y;
        }
};

Vector2d operator*(float scalar, const Vector2d& vector) {
    // Vector2d temp;
    // temp.x = scalar * vector.x;
    // temp.y = scalar * vector.y;
    // return temp;
    return Vector2d(scalar * vector.x, scalar * vector.y);
}


std::ostream& operator<<(std::ostream& o, const Vector2d& vector) {
    return o << "(" << vector.getX() << ", " << vector.getY() << ")";
}

class Block {

	public:
        int sizeX_ = 96;
        int sizeY_ = 144;
        int sizeX() { return sizeX_; }
		int sizeY() { return sizeY_; }
		
		void Draw(int x, int y) { render::DrawImage("block", x, y, sizeX_, sizeY_); }
};

class Fire {

    public:
        int sizeX_ = 96;
        int sizeY_ = 144;
        int sizeX() { return sizeX_; }
        int sizeY() { return sizeY_; }

        void Draw(int x, int y, int n) {
            switch (n) {
                case 1:
                    render::DrawImage("fire1", x, y, sizeX_, sizeY_);
                    break;
                case 2:
                    render::DrawImage("fire2", x, y, sizeX_, sizeY_);
                    break;
                case 3:
                    render::DrawImage("fire3", x, y, sizeX_, sizeY_);
                    break;
                case 4:
                    render::DrawImage("fire4", x, y, sizeX_, sizeY_);
                    break;
                case 5:
                    render::DrawImage("fire5", x, y, sizeX_, sizeY_);
                    break;
                case 6:
                    render::DrawImage("fire6", x, y, sizeX_, sizeY_);
                    break;
                case 7:
                    render::DrawImage("fire7", x, y, sizeX_, sizeY_);
                    break;
                case 8:
                    render::DrawImage("fire8", x, y, sizeX_, sizeY_);
                    break;
                default:
                    render::DrawImage("fire1", x, y, sizeX_, sizeY_);
                    break;
            }
           
        }

        void Update(int x, int y) { 
            int random = std::rand() % 6 + 1;
            Draw(x, y, random); 
        }
};
