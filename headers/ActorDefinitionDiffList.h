#pragma once

class ActorDefinitionDiffList {

public:

    void ActorDefinitionDiffList(ActorDefinitionGroup &);
    void addDefinition(std::string const&);
    void addDefinition(ActorDefinitionPtr &);
    void _updateStack(void);
    void removeDefinition(std::string const&);
    void removeDefinition(ActorDefinitionPtr &);
    bool hasDefinition(std::string const&)const;
    void clearDefinitions(void);
    void clearChangedDescription(void);
    void getDefinitionStack(void)const;
    void setDefinitionStack(std::vector<std::pair<bool, ActorDefinitionPtr>, std::allocator<std::pair<bool, ActorDefinitionPtr>>> &);
    void buildAdditiveDescriptionFrom(unsigned long, unsigned long);
    void getDescription(bool);
    void _getDescriptionFrom(unsigned long, unsigned long);
    void getChangedDescription(void);
    void getAddedDefinitionGroup(void)const;
    void getRemovedDefinitionGroup(void)const;
    bool hasChanged(void)const;
    void size(void)const;
    void definitionListToString(std::string const&)const;
    void forEachComponentGroup(std::function<bool ()(bool, ActorDefinitionPtr)>);
    void buildDescriptionFrom(unsigned long, unsigned long);
};
