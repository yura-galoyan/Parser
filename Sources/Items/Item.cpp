#include "Item.hpp"

#include "../Serializer/iSerializer.hpp"


void Item::accept(iSerializer& serial){ serial.visit(m_id); };