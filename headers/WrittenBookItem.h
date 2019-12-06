#pragma once

class WrittenBookItem : Item {

public:
    static long WrittenBookItem::MAX_TITLE_LENGTH;
    static long WrittenBookItem::MAX_PAGE_LENGTH;
    static long WrittenBookItem::MAX_PAGES;
    static long WrittenBookItem::MAX_GENERATION;
    static long WrittenBookItem::TAG_TITLE;
    static long WrittenBookItem::TAG_AUTHOR;
    static long WrittenBookItem::TAG_XUID;
    static long WrittenBookItem::TAG_PAGES;
    static long WrittenBookItem::TAG_PAGE_TEXT;
    static long WrittenBookItem::TAG_GENERATION;
    static long WrittenBookItem::TAG_RESOLVED;
    static long WrittenBookItem::TAG_PAGE_PHOTO_NAME;
    static long WrittenBookItem::TAG_ID;

    virtual ~WrittenBookItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void requiresInteract(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void use(ItemStack &, Player &)const;

    void WrittenBookItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void makeSureTagIsValid(CompoundTag const&);
    void getPages(ItemStack const&);
    void getPageCount(ItemStack const&);
    void getPageCountByType(ItemStack const&);
    void getGeneration(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    bool canBeCopied(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void resolvedBookComponents(ItemStack const&, Player const&);
};
