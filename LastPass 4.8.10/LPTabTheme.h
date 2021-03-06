//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont, UIImage;

@interface LPTabTheme : NSObject
{
    UIImage *_vaultMenuImage;
    UIImage *_generatePasswordMenuImage;
    UIImage *_checkMenuImage;
    UIImage *_addMenuImage;
    UIImage *_addTabImage;
    UIImage *_copyImage;
    UIImage *_copyUsernameImage;
    UIImage *_copyPasswordImage;
    UIImage *_showPasswordImage;
    UIImage *_hidePasswordImage;
    UIImage *_loggedInToolbarImage;
    UIImage *_loggedOutToolbarImage;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (void)applyAppearanceToToggleButton:(id)arg1;
- (void)applyCreateAccountAppearanceToButton:(id)arg1;
- (void)applyLoginAppearanceToButton:(id)arg1;
- (id)invertColorOfImage:(id)arg1;
- (id)imitationTableViewCellBackgroundImageWithSeparatorEdges:(unsigned long long)arg1;
- (id)circleBorderWithDropShadowForImage:(id)arg1 radius:(double)arg2 color:(id)arg3;
- (id)circleBorderWithDropShadowForImage:(id)arg1 color:(id)arg2;
- (id)circleBorderWithDropShadowForImage:(id)arg1;
- (id)maskImage:(id)arg1 withMask:(id)arg2;
- (id)imageAsGrayscaleImage:(id)arg1;
- (id)colorForScore:(float)arg1;
- (id)logoCoverImageForOrientation:(long long)arg1;
- (id)plusTabImageForSize:(struct CGSize)arg1 color:(id)arg2;
- (id)plusTabImageForSize:(struct CGSize)arg1;
- (id)toolbarImageForTabCount:(unsigned long long)arg1 color:(id)arg2;
- (id)drawActionButtonImageOfSize:(struct CGSize)arg1 drawFunction:(CDUnknownFunctionPointerType)arg2;
- (id)drawFavoritesImageOfSize:(struct CGSize)arg1 drawFunction:(CDUnknownFunctionPointerType)arg2;
- (id)drawViewEditImageOfSize:(struct CGSize)arg1 drawFunction:(CDUnknownFunctionPointerType)arg2;
- (id)drawMenuImageOfSize:(struct CGSize)arg1 drawFunction:(CDUnknownFunctionPointerType)arg2;
- (id)drawMaskImageOfSize:(struct CGSize)arg1 drawFunction:(CDUnknownFunctionPointerType)arg2;
- (id)drawImageOfSize:(struct CGSize)arg1 color:(id)arg2 drawFunction:(CDUnknownFunctionPointerType)arg3;
- (id)imageOfArrowWithDirectionRight:(_Bool)arg1;
- (id)imageOfArrowInCircleWithDirectionRight:(_Bool)arg1;
- (id)imageOfSize:(struct CGSize)arg1 image:(id)arg2;
- (id)solidColorImageOfSize:(struct CGSize)arg1 color:(id)arg2;
@property(readonly, nonatomic) UIColor *IAVaultBackgroundColor;
@property(readonly, nonatomic) UIColor *iOSButtonRedColor;
@property(readonly, nonatomic) UIColor *iOSButtonBlueColor;
@property(readonly, nonatomic) UIImage *imitationTableViewCellBackgroundImage;
@property(readonly, nonatomic) UIImage *overlayArrowUpRight;
@property(readonly, nonatomic) UIImage *overlayArrowUpLeft;
@property(readonly, nonatomic) UIImage *overlayArrowRight;
@property(readonly, nonatomic) UIImage *overlayArrowLeft;
@property(readonly, nonatomic) UIImage *overlayArrowUp;
@property(readonly, nonatomic) UIImage *formFillsActionButtonImage;
@property(readonly, nonatomic) UIImage *notesActionButtonImage;
@property(readonly, nonatomic) UIImage *sitesActionButtonImage;
@property(readonly, nonatomic) UIImage *actionButtonImage;
@property(readonly, nonatomic) UIImage *addFormFillImage;
@property(readonly, nonatomic) UIImage *addNoteImage;
@property(readonly, nonatomic) UIImage *historyArrowImage;
@property(readonly, nonatomic) UIImage *searchGlassImage;
@property(readonly, nonatomic) UIImage *createAccountButtonImage;
@property(readonly, nonatomic) UIImage *loginButtonImage;
@property(readonly, nonatomic) UIImage *deleteImage;
@property(readonly, nonatomic) UIImage *copyPasswordImage;
@property(readonly, nonatomic) UIImage *copyUsernameImage;
@property(readonly, nonatomic) UIImage *hidePasswordImage;
@property(readonly, nonatomic) UIImage *showPasswordImage;
@property(readonly, nonatomic) UIImage *copyImage;
@property(readonly, nonatomic) UIImage *addSiteImage;
@property(readonly, nonatomic) UIImage *addTabImage;
@property(readonly, nonatomic) UIImage *addMenuImage;
@property(readonly, nonatomic) UIImage *checkMenuImage;
@property(readonly, nonatomic) UIImage *matchingSitesMenuImage;
@property(readonly, nonatomic) UIImage *securityChallengeMenuImage;
@property(readonly, nonatomic) UIImage *logoffMenuImage;
@property(readonly, nonatomic) UIImage *loginMenuImage;
@property(readonly, nonatomic) UIImage *emergencyMenuImage;
@property(readonly, nonatomic) UIImage *premiumMenuImage;
@property(readonly, nonatomic) UIImage *toolsMenuImage;
@property(readonly, nonatomic) UIImage *settingsMenuImage;
@property(readonly, nonatomic) UIImage *remindersMenuImage;
@property(readonly, nonatomic) UIImage *geneatePasswordMenuImage;
@property(readonly, nonatomic) UIImage *formFillsMenuImage;
@property(readonly, nonatomic) UIImage *notesMenuImage;
@property(readonly, nonatomic) UIImage *sitesMenuImage;
@property(readonly, nonatomic) UIImage *vaultMenuImage;
@property(readonly, nonatomic) UIImage *rightArrowToolbarImage;
@property(readonly, nonatomic) UIImage *leftArrowToolbarImage;
@property(readonly, nonatomic) UIImage *menuIconLoggedOutToolbarImage;
@property(readonly, nonatomic) UIImage *menuIconLoggedInToolbarImage;
@property(readonly, nonatomic) UIImage *menuIconToolbarImage;
@property(readonly, nonatomic) UIColor *overlayTextColor;
@property(readonly, nonatomic) UIColor *overlayBackgroundColor;
@property(readonly, nonatomic) UIColor *menuIconColor;
@property(readonly, nonatomic) UIColor *useTouchIdLineColor;
@property(readonly, nonatomic) UIColor *useTouchIdBoxColor;
@property(readonly, nonatomic) UIColor *viewEditIconColor;
@property(readonly, nonatomic) UIColor *loginBoxBorderColor;
@property(readonly, nonatomic) UIColor *loginBoxBackgroundColor;
@property(readonly, nonatomic) long long actionSheetStyle;
@property(readonly, nonatomic) UIColor *vaultHeaderTextColor;
@property(readonly, nonatomic) UIColor *vaultHeaderBackgroundColor;
@property(readonly, nonatomic) UIColor *navigationBarTextColor;
@property(readonly, nonatomic) UIColor *navigationBarBackgroundColor;
@property(readonly, nonatomic) long long navigationBarStyle;
@property(readonly, nonatomic) UIColor *tabBarForegroundColor;
@property(readonly, nonatomic) UIColor *tabBarBackgroundColor;
@property(readonly, nonatomic) UIColor *bottomToolbarIconColor;
@property(readonly, nonatomic) UIColor *bottomToolbarTextColor;
@property(readonly, nonatomic) UIColor *bottomToolbarBackgroundColor;
@property(readonly, nonatomic) long long bottomToolbarStyle;
@property(readonly, nonatomic) UIColor *topToolbarIconColor;
@property(readonly, nonatomic) UIColor *topToolbarMessageTextColor;
@property(readonly, nonatomic) UIColor *topToolbarTextColor;
@property(readonly, nonatomic) UIColor *topToolbarMessageBackgroundColor;
@property(readonly, nonatomic) UIColor *topToolbarBackgroundColor;
@property(readonly, nonatomic) UIColor *vaultTabIconColor;
@property(readonly, nonatomic) UIColor *switchBackground;
@property(readonly, nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) UIColor *controlBackgroundColor;
- (id)oldLastPassRedColor;
@property(readonly, nonatomic) UIColor *lastPassCoolGreyColor;
- (id)lastPassGrayColor;
@property(readonly, nonatomic) UIColor *lastPassRedColor;
@property(readonly, nonatomic) UIFont *tableDetailFont;
@property(readonly, nonatomic) UIFont *tableFont;

@end

