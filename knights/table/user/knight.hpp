// 14 bytes
struct knightrow {
    uint8_t type = 0;
    uint8_t level = 0;
    uint32_t kill_count = 0;
    uint16_t attack;
    uint16_t defense;
    uint16_t hp;
    uint16_t luck;
};

// todo is it working ???????????
// table knight i64
// table sknight i64
struct [[eosio::table]] knight {
    name owner;
    std::vector<knightrow> rows;

    uint64_t primary_key() const {
        return owner.value;
    }

    EOSLIB_SERIALIZE(
            knight,
            (owner)
            (rows)
    )
};

typedef eosio::multi_index<"knight"_n, knight> knight_table;
typedef eosio::multi_index<"sknight"_n, knight> sknight_table;
