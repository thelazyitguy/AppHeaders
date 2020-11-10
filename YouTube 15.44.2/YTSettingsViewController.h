//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import "YTAppSettingsSectionItemDataDelegate-Protocol.h"
#import "YTAppSettingsViewControllerDelegate-Protocol.h"
#import "YTFusedSettingsServiceSessionDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTNavigationControllerDelegate-Protocol.h"
#import "YTScreenGraftViewController-Protocol.h"
#import "YTSearchHistoryStatusObserver-Protocol.h"
#import "YTWatchHistoryStatusObserver-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString, YTAppSettingsSectionItemActionController, YTCollectionViewController, YTFusedSettingsService, YTICommand, YTPageStyleController, YTSearchableSettingsViewController, YTSettingsSectionController;
@protocol UIGestureRecognizerDelegate, YTResponder;

@interface YTSettingsViewController : YTStyledViewController <YTFusedSettingsServiceSessionDelegate, YTNavigationControllerDelegate, YTAppSettingsSectionItemDataDelegate, YTAppSettingsViewControllerDelegate, YTSearchHistoryStatusObserver, YTWatchHistoryStatusObserver, YTScreenGraftViewController, YTGraftingViewController>
{
    YTCollectionViewController *_collectionViewController;
    NSMutableDictionary *_settingsSectionControllers;
    NSString *_settingsToken;
    _Bool _openedSubmenu;
    _Bool _shouldRefreshOnExit;
    YTFusedSettingsService *_fusedSettingsService;
    YTAppSettingsSectionItemActionController *_sectionItemActionController;
    YTPageStyleController *_pageStyleController;
    unsigned long long _categoryToScrollTo;
    YTSettingsSectionController *_sectionControllerToScrollTo;
    YTSettingsSectionController *_offlineController;
    YTSearchableSettingsViewController *_searchableSettingsViewController;
    _Bool _isFixSwipeBackNavigationEnabled;
    _Bool _shouldShowSearchBar;
    id <YTResponder> _parentResponder;
    YTICommand *_navEndpoint;
    id <UIGestureRecognizerDelegate> _existingInteractivePopGestureRecognizerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> existingInteractivePopGestureRecognizerDelegate; // @synthesize existingInteractivePopGestureRecognizerDelegate=_existingInteractivePopGestureRecognizerDelegate;
@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
- (id)parentResponder;
- (void)didReceiveDrillDownItem:(id)arg1;
- (id)settingsToken;
- (void)setSectionControllers;
- (void)updateSectionForCategory:(unsigned long long)arg1 withEntry:(id)arg2;
- (void)setHasOfflineContent:(_Bool)arg1;
- (void)showSettingsTextFieldWithNavTitle:(id)arg1 textTitle:(id)arg2 text:(id)arg3 textChangeBlock:(CDUnknownBlockType)arg4;
- (void)enumerateSectionControllersWithBlock:(CDUnknownBlockType)arg1;
- (id)collectionViewController;
- (void)dismiss;
- (void)maybeSendRefreshRequest;
- (void)handleAppSettingChange:(id)arg1;
- (void)navigationControllerWasDismissed;
- (void)setupInteractionLoggingHandlersAtResponder:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)relogScreen;
- (void)watchHistoryPauseStatusDidChange;
- (void)searchHistoryStatusDidChange;
- (void)updateDebugAndQASections:(unsigned long long)arg1 withEntry:(id)arg2;
- (void)reloadData;
- (void)removeSectionControllerForSettingCategory:(unsigned long long)arg1;
- (void)setSectionItems:(id)arg1 forCategory:(unsigned long long)arg2 title:(id)arg3 titleDescription:(id)arg4 headerHidden:(_Bool)arg5;
- (void)updateSettings:(int)arg1 withServerSideSwitch:(unsigned long long)arg2;
- (void)updateSettingsNavigationBarPageStyle;
- (void)setShouldRefreshOnExit:(_Bool)arg1;
- (void)pushViewController:(id)arg1;
- (id)settingsView;
- (id)settings;
- (void)showSettingsPickerWithNavTitle:(id)arg1 pickerSectionTitle:(id)arg2 items:(id)arg3 selectedItemIndex:(unsigned long long)arg4 selectBlock:(CDUnknownBlockType)arg5;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)settingsSectionControllers;
- (void)viewDidLoad;
- (id)startSession;
- (void)loadView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

