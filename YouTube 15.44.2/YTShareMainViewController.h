//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTFormattedStringLabelDelegate-Protocol.h>
#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTResponseViewController-Protocol.h>
#import <Module_Framework/YTShareCommunityPostViewDelegate-Protocol.h>
#import <Module_Framework/YTShareContentViewControllerDelegate-Protocol.h>
#import <Module_Framework/YTSharePanelPromoViewControllerDelegate-Protocol.h>

@class GIMMe, NSString, YTIUnifiedSharePanelRenderer, YTShareContentViewController, YTShareInitiateSharingController, YTSharePanelPromoViewController, YTThirdPartyNetworkViewController;
@protocol YTInnerTubeUIService, YTResponder, YTSectionControllerProtocol;

@interface YTShareMainViewController : UIViewController <YTPageStyleProvider, YTFormattedStringLabelDelegate, YTResponseViewController, YTShareCommunityPostViewDelegate, YTShareContentViewControllerDelegate, YTSharePanelPromoViewControllerDelegate>
{
    id <YTInnerTubeUIService> _service;
    YTIUnifiedSharePanelRenderer *_renderer;
    YTShareInitiateSharingController *_initiateSharingController;
    YTShareContentViewController *_contentViewController;
    YTSharePanelPromoViewController *_promoViewController;
    YTThirdPartyNetworkViewController *_thirdPartyNetworkViewController;
    _Bool _isDismissed;
    id <YTSectionControllerProtocol> _selectedContentViewSectionController;
    _Bool _statusBarHiddenWhenNotInFullScreenMode;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)sharePanelView;
- (void)expungePrefetchedSharePanelFromCache;
- (_Bool)testAndSetIsDismissed;
- (void)addPromoViewController;
- (void)addContentViewController;
- (void)sharePanelPromoViewController:(id)arg1 dismissWithDismissalExpiryMs:(long long)arg2 onDismissTitleLink:(id)arg3;
- (void)addEventHandlers;
@property(readonly, nonatomic) long long pageStyle;
- (void)contentViewController:(id)arg1 didDeselectSection:(id)arg2;
- (void)contentViewController:(id)arg1 didSelectSection:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)didTapPostButton;
- (void)willMakeRequest:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setBusy:(_Bool)arg1;
- (void)dismissSharePanelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissSharePanelWithNavEndpoint:(id)arg1;
- (void)dismissSharePanelWithBackButton;
- (void)dismissSharePanel;
- (void)loadWithError:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *overrideStyleContext;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end

