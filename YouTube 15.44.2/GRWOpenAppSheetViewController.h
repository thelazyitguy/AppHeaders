//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MDCCollectionViewController.h>

#import <Module_Framework/GRWDismissablePresentedViewController-Protocol.h>
#import <Module_Framework/MDCBottomSheetPresentationControllerDelegate-Protocol.h>
#import <Module_Framework/UICollectionViewDataSource-Protocol.h>

@class GRWAppSwitchingScenario, GRWAppWatchdogManager, MDCBottomSheetTransitionController, NSArray, NSString;

@interface GRWOpenAppSheetViewController : MDCCollectionViewController <UICollectionViewDataSource, MDCBottomSheetPresentationControllerDelegate, GRWDismissablePresentedViewController>
{
    _Bool _shouldPromptSwitchValue;
    _Bool _initialShouldPromptSwitchValue;
    GRWAppSwitchingScenario *_scenario;
    CDUnknownBlockType _completion;
    GRWAppWatchdogManager *_appWatchdogManager;
    long long _installSource;
    MDCBottomSheetTransitionController *_transitionController;
    NSArray *_sortedPromptedApps;
}

+ (void)presentBottomSheetWithScenario:(id)arg1 inViewController:(id)arg2 withShouldPromptSwitchValue:(_Bool)arg3 installSource:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sortedPromptedApps; // @synthesize sortedPromptedApps=_sortedPromptedApps;
@property(retain, nonatomic) MDCBottomSheetTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(nonatomic) long long installSource; // @synthesize installSource=_installSource;
@property(retain, nonatomic) GRWAppWatchdogManager *appWatchdogManager; // @synthesize appWatchdogManager=_appWatchdogManager;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool initialShouldPromptSwitchValue; // @synthesize initialShouldPromptSwitchValue=_initialShouldPromptSwitchValue;
@property(nonatomic) _Bool shouldPromptSwitchValue; // @synthesize shouldPromptSwitchValue=_shouldPromptSwitchValue;
@property(retain, nonatomic) GRWAppSwitchingScenario *scenario; // @synthesize scenario=_scenario;
- (void)appStatusChanged:(id)arg1;
- (void)applicationWillEnterForeground;
- (_Bool)shouldShowSwitch;
- (id)appForIndexPath:(id)arg1;
- (void)grw_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bottomSheetPresentationControllerDidDismissBottomSheet:(id)arg1;
- (double)collectionView:(id)arg1 cellHeightAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHideFooterSeparatorForSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHideHeaderSeparatorForSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHideItemSeparatorAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)bottomSheetDismissed;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)closeBottomSheetController;
- (void)closeBottomSheetControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)accessibilityPerformEscape;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applyStyleColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (struct CGSize)preferredContentSize;
- (void)dealloc;
- (void)setupSheetViewWithScenario:(id)arg1 withShouldPromptSwitchValue:(_Bool)arg2 installSource:(long long)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

