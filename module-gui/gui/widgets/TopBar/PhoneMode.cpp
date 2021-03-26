// Copyright (c) 2017-2021, Mudita Sp. z.o.o. All rights reserved.
// For licensing, see https://github.com/mudita/MuditaOS/LICENSE.md

#include "PhoneMode.hpp"

#include <log/log.hpp>
#include <i18n/i18n.hpp>

#include "Item.hpp"
#include "Style.hpp"

namespace gui::top_bar
{
    PhoneMode::PhoneMode(Item *parent, uint32_t x, uint32_t y, uint32_t w, uint32_t h)
        : StatusBarWidgetBase(parent, x, y, w, h)
    {
        setEdges(RectangleEdge::None);
        setFont(style::header::status_bar::nat::font);
        setAlignment(gui::Alignment(gui::Alignment::Horizontal::Left, gui::Alignment::Vertical::Center));
    }

    void PhoneMode::setPhoneMode(sys::phone_modes::PhoneMode mode)
    {
        switch (mode) {
        case sys::phone_modes::PhoneMode::DoNotDisturb:
            setText(utils::localize.get("home_modes_notdisturb"));
            break;

        case sys::phone_modes::PhoneMode::Offline:
            setText(utils::localize.get("home_modes_offline"));
            break;

        case sys::phone_modes::PhoneMode::Connected:
            setText("");
            break;
        }
    }
} // namespace gui::top_bar