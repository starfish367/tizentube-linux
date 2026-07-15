#include "starboard/shared/x11/key_mapping.h"
#include <X11/keysym.h>
#include "starboard/key.h"

namespace starboard {
namespace shared {
namespace x11 {

SbKey SbKeyFromKeysym(KeySym keysym) {
  switch (keysym) {
    case XK_BackSpace:
    case XK_Escape:
      return kSbKeyBack; // Nhấn Esc hoặc Backspace để QUAY LẠI (Back)
    case XK_Tab:
      return kSbKeyTab;
    case XK_Return:
    case XK_KP_Enter:
      return kSbKeySelect; // Nhấn Enter để CHỌN (Nút Giữa/OK)
    case XK_Home:
      return kSbKeyHome;
    case XK_Left:
      return kSbKeyLeft;
    case XK_Up:
      return kSbKeyUp;
    case XK_Right:
      return kSbKeyRight;
    case XK_Down:
      return kSbKeyDown;
    case XK_Prior:
      return kSbKeyPrior;
    case XK_Next:
      return kSbKeyNext;
    case XK_End:
      return kSbKeyEnd;
    case XK_Space:
      return kSbKeySpace;
    // Bản đồ phím số
    case XK_0: case XK_KP_0: return kSbKey0;
    case XK_1: case XK_KP_1: return kSbKey1;
    case XK_2: case XK_KP_2: return kSbKey2;
    case XK_3: case XK_KP_3: return kSbKey3;
    case XK_4: case XK_KP_4: return kSbKey4;
    case XK_5: case XK_KP_5: return kSbKey5;
    case XK_6: case XK_KP_6: return kSbKey6;
    case XK_7: case XK_KP_7: return kSbKey7;
    case XK_8: case XK_KP_8: return kSbKey8;
    case XK_9: case XK_KP_9: return kSbKey9;
    // Bản đồ chữ cái (để gõ tìm kiếm bằng bàn phím ảo)
    case XK_a: case XK_A: return kSbKeyA;
    case XK_b: case XK_B: return kSbKeyB;
    case XK_c: case XK_C: return kSbKeyC;
    case XK_d: case XK_D: return kSbKeyD;
    case XK_e: case XK_E: return kSbKeyE;
    case XK_f: case XK_F: return kSbKeyF;
    case XK_g: case XK_G: return kSbKeyG;
    case XK_h: case XK_H: return kSbKeyH;
    case XK_i: case XK_I: return kSbKeyI;
    case XK_j: case XK_J: return kSbKeyJ;
    case XK_k: case XK_K: return kSbKeyK;
    case XK_l: case XK_L: return kSbKeyL;
    case XK_m: case XK_M: return kSbKeyM;
    case XK_n: case XK_N: return kSbKeyN;
    case XK_o: case XK_O: return kSbKeyO;
    case XK_p: case XK_P: return kSbKeyP;
    case XK_q: case XK_Q: return kSbKeyQ;
    case XK_r: case XK_R: return kSbKeyRemap; // Dự phòng
    case XK_s: case XK_S: return kSbKeyS;
    case XK_t: case XK_T: return kSbKeyT;
    case XK_u: case XK_U: return kSbKeyU;
    case XK_v: case XK_V: return kSbKeyV;
    case XK_w: case XK_W: return kSbKeyW;
    case XK_x: case XK_X: return kSbKeyX;
    case XK_y: case XK_Y: return kSbKeyY;
    case XK_z: case XK_Z: return kSbKeyZ;
    default:
      return kSbKeyUnknown;
  }
}

}  // namespace x11
}  // namespace shared
}  // namespace starboard
