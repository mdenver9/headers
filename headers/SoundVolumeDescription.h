#pragma once

class SoundVolumeDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void SoundVolumeDescription::~SoundVolumeDescription();
    virtual void SoundVolumeDescription::~SoundVolumeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}