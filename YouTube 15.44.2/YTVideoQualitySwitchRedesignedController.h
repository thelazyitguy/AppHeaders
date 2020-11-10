//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTActionSheetControllerDelegate-Protocol.h>
#import <Module_Framework/YTHotConfigObserver-Protocol.h>
#import <Module_Framework/YTReachabilityObserver-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTSingleVideoSelectableVideoFormatsObserver-Protocol.h>
#import <Module_Framework/YTSingleVideoVideoFormatSelectionObserver-Protocol.h>
#import <Module_Framework/YTVideoQualitySwitchController-Protocol.h>

@class GIMMe, NSHashTable, NSMutableDictionary, NSOrderedSet, NSString, YTActionSheetController, YTICommand, YTInteractionLoggingProxyButton, YTUserDefaults;
@protocol YTReachabilityController, YTResponder, YTSingleVideoObservable, YTVideoQualitySwitchDelegate;

@interface YTVideoQualitySwitchRedesignedController : NSObject <YTActionSheetControllerDelegate, YTSingleVideoVideoFormatSelectionObserver, YTSingleVideoSelectableVideoFormatsObserver, YTHotConfigObserver, YTReachabilityObserver, YTResponder, YTVideoQualitySwitchController>
{
    NSHashTable *_observers;
    NSOrderedSet *_selectableQualityLabels;
    YTUserDefaults *_userDefaults;
    id <YTReachabilityController> _reachabilityController;
    YTActionSheetController *_quickMenuActionSheetController;
    YTActionSheetController *_advancedMenuActionSheetController;
    NSString *_currentFormatQualityLabel;
    NSString *_lastSelectedQualityLabel;
    int _resolutionCap;
    int _lastSelectedVideoQualitySetting;
    _Bool _lastSelectedSettingIsPersistent;
    _Bool _showingAdvancedMenu;
    _Bool _interactionLoggingEnabled;
    _Bool _deeplinkEnabled;
    _Bool _omitAdvancedMenu;
    YTICommand *_navigationEndpoint;
    YTInteractionLoggingProxyButton *_deepLinkVisualElement;
    YTInteractionLoggingProxyButton *_advancedMenuVisualElement;
    YTInteractionLoggingProxyButton *_quickMenuVisualElement;
    NSMutableDictionary *_quickMenuItemVisualElements;
    NSMutableDictionary *_advancedMenuItemVisualElements;
    id <YTSingleVideoObservable> _video;
    _Bool _allowAudioOnlyManualQualitySelection;
    _Bool _qualitySwitchAvailable;
    _Bool _qualitySwitchEnabled;
    id <YTVideoQualitySwitchDelegate> _delegate;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

+ (double)defaultDataSaverResolutionCap;
+ (double)bottomSheetPreferredHeight;
+ (double)footerViewFontSize;
+ (double)footerViewBorderHeight;
+ (double)footerViewHeight;
+ (double)headerViewHeight;
+ (double)headerFooterViewWidth;
+ (struct CGSize)headerFooterViewPadding;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTVideoQualitySwitchDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isQualitySwitchEnabled) _Bool qualitySwitchEnabled; // @synthesize qualitySwitchEnabled=_qualitySwitchEnabled;
@property(readonly, nonatomic, getter=isQualitySwitchAvailable) _Bool qualitySwitchAvailable; // @synthesize qualitySwitchAvailable=_qualitySwitchAvailable;
@property(nonatomic) _Bool allowAudioOnlyManualQualitySelection; // @synthesize allowAudioOnlyManualQualitySelection=_allowAudioOnlyManualQualitySelection;
- (void)setShowingAdvancedMenu:(_Bool)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (id)createActionSheetController;
- (id)createActionSheetActions;
- (void)attachQuickMenuItemForVideoQualitySetting:(int)arg1;
- (void)attachAdvancedMenuItemForLabel:(id)arg1;
- (id)colorPalette;
- (void)navigateToPersistentMenu;
- (id)createCustomFooterViewWithWidth;
- (id)createHeaderViewWithWidth;
- (void)showAdvancedMenu;
- (id)accessibilityIdentifierForVideoQualitySetting:(int)arg1;
- (id)accessibilityLabelForVideoQualitySetting:(int)arg1;
- (id)subtitleStringForVideoQualitySetting:(int)arg1;
- (id)abbreviatedTitleStringForVideoQualitySetting:(int)arg1;
- (id)titleStringForVideoQualitySetting:(int)arg1;
- (id)actionWithTitle:(id)arg1 subtitle:(id)arg2 qualityLabel:(id)arg3 accessibilityLabel:(id)arg4 accessibilityIdentfier:(id)arg5 videoQualitySetting:(int)arg6 proxyButton:(id)arg7 selected:(_Bool)arg8;
- (id)actionWithVideoQualitySetting:(int)arg1;
- (id)actionWithQualityLabel:(id)arg1;
- (_Bool)isAdvancedMenuQualitySetting:(int)arg1;
- (_Bool)canSelectFormat:(id)arg1;
- (void)updateAvailabilityState;
- (id)toastMessageForVideoQualitySetting:(int)arg1;
- (id)constraintForVideoQualitySetting:(int)arg1;
- (void)setSelectedVideoQualitySetting:(int)arg1 withQualityLabel:(id)arg2 toastEnabled:(_Bool)arg3;
- (_Bool)shouldDisplayAdvancedMenuActionSheet;
- (_Bool)shouldDisplayQuickMenuActionSheet;
- (void)setCurrentlySelectedFormat:(id)arg1;
- (void)setUserSelectableFormats:(id)arg1;
- (void)reachabilityDidChange;
- (void)singleVideo:(id)arg1 selectableVideoFormatsDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 didSelectVideoFormat:(id)arg2;
- (void)hotConfigDidChange:(id)arg1;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)removeUIObserver:(id)arg1;
- (void)addUIObserver:(id)arg1;
- (void)showMenuFromView:(id)arg1;
- (void)reset;
- (id)selectedVideoQualityLabelText;
- (void)setActiveVideo:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

