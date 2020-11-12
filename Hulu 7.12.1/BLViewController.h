//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BLCoreEventDelegate-Protocol.h"
#import "BLWebViewEventDelegate-Protocol.h"
#import "SKVASTViewControllerDelegate-Protocol.h"

@class BLWebView, NSString, SKVASTViewController;
@protocol BLCoreEventDelegate;

@interface BLViewController : UIViewController <SKVASTViewControllerDelegate, BLWebViewEventDelegate, BLCoreEventDelegate>
{
    _Bool _isCustomAdDefintion;
    _Bool _isSDKInit;
    _Bool _hostingAppOwnsVideoController;
    _Bool _canShowAd;
    id <BLCoreEventDelegate> coreEventDelegate;
    SKVASTViewController *_skVastViewController;
    UIViewController *_viewController;
    BLWebView *_blWebView;
}

- (void).cxx_destruct;
@property _Bool canShowAd; // @synthesize canShowAd=_canShowAd;
@property _Bool hostingAppOwnsVideoController; // @synthesize hostingAppOwnsVideoController=_hostingAppOwnsVideoController;
@property _Bool isSDKInit; // @synthesize isSDKInit=_isSDKInit;
@property(retain, nonatomic) BLWebView *blWebView; // @synthesize blWebView=_blWebView;
@property _Bool isCustomAdDefintion; // @synthesize isCustomAdDefintion=_isCustomAdDefintion;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SKVASTViewController *skVastViewController; // @synthesize skVastViewController=_skVastViewController;
@property(retain) id <BLCoreEventDelegate> coreEventDelegate; // @synthesize coreEventDelegate;
- (void)BLWebViewAdLoaded;
- (void)BLWebViewAdUnavailable;
- (void)BLWebViewOnMicrositeClose;
- (void)BLWebViewOnMicrositeOpen;
- (void)BLWebViewOnOverlayClsoe;
- (void)BLWebViewOnOverlayOpen;
- (void)didReceiveMemoryWarning;
- (void)BLMicrositeDidOpen;
- (void)BLMicrositeDidClose;
- (void)BLOverlayDidClose;
- (void)BLOverlayDidOpen;
- (void)BLInitializeFailed:(id)arg1:(id)arg2;
- (void)BLInitialize:(id)arg1;
- (void)BLManifestUnavailable;
- (void)BLManfiestRequested;
- (void)BLManifestLoaded;
- (void)vastError:(id)arg1 error:(int)arg2;
- (void)vastTrackingEvent:(id)arg1;
- (void)vastOpenBrowseWithUrl:(id)arg1;
- (void)vastDidDismissFullScreen:(id)arg1;
- (void)vastWillPresentFullScreen:(id)arg1;
- (void)vastReady:(id)arg1;
- (void)vastVideoProgressStart;
- (_Bool)isModal;
- (void)loadBLWebView;
- (void)hideAd;
- (void)removeObservers;
- (void)showAd:(id)arg1 withDefinition:(id)arg2;
- (void)updateAdViewFrame:(struct CGRect)arg1;
- (void)setupObservers;
- (void)showAd:(id)arg1 withVASTURL:(id)arg2;
- (void)retreiveManifest:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)appWillTerminate:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidEnterForeground:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
