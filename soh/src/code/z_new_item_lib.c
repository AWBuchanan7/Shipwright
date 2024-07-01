/*
 * File: z_new_item_lib.c
 * Description: New Item lib functions.
 * Credit to inspectredc @ https://github.com/inspectredc/Shipwright
 */

#include "global.h"
#include "objects/gameplay_keep/gameplay_keep.h"
#include "objects/gameplay_field_keep/gameplay_field_keep.h"
#include "overlays/actors/ovl_Demo_Effect/z_demo_effect.h"
#include "overlays/actors/ovl_En_Arrow/z_en_arrow.h"

#include "soh/Enhancements/game-interactor/GameInteractor.h"


bool NewItem_IsActionParamBoots(s16 actionParam) {
    return (actionParam >= PLAYER_IA_BOOTS_KOKIRI && actionParam <= PLAYER_IA_BOOTS_HOVER);
}

bool NewItem_IsActionParamTunic(s16 actionParam) {
    return (actionParam >= PLAYER_IA_TUNIC_KOKIRI && actionParam <= PLAYER_IA_TUNIC_GORON);
}

bool NewItem_IsActionParamShield(s16 actionParam) {
    return (actionParam >= PLAYER_IA_SHIELD_DEKU && actionParam <= PLAYER_IA_SHIELD_MIRROR);
}

bool NewItem_IsActionParamEquipment(s16 actionParam) {
    return NewItem_IsActionParamBoots(actionParam) || NewItem_IsActionParamTunic(actionParam) || NewItem_IsActionParamShield(actionParam);
}

bool NewItem_IsActionParamMagicSpell(s16 actionParam) {
    return ((actionParam >= PLAYER_IA_MAGIC_SPELL_15 && actionParam <= PLAYER_IA_DINS_FIRE));
}

bool NewItem_IsActionParamOcarina(s16 actionParam) {
    return (actionParam == PLAYER_IA_OCARINA_FAIRY || actionParam == PLAYER_IA_OCARINA_OF_TIME);
}

bool NewItem_IsActionParamBottledItem(s16 actionParam) {
    return (actionParam >= PLAYER_IA_BOTTLE_FISH && actionParam <= PLAYER_IA_BOTTLE_FAIRY);
}

bool NewItem_IsActionParamBottledSellable(s16 actionParam) {
    return (actionParam >= PLAYER_IA_BOTTLE_FISH && actionParam <= PLAYER_IA_BOTTLE_RUTOS_LETTER);
}

bool NewItem_IsActionParamBottledConsumable(s16 actionParam) {
    return (actionParam >= PLAYER_IA_BOTTLE_POTION_RED && actionParam <= PLAYER_IA_BOTTLE_FAIRY);
}

bool NewItem_IsActionParamMask(s16 actionParam) {
    return ((actionParam >= PLAYER_IA_MASK_KEATON && actionParam <= PLAYER_IA_MASK_TRUTH));
}