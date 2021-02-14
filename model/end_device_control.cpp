#include "include/sep/end_device_control.hpp"

namespace sep
{
    EndDeviceControl::EndDeviceControl(
        sep::RandomizableEvent *randomize_event,
        sep::ApplianceLoadReductionType appliance_load_reduction,
        sep::DeviceCategoryType device_category,
        bool dr_program_mandatory,
        bool load_shift_forward,
        sep::DutyCycle *duty_cycle,
        sep::Offset *offset,
        uint16_t override_duration,
        sep::SetPoint *set_point)
    {
        randomize_event_ = randomize_event;
        appliance_load_reduction_ = appliance_load_reduction;
        device_category_ = device_category;
        dr_program_mandatory_ = dr_program_mandatory;
        load_shift_forward_ = load_shift_forward;
        duty_cycle_ = duty_cycle;
        offset_ = offset;
        override_duration_ = override_duration;
        set_point_ = set_point;
    }

    EndDeviceControl::~EndDeviceControl()
    {
        delete randomize_event_;
        delete duty_cycle_;
        delete offset_;
        delete set_point_;
    }
} // namespace sep