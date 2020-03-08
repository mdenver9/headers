#pragma once

#include "../../../../unmapped/BlockSource"
#include "../../../../unmapped/LegacyStructureTemplate"


class TemplateStructurePiece : StructurePiece {

public:
    virtual TemplateStructurePiece::~TemplateStructurePiece();
    virtual void moveBoundingBox(int, int, int);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    TemplateStructurePiece(int);
    void _setup(LegacyStructureTemplate &, LegacyStructureSettings const&, BlockPos const&);
    void _setBoundingBoxFromTemplate(void);
    void getTemplatePosition(void)const;
    void getTemplate(void)const;
    void getSettings(void)const;
};
