// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SYNX_INVALID_OUTPOINTS_JSON_H
#define SYNX_INVALID_OUTPOINTS_JSON_H
#include <string>

std::string LoadInvalidOutPoints()
{
    std::string str = "[\n"
            "]";
    return str;
}

#endif //SYNX_INVALID_OUTPOINTS_JSON_H
