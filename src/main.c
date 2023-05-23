#include <graphx.h>
#include <keypadc.h>

bool partial_redraw;

// starting stuff
void init() {

}

// no rendering logic
bool step() {
    

    if (kb_IsDown(kb_KeyClear)) { return false; } else { return true; }
}

// RENDERING LOGIC HERE
void draw() {
    gfx_ZeroScreen();
}

// void end() {

// }

int main() {
    init(); 
    gfx_Begin();
    gfx_SetDrawBuffer(); 

    while (step()) { 
        if (partial_redraw) // Only redraw part of the previous frame?
            gfx_BlitScreen(); // Copy previous frame as a base for this frame
        draw();
        gfx_SwapDraw();
    }

    gfx_End();
    //end();

    return 0;
}