/*
 *   AviTab - Aviator's Virtual Tablet
 *   Copyright (C) 2018 Folke Will <folko@solhost.org>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Affero General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Affero General Public License for more details.
 *
 *   You should have received a copy of the GNU Affero General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef SRC_LIBXDATA_WORLD_MODELS_AIRWAY_H_
#define SRC_LIBXDATA_WORLD_MODELS_AIRWAY_H_

#include <string>
#include "src/libxdata/world/graph/NavEdge.h"

namespace xdata {

class Airway: public NavEdge {
public:
    Airway(const std::string &name, AirwayLevel lvl);
    const std::string &getID() const override;
    bool supportsLevel(AirwayLevel level) const override;
    AirwayLevel getLevel() const;
    bool isProcedure() const override;

private:
    std::string name;
    AirwayLevel level;
};

} /* namespace xdata */

#endif /* SRC_LIBXDATA_WORLD_MODELS_AIRWAY_H_ */
