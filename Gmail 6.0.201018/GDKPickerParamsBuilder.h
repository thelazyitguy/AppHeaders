//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKFolderColorPalette, GDKPickerTypeParams, GDKTheme, NSString;
@protocol SSOIdentity;

@interface GDKPickerParamsBuilder : NSObject
{
    _Bool _dynamicTypeEnabled;
    _Bool _shortcutUpgradeWarningEnabled;
    _Bool _refactoredSearchControllerEnabled;
    _Bool _allowShareDateSort;
    _Bool _autoPurgingMessagingEnabled;
    _Bool _searchPlaceholderText_hazzer;
    _Bool _theme_hazzer;
    NSString *_searchPlaceholderText_21;
    GDKTheme *_theme_5;
    GDKPickerTypeParams *_typeParams;
    GDKFolderColorPalette *_folderColorPalette;
    id <SSOIdentity> _userIdentity;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithTypeParams:(id)arg1 userIdentity:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool theme_hazzer; // @synthesize theme_hazzer=_theme_hazzer;
@property(nonatomic) _Bool searchPlaceholderText_hazzer; // @synthesize searchPlaceholderText_hazzer=_searchPlaceholderText_hazzer;
@property(nonatomic) _Bool autoPurgingMessagingEnabled; // @synthesize autoPurgingMessagingEnabled=_autoPurgingMessagingEnabled;
@property(nonatomic) _Bool allowShareDateSort; // @synthesize allowShareDateSort=_allowShareDateSort;
@property(nonatomic) _Bool refactoredSearchControllerEnabled; // @synthesize refactoredSearchControllerEnabled=_refactoredSearchControllerEnabled;
@property(nonatomic) _Bool shortcutUpgradeWarningEnabled; // @synthesize shortcutUpgradeWarningEnabled=_shortcutUpgradeWarningEnabled;
@property(nonatomic) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled;
@property(retain, nonatomic) id <SSOIdentity> userIdentity; // @synthesize userIdentity=_userIdentity;
@property(retain, nonatomic) GDKFolderColorPalette *folderColorPalette; // @synthesize folderColorPalette=_folderColorPalette;
@property(retain, nonatomic) GDKPickerTypeParams *typeParams; // @synthesize typeParams=_typeParams;
- (id)build;
@property(retain, nonatomic) GDKTheme *theme; // @synthesize theme=_theme_5;
@property(copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText_21;

@end
