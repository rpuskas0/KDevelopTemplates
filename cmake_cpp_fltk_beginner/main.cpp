#include "GUI/Simple_window.h"

int main() {
    Point pt {200,200};
    Graph_lib::Simple_window win {pt,640,480,"An empty window"};
    
    win.wait_for_button();
}
