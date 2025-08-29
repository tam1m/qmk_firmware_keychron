
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CUSTOM_PALETTEFX_REACTIVE
#define RGB_MATRIX_DEFAULT_SPD  128
#define RGB_MATRIX_DEFAULT_HUE RGB_MATRIX_HUE_STEP * PALETTEFX_SYNTHWAVE
#define RGB_MATRIX_DEFAULT_SAT ((100 * 255) / 100)
#define RGB_MATRIX_DEFAULT_VAL ((50 * 255) / 100)

// #define RGB_MATRIX_DEFAULT_SPD 127 // Sets the default animation speed, if none has been set
// #define RGB_MATRIX_DEFAULT_HUE ((202 * 255) / 360)
// #define RGB_MATRIX_DEFAULT_SAT ((83 * 255) / 100)
// #define RGB_MATRIX_DEFAULT_VAL ((100 * 255) / 100)
#define RGB_MATRIX_DEFAULT_ON true
// #define FORCE_NKRO

// https://quantum5.ca/2024/06/30/custom-mechanical-keyboard-os-specific-rgb-lighting-qmk/
#define RGB_MATRIX_KEYREACTIVE_RND_STROKE

#define TAPPING_TERM 100



// palettefx
// https://getreuer.info/posts/keyboards/palettefx/#add-palettefx-to-your-keymap
// Enable just the Gradient and Ripple effects.
// #define PALETTEFX_GRADIENT_ENABLE
// #define PALETTEFX_FLOW_ENABLE
// #define PALETTEFX_RIPPLE_ENABLE
// #define PALETTEFX_SPARKLE_ENABLE
// #define PALETTEFX_VORTEX_ENABLE
// #define PALETTEFX_REACTIVE_ENABLE

// Or enable all effects with
#define PALETTEFX_ENABLE_ALL_EFFECTS

// Enable just the Afterburn, Not Pink, and Phosphor palettes.
// #define PALETTEFX_AFTERBURN_ENABLE
// #define PALETTEFX_AMBER_ENABLE
// #define PALETTEFX_BADWOLF_ENABLE
// #define PALETTEFX_CARNIVAL_ENABLE
// #define PALETTEFX_CLASSIC_ENABLE
// #define PALETTEFX_DRACULA_ENABLE
// #define PALETTEFX_GROOVY_ENABLE
// #define PALETTEFX_NOTPINK_ENABLE
// #define PALETTEFX_PHOSPHOR_ENABLE
// #define PALETTEFX_POLARIZED_ENABLE
// #define PALETTEFX_ROSEGOLD_ENABLE
// #define PALETTEFX_SPORT_ENABLE
// #define PALETTEFX_SYNTHWAVE_ENABLE
// #define PALETTEFX_THERMAL_ENABLE
// #define PALETTEFX_VIRIDIS_ENABLE
// #define PALETTEFX_WATERMELON_ENABLE

// custom pallettes
// #define PALETTEFX_CYBERPUNK_2077_ENABLE
// #define PALETTEFX_GALACTIC_AURORA_ENABLE
// #define PALETTEFX_INFERNO_ENABLE
// #define PALETTEFX_BIOLUMINESCENT_DEEP_SEA_ENABLE
// #define PALETTEFX_MIDNIGHT_HACKER_ENABLE

// Or enable all palettes with
#define PALETTEFX_ENABLE_ALL_PALETTES
