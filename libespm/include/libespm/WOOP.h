#pragma once
#include "RecordHeader.h"
#include <string>
#include <vector>

#pragma pack(push, 1)

namespace espm {

class WOOP final : public RecordHeader
{
public:
  static constexpr auto kType = "WOOP";

  struct Data
  {
    std::string editorId;
    std::vector<std::string> translations;
  };

  Data GetData(CompressedFieldsCache& compressedFieldsCache) const;
};

static_assert(sizeof(WOOP) == sizeof(RecordHeader));

}

#pragma pack(pop)
