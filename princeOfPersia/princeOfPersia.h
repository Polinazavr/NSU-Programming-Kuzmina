#pragma once
#include "../graphics/graphics.h"

class Block {

	public:
        int sizeX_ = 96;
        int sizeY_ = 144;
        //int sizeX() { return sizeX_; }
		//int sizeY() { return sizeY_; }
		
		void Draw(int x, int y) { render::DrawImage("block", x, y, sizeX_, sizeY_); }
};

class Fire {

    public:
        int sizeX_ = 96;
        int sizeY_ = 144;
        //int sizeX() { return sizeX_; }
        //int sizeY() { return sizeY_; }

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
