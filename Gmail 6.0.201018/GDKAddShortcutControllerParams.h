//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKFolderColorPalette, GDKTheme, NSString;
@protocol SSOIdentity;

@interface GDKAddShortcutControllerParams : NSObject
{
    _Bool _dynamicTypeEnabled_18;
    _Bool _refactoredSearchControllerEnabled_33;
    _Bool _autoPurgingMessagingEnabled_27;
    id <SSOIdentity> _userIdentity_12;
    GDKFolderColorPalette *_folderColorPalette_18;
    NSString *_searchPlaceholderText_21;
    GDKTheme *_theme_5;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme_5;
@property(readonly, nonatomic) _Bool autoPurgingMessagingEnabled; // @synthesize autoPurgingMessagingEnabled=_autoPurgingMessagingEnabled_27;
@property(readonly, nonatomic) _Bool refactoredSearchControllerEnabled; // @synthesize refactoredSearchControllerEnabled=_refactoredSearchControllerEnabled_33;
@property(readonly, nonatomic) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled_18;
@property(readonly, copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText_21;
@property(readonly, nonatomic) GDKFolderColorPalette *folderColorPalette; // @synthesize folderColorPalette=_folderColorPalette_18;
@property(readonly, nonatomic) id <SSOIdentity> userIdentity; // @synthesize userIdentity=_userIdentity_12;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithUserIdentity:(id)arg1 folderColorPalette:(id)arg2 searchPlaceholderText:(id)arg3 dynamicTypeEnabled:(_Bool)arg4 refactoredSearchControllerEnabled:(_Bool)arg5 autoPurgingMessagingEnabled:(_Bool)arg6 theme:(id)arg7;

@end
