RGB_MATRIX_EFFECT(splash_on_backlight)

#ifndef RGB_MATRIX_KEYREACTIVE_RND_STROKE
#error "RGB_MATRIX_KEYREACTIVE_RND_STROKE required to use splash_on_backlight"
#endif

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
static bool splash_on_backlight(effect_params_t *params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    uint8_t count = g_last_hit_tracker.count;
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        HSV hsv = rgb_matrix_config.hsv;

        int16_t hx = 0, hy = 0;
        uint8_t cnt = 0;
        for (uint8_t j = 0; j < count; j++) {
            int16_t  dx   = g_led_config.point[i].x - g_last_hit_tracker.x[j];
            int16_t  dy   = g_led_config.point[i].y - g_last_hit_tracker.y[j];
            uint8_t  dist = sqrt16(dx * dx + dy * dy);
            uint16_t tick = scale16by8(g_last_hit_tracker.tick[j], qadd8(rgb_matrix_config.speed, 1));
            uint16_t str  = tick - dist;
            if (str < 45) {
                uint8_t hue = hsv.h + scale8(g_last_hit_tracker.rnd[j], 192) + 32;
                hx += cos16(hue << 8) >> 4;
                hy += sin16(hue << 8) >> 4;
                ++cnt;
            }
        }

        if (cnt) {
            hsv.h = atan2_8(hy, hx);

            hx = (hx / cnt) >> 3;
            hy = (hy / cnt) >> 3;
            hsv.s = scale8(sqrt16(hx * hx + hy * hy), hsv.s);
        }
        RGB rgb = rgb_matrix_hsv_to_rgb(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
    return rgb_matrix_check_finished_leds(led_max);
}
#endif
