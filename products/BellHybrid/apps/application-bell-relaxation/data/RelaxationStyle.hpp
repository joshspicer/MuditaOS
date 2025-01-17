// Copyright (c) 2017-2023, Mudita Sp. z.o.o. All rights reserved.
// For licensing, see https://github.com/mudita/MuditaOS/LICENSE.md

#pragma once

#include <Style.hpp>

namespace gui::relaxationStyle
{
    inline constexpr auto descriptionFont = style::window::font::verybiglight;
    inline constexpr auto titleFont       = style::window::font::largelight;
    inline constexpr auto clockFont       = style::window::font::largelight;
    inline constexpr auto timerValueFont  = style::window::font::supersizemelight;
    inline constexpr auto volumeValueFont = style::window::font::supersizemelight;

    namespace ended
    {
        inline constexpr auto image_top_margin    = 170U;
        inline constexpr auto image_bottom_margin = 30U;
    } // namespace ended

    namespace title
    {
        inline constexpr auto maxLines            = 2U;
        inline constexpr auto width               = 400U;
    } // namespace title

    namespace text
    {
        inline constexpr auto maxLines = title::maxLines;
        inline constexpr auto minWidth = 300U;
    } // namespace text

    namespace relStyle
    {
        namespace progressTime
        {
            inline constexpr auto radius                   = 192U;
            inline constexpr auto penWidth                 = 3U;
            inline constexpr auto verticalDeviationDegrees = 38U;
        } // namespace progressTime

        namespace progressVolume
        {
            inline constexpr auto radius                   = 192U;
            inline constexpr auto penWidth                 = 3U;
            inline constexpr auto verticalDeviationDegrees = 38U + 30U;
        } // namespace progressVolume

        namespace timer
        {
            inline constexpr auto marginTop = 41U;
            inline constexpr auto font      = style::window::font::supersizeme;
            inline constexpr auto maxSizeX  = 340U;
            inline constexpr auto maxSizeY  = 198U;
        } // namespace timer

        namespace pauseIcon
        {
            inline constexpr auto image     = "big_pause";
            inline constexpr auto marginTop = 39U;
            inline constexpr auto maxSizeX  = 203U;
            inline constexpr auto maxSizeY  = 203U;
        } // namespace pauseIcon

        namespace clock
        {
            inline constexpr auto marginTop = 17U;
            inline constexpr auto maxSizeX  = 340U;
            inline constexpr auto maxSizeY  = 84U;
        } // namespace clock
    }     // namespace relStyle

    namespace error
    {
        inline constexpr auto imageMarginTop = 122U;
        inline constexpr auto textPaddingTop = 30U;
    } // namespace error
} // namespace gui::relaxationStyle
