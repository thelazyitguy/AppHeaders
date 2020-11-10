//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/QTMCollectionViewController.h>

#import <Module_Framework/GHKArticleWebViewControllerDelegate-Protocol.h>
#import <Module_Framework/GHKNativeEmailContactFormViewControllerDelegate-Protocol.h>
#import <Module_Framework/QTMCollectionViewModelDelegate-Protocol.h>
#import <Module_Framework/SUPActivityIndicationViewDelegate-Protocol.h>

@class GHKConfig, GHKOfflineBundleManager, GHKReceiverConfig, GHKSessionDataManager, GHKURLOpener, GHKUserStates, MDCAppBar, NSString, SUPActionManager, SUPActivityIndicationView, SUPMetricsReporter, SUPSupportContentService, SUPSupportContentUnit;

@interface GHKBaseViewController : QTMCollectionViewController <GHKArticleWebViewControllerDelegate, GHKNativeEmailContactFormViewControllerDelegate, QTMCollectionViewModelDelegate, SUPActivityIndicationViewDelegate>
{
    _Bool _isActive;
    _Bool _isCurrentUIPortrait;
    MDCAppBar *_appBar;
    SUPActionManager *_actionManager;
    GHKConfig *_config;
    SUPSupportContentService *_contentService;
    SUPMetricsReporter *_metricsReporter;
    GHKOfflineBundleManager *_offlineBundleManager;
    GHKReceiverConfig *_receiverConfig;
    GHKSessionDataManager *_sessionDataManager;
    GHKURLOpener *_URLOpener;
    GHKUserStates *_userStates;
    SUPActivityIndicationView *_activityIndicationView;
    SUPSupportContentUnit *_activeSupportContentUnitRequest;
}

+ (id)objectionRequires;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCurrentUIPortrait; // @synthesize isCurrentUIPortrait=_isCurrentUIPortrait;
@property(retain, nonatomic) SUPSupportContentUnit *activeSupportContentUnitRequest; // @synthesize activeSupportContentUnitRequest=_activeSupportContentUnitRequest;
@property(retain, nonatomic) SUPActivityIndicationView *activityIndicationView; // @synthesize activityIndicationView=_activityIndicationView;
@property(retain, nonatomic) GHKUserStates *userStates; // @synthesize userStates=_userStates;
@property(retain, nonatomic) GHKURLOpener *URLOpener; // @synthesize URLOpener=_URLOpener;
@property(retain, nonatomic) GHKSessionDataManager *sessionDataManager; // @synthesize sessionDataManager=_sessionDataManager;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) GHKOfflineBundleManager *offlineBundleManager; // @synthesize offlineBundleManager=_offlineBundleManager;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) SUPSupportContentService *contentService; // @synthesize contentService=_contentService;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) SUPActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) MDCAppBar *appBar; // @synthesize appBar=_appBar;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapCancelButton;
- (void)webViewCancelDeepLinkNavigation;
- (void)webViewDeepLinkNavigateToURL:(id)arg1 oldURL:(id)arg2;
- (void)nativeEmailContactFormViewControllerQuickExit:(unsigned long long)arg1 exitStatus:(long long)arg2;
- (id)previousViewController;
- (void)cancelDisplayOfHelpContent;
- (void)handleWebViewLinkClicked:(id)arg1 oldURL:(id)arg2;
- (void)onOrientationChanged;
- (id)viewForWhiteOut;
- (void)openNativeEmailContactFormViewControllerWithTitle:(id)arg1;
- (void)prefetchRenderedContent:(id)arg1 cacheStorageType:(long long)arg2;
- (void)showHelpUnit:(id)arg1 cacheStorageType:(long long)arg2;
- (void)showHelpContent:(id)arg1 titleOverride:(id)arg2 cacheStorageType:(long long)arg3 userState:(unsigned long long)arg4 callback:(CDUnknownBlockType)arg5;
- (void)executeUrlNavigationAction:(id)arg1;
- (void)executeCustomAction:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

