#include "dximageitem.h"


DxImageItem::DxImageItem()
{
 setFlag(ItemHasContents, true); // нужно, чтобы updatePaintNode вызывался
}

