#pragma once

#include <Parsers/ASTIndexDeclaration.h>


namespace DB
{

using IndicesASTs = std::vector<std::shared_ptr<ASTIndexDeclaration>>;

struct IndicesDescription
{
    IndicesASTs indices;

    IndicesDescription() = default;

    bool empty() const { return indices.empty(); }
    String toString() const;

    static IndicesDescription parse(const String & str);
};

}
