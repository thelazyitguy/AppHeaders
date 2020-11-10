//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditStickerDataProviderImpl.h>

@class GIMMe, NSMutableArray, YTIUnicodeEmojiStickerPageRenderer;

@interface YTEditStickerEmojiProvider : YTEditStickerDataProviderImpl
{
    YTIUnicodeEmojiStickerPageRenderer *_renderer;
    unsigned long long _numColumns;
    NSMutableArray *_emojiList;
    struct CGSize _stickerSize;
    NSMutableArray *_stickerList;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)emojiModelFromString:(id)arg1 withVariations:(id)arg2 forStickerSize:(struct CGSize)arg3;
- (long long)stickerIndex:(id)arg1;
- (long long)dataProviderPageSource;
- (id)stickerForIndex:(long long)arg1;
- (void)prepareStickerViewModelFromEmojiList:(id)arg1;
- (unsigned long long)stickerCount;
- (void)loadStickersDataWithStickerSize:(struct CGSize)arg1;
- (id)initWithRenderer:(id)arg1;

@end
