#pragma once


#include "deeplog.hpp"

namespace deeplog {
class deeplog_v3 : public deeplog {
        int log_format() const override;
    };
}