// 4.23.1 0x3ac8820a
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_backgrounds_480x272_gradient_dark[]; // BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_GRADIENT_DARK_ID = 0, Size: 480x272 pixels
extern const unsigned char image_hella_148394733[]; // BITMAP_HELLA_148394733_ID = 1, Size: 180x64 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_backgrounds_480x272_gradient_dark, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_hella_148394733, 0, 180, 64, 64, 12, 53, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 41, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
