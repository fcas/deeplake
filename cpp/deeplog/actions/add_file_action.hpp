#pragma once

#include "action.hpp"

namespace deeplog {
    class add_file_action : public action {

    public:
        std::string path;
        unsigned long size;
        long modification_time;
        bool data_change;

    public:
        static std::shared_ptr<arrow::StructType> arrow_type;

        add_file_action(std::string path, const long &size, const long &modification_time, const bool &data_change);

        explicit add_file_action(const std::shared_ptr<arrow::StructScalar> &struct_scalar);

        nlohmann::json to_json() override;

        std::string action_name() override;
    };
}