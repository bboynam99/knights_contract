#pragma once

/*
 * season mode player controller
 */
class splayer_control : public player_control_base<splayer_table, splayer_table::const_iterator> {
public:
    splayer_control(account_name _self)
    : player_control_base(_self) {
    }
};
