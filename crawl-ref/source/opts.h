class option_list
{
public:
    option_list(bool _calc_unid, bool _items = true, bool _transformations = true,
                bool _mutations = true, bool _spells = true, bool _potions = true, 
                bool _gods = true, bool _temp = true, bool _random = true)
    {
        calc_unid = _calc_unid;
        items = _items;
        transformations = _transformations;
        mutations = _mutations;
        spells = _spells;
        potions = _potions;
        gods = _gods;
        temp = _temp;
        random = _random;
    }
    option_list() {
        calc_unid = true;
        items = true;
        transformations = true;
        mutations = true;
        spells = true;
        potions = true;
        gods = true;
        temp = true;
        random = true;
    }
    bool calc_unid;
    bool items;
    bool transformations;
    bool mutations;
    bool spells;
    bool potions;
    bool gods;
    bool temp;
    bool random;
};