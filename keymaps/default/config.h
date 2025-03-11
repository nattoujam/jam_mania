#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 7

#define ENCODER_A_PINS { GP28 }
#define ENCODER_B_PINS { GP29 }

/*
複数ある場合はこう
#define ENCODER_A_PINS { encoder1a, encoder2a }
#define ENCODER_B_PINS { encoder1b, encoder2b }
*/

#define ENCODER_RESOLUTION 2

/*
複数のエンコーダごとに設定した場合はこう
#define ENCODER_RESOLUTIONS { 4, 2 }
*/
