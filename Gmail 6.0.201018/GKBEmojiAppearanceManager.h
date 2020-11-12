//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKBArtDatabase, GKBEmojiUserDefaults, NSMutableDictionary, NSURL;

@interface GKBEmojiAppearanceManager : NSObject
{
    GKBArtDatabase *_artDatabase;
    NSURL *_localAssetDirectory;
    GKBEmojiUserDefaults *_emojiUserDefaults;
    NSMutableDictionary *_lastUsedEmojiVariations;
}

+ (id)compactEmojiAssetFont;
+ (id)emojiAssetFont;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *lastUsedEmojiVariations; // @synthesize lastUsedEmojiVariations=_lastUsedEmojiVariations;
@property(retain, nonatomic) GKBEmojiUserDefaults *emojiUserDefaults; // @synthesize emojiUserDefaults=_emojiUserDefaults;
- (_Bool)shouldCreateNewEmojiAssets;
- (id)destinationForFileName:(id)arg1;
- (id)destinationForEmojiString:(id)arg1;
- (id)destinationForCodepoint:(id)arg1;
- (void)createAllAssets;
- (void)purgeEmojis;
- (void)deleteOldEmojisIfNecessary;
- (id)createEmojiPNGForEmoji:(id)arg1;
- (id)emojiPNGForEmojiString:(id)arg1;
- (id)emojiPNGForCodepoint:(id)arg1;
- (void)setLastUsedVariationEmoji:(id)arg1 forCanonicalEmoji:(id)arg2;
- (id)lastUsedVariationEmojiForCanonicalEmoji:(id)arg1;
- (void)createAssetsWithArtDatabase:(id)arg1;
@property(retain, nonatomic) NSURL *localAssetDirectory; // @synthesize localAssetDirectory=_localAssetDirectory;
- (id)initPrivate;

@end
