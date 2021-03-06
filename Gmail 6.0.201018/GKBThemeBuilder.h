//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKBKeyboardThemeDef, NSString;

@interface GKBThemeBuilder : NSObject
{
    NSString *_currentThemeID;
    GKBKeyboardThemeDef *_currentTheme;
    GKBKeyboardThemeDef *_defaultTheme;
    GKBKeyboardThemeDef *_darkTheme;
    _Bool _shouldShowPreview;
    _Bool _shouldShowDarkTheme;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowDarkTheme; // @synthesize shouldShowDarkTheme=_shouldShowDarkTheme;
@property(nonatomic) _Bool shouldShowPreview; // @synthesize shouldShowPreview=_shouldShowPreview;
- (void)modifyBackgroundTranslucency:(_Bool)arg1;
- (void)modifyBackgroundTranslucencyIfNecessary;
- (id)themeDefinitionForId:(id)arg1;
- (id)loadDefFromFile:(id)arg1;
- (_Bool)shouldAutoSwitchToDarkTheme:(id)arg1;
- (void)resetTheme;
- (id)defaultTheme;
- (id)previewTheme;
@property(readonly, nonatomic) NSString *currentThemeID;
@property(readonly, nonatomic) GKBKeyboardThemeDef *currentTheme;

@end

