#include "app/baseapp.h"
#include "princeOfPersia/princeOfPersia.h"

#include <iostream>



struct Prince {

};

struct Cell {

};

class GameApp : public app::GameApp {
    public:

        GameApp(int w, int h) : app::GameApp(w, h) {}

    private:
        void Initialize() override {
            render::LoadResource("resources/images/background.jpg", "background");
            render::LoadResource("resources/images/block.jpg", "block");
            render::LoadResource("resources/images/fire1.jpg", "fire1");
            render::LoadResource("resources/images/fire2.jpg", "fire2");
            render::LoadResource("resources/images/fire3.jpg", "fire3");
            render::LoadResource("resources/images/fire4.jpg", "fire4");
            render::LoadResource("resources/images/fire5.jpg", "fire5");
            render::LoadResource("resources/images/fire6.jpg", "fire6");
            render::LoadResource("resources/images/fire7.jpg", "fire7");
            render::LoadResource("resources/images/fire8.jpg", "fire8");
        }


        void ProcessInput(const Uint8* keyboard,
                          const MouseState& mouse) override {}

        void Render() override {
            render::DrawImage("background", 0, 0, 1700, 1000);
            for (int i = 0; i < 7; i++) {
                block1.Draw(block1.sizeX() * i, 638);
            } 

            for (int i = 13; i < 15; i++) {
                block1.Draw(block1.sizeX() * i, 638);
            } 

            for (int i = 7; i < 15; i++) {
                fire1.Draw(block1.sizeX() * i, 638, i - 6);
            } 

            
        }

        void Update(Uint32 millis) override { fire1.Update(96 * 8, 600);

        float dt = millis / 1000.0f;
        }

        Block block1;
        Fire fire1;
};

#undef main
int main() {
    try {
        GameApp(800, 800).Run();
    } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
    }
    return 0;
}