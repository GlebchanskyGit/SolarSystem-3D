#ifndef SOLARSYSTEM_VENUS_H
#define SOLARSYSTEM_VENUS_H
#include "../Planet.h"

class Venus : public Planet {
public:
    explicit Venus(const PlanetInfo& planetInfo, std::shared_ptr<Star> parentStar);
    void AdjustToParent(bool isRunTime) override;
    void Render() const override;

private:
    std::vector<TextureImage2D> _diffuses;
    TextureImage2D _normalMap;
};

#endif //SOLARSYSTEM_VENUS_H
