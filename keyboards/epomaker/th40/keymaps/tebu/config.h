/* Copyright 2025 tebu
 *
 * Configuration overrides for tebu keymap
 */

#pragma once

// ============================================================================
// Layer Configuration
// ============================================================================
// TH40 requires DYNAMIC_KEYMAP_ENABLE = yes (hardware dependency)
// You can still have more than 4 layers by increasing this value.
// Max ~8 layers due to EEPROM (1152 bytes, ~80 bytes per layer)
// ============================================================================

// Match the number of layers defined in keymap.c
// Layers: BASE, QWERTY, FN, LOWER, RAISE, ARROWS, SYMBOLS, MOUSE = 8
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// ============================================================================
// Tap/Hold Configuration
// ============================================================================
// TAPPING_TERM: Time (ms) to distinguish tap vs hold for LT(), MT(), etc.
// Default is 200ms. Lower = faster taps required, Higher = more lenient.
#define TAPPING_TERM 150

// Per-key tapping term (enables get_tapping_term() in keymap.c)
#define TAPPING_TERM_PER_KEY

// Per-key permissive hold (enables get_permissive_hold() in keymap.c)
#define PERMISSIVE_HOLD_PER_KEY

// Optional: Hold a key and tap another to trigger hold, even under TAPPING_TERM
// #define HOLD_ON_OTHER_KEY_PRESS

// ============================================================================
// RGB Matrix Defaults
// ============================================================================
// Default animation mode (see list below)
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR

// Default brightness (0-255, but TH40 max is 180)
#define RGB_MATRIX_DEFAULT_VAL 30

// Default speed (0-255)
#define RGB_MATRIX_DEFAULT_SPD 128

// Default hue (0-255, 0=red, 85=green, 170=blue)
#define RGB_MATRIX_DEFAULT_HUE 0

// Default saturation (0-255, 0=white, 255=full color)
#define RGB_MATRIX_DEFAULT_SAT 255

// Keep RGB enabled but set brightness to 0 so indicators still work
// (Battery, BT status will show; use RM_VALU to increase brightness for animations)
#define RGB_MATRIX_DEFAULT_ON true

// ============================================================================
// RGB Animation Modes - All 49 available on TH40:
// ============================================================================
// --- Static ---
// RGB_MATRIX_SOLID_COLOR              - Static single color
// RGB_MATRIX_ALPHAS_MODS              - Alpha keys vs modifier keys different
// RGB_MATRIX_GRADIENT_UP_DOWN         - Vertical gradient
// RGB_MATRIX_GRADIENT_LEFT_RIGHT      - Horizontal gradient
//
// --- Breathing/Pulse ---
// RGB_MATRIX_BREATHING                - Pulsing brightness
// RGB_MATRIX_HUE_BREATHING            - Pulsing hue
// RGB_MATRIX_HUE_PENDULUM             - Hue swings back and forth
// RGB_MATRIX_HUE_WAVE                 - Hue wave across keyboard
//
// --- Band Effects ---
// RGB_MATRIX_BAND_SAT                 - Saturation band moving
// RGB_MATRIX_BAND_VAL                 - Brightness band moving
// RGB_MATRIX_BAND_PINWHEEL_SAT        - Pinwheel saturation band
// RGB_MATRIX_BAND_PINWHEEL_VAL        - Pinwheel brightness band
// RGB_MATRIX_BAND_SPIRAL_SAT          - Spiral saturation band
// RGB_MATRIX_BAND_SPIRAL_VAL          - Spiral brightness band
//
// --- Rainbow Cycle ---
// RGB_MATRIX_CYCLE_ALL                - All keys cycle rainbow together
// RGB_MATRIX_CYCLE_LEFT_RIGHT         - Rainbow wave left to right
// RGB_MATRIX_CYCLE_UP_DOWN            - Rainbow wave top to bottom
// RGB_MATRIX_CYCLE_OUT_IN             - Rainbow from edges to center
// RGB_MATRIX_CYCLE_OUT_IN_DUAL        - Dual rainbow from edges
// RGB_MATRIX_CYCLE_PINWHEEL           - Pinwheel rainbow
// RGB_MATRIX_CYCLE_SPIRAL             - Spiral rainbow
// RGB_MATRIX_RAINBOW_MOVING_CHEVRON   - Moving chevron pattern
// RGB_MATRIX_RAINBOW_BEACON           - Rotating rainbow beacon
// RGB_MATRIX_RAINBOW_PINWHEELS        - Multiple pinwheels
// RGB_MATRIX_DUAL_BEACON              - Two rotating beacons
//
// --- Random/Rain ---
// RGB_MATRIX_RAINDROPS                - Random key color drops
// RGB_MATRIX_JELLYBEAN_RAINDROPS      - Colorful jellybean drops
// RGB_MATRIX_PIXEL_RAIN               - Pixel rain effect
// RGB_MATRIX_PIXEL_FLOW               - Flowing pixels
// RGB_MATRIX_PIXEL_FRACTAL            - Fractal pixel pattern
// RGB_MATRIX_FLOWER_BLOOMING          - Blooming flower effect
//
// --- Starlight ---
// RGB_MATRIX_STARLIGHT                - Twinkling stars
// RGB_MATRIX_STARLIGHT_SMOOTH         - Smooth twinkling
// RGB_MATRIX_STARLIGHT_DUAL_HUE       - Dual hue stars
// RGB_MATRIX_STARLIGHT_DUAL_SAT       - Dual saturation stars
// RGB_MATRIX_RIVERFLOW                - Flowing river effect
//
// --- Reactive (respond to keypresses) ---
// RGB_MATRIX_SOLID_REACTIVE_SIMPLE    - Simple keypress reaction
// RGB_MATRIX_SOLID_REACTIVE           - Keypress reaction
// RGB_MATRIX_SOLID_REACTIVE_WIDE      - Wide keypress reaction
// RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE - Multiple wide reactions
// RGB_MATRIX_SOLID_REACTIVE_CROSS     - Cross-shaped reaction
// RGB_MATRIX_SOLID_REACTIVE_MULTICROSS- Multiple cross reactions
// RGB_MATRIX_SOLID_REACTIVE_NEXUS     - Nexus-shaped reaction
// RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS- Multiple nexus reactions
// RGB_MATRIX_SPLASH                   - Splash effect on keypress
// RGB_MATRIX_MULTISPLASH              - Multiple splashes
// RGB_MATRIX_SOLID_SPLASH             - Solid color splash
// RGB_MATRIX_SOLID_MULTISPLASH        - Multiple solid splashes
//
// --- Framebuffer (typing-based) ---
// RGB_MATRIX_TYPING_HEATMAP           - Heatmap based on typing frequency
// RGB_MATRIX_DIGITAL_RAIN             - Matrix-style digital rain
// ============================================================================
