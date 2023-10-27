#include "app/baseapp.h"
#include "princeOfPersia/princeOfPersia.h"

#include <iostream>

class GameApp : public app::GameApp {
    public:
        GameApp(int w, int h) : app::GameApp(w, h) {}

    private:
        void Initialize() override {
            render::LoadResource("resources/images/block.jpg", "block");
            render::LoadResource("resources/images/fire1.jpg", "fire1");
            render::LoadResource("resources/images/fire2.jpg", "fire2");
            render::LoadResource("resources/images/fire3.jpg", "fire3");
            render::LoadResource("resources/images/fire4.jpg", "fire4");
            render::LoadResource("resources/images/fire5.jpg", "fire5");
            render::LoadResource("resources/images/fire6.jpg", "fire6");
        }

        void ProcessInput(const Uint8* keyboard, const MouseState& mouse) override {}

        void Render() override {
            for (int i = 0; i < 7; i++) {
                block1.Draw(96 * i, 600);
            } 

            for (int i = 13; i < 15; i++) {
                block1.Draw(96 * i, 600);
            } 

            fireFirst.Draw(96 * 8, 600, 1);
            fireFirst.Draw(96 * 9, 600, 5);
        }

        void Update(Uint32 millis) override { fireFirst.Update(96 * 8, 600);
        }

        Block block1;
        Fire fireFirst;
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