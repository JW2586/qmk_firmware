#include "vaporwave1.qgf.h"
#include <qp.h>
#include "shoveler.h"
#include "quantum.h"
kb_runtime_config kb_state;
static painter_device_t display;
// static painter_image_handle_t image;
void keyboard_post_init_user(void) {
    setPinOutput(GP22); 
    writePinHigh(GP22);
    display = qp_st7789_make_spi_device(240, 280, DISPLAY_CS_PIN, DISPLAY_DC_PIN, DISPLAY_RST_PIN, 8, 3);
    qp_init(display, QP_ROTATION_180); // Initialise the display
    qp_power(display, true);
    qp_set_viewport_offsets(display, 0, 80);
    qp_rect(display, 0, 0, 240, 280, 50, 32, 200, true);
    
}
void housekeeping_task_user(void) {
    setPinOutput(GP22); 
    writePinHigh(GP22);
    static uint32_t last_draw = 0;
    if (timer_elapsed32(last_draw) > 33) { // Throttle to 30fps
        last_draw = timer_read32();
        // Draw 8px-wide rainbow down the left side of the display
        for (int i = 0; i < 239; ++i) {
            qp_line(display, 0, i, 7, i, i, 255, 255);
        }
        qp_flush(display);
    }
    // image = qp_load_image_mem(gfx_vaporwave1);
    // if (image != NULL) {
    //     qp_drawimage(display, (239 - image->width), (319 - image->height), image);
    // }
}

// void keyboard_post_init_kb(void) {
//     image = qp_load_image_mem(gfx_vaporwave1);
//     if (image != NULL) {
//         qp_drawimage(display, (239 - image->width), (279 - image->height), image);
//     }
// }

void board_init(void) {}
