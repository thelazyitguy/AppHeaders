//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMNativeRenderController.h>

#import <Funny/SKStoreProductViewControllerDelegate-Protocol.h>

@class NSString;

@interface IMNativeInlineRenderController : IMNativeRenderController <SKStoreProductViewControllerDelegate>
{
    _Bool _isSkStoreOnSecondPage;
    _Bool _isSecondScreenPresented;
    _Bool _isCloseScheduled;
    _Bool _secondPageOpenScheduled;
    int _presentedScreens;
}

@property(nonatomic) int presentedScreens; // @synthesize presentedScreens=_presentedScreens;
@property(nonatomic) _Bool secondPageOpenScheduled; // @synthesize secondPageOpenScheduled=_secondPageOpenScheduled;
@property(nonatomic) _Bool isCloseScheduled; // @synthesize isCloseScheduled=_isCloseScheduled;
@property(nonatomic) _Bool isSecondScreenPresented; // @synthesize isSecondScreenPresented=_isSecondScreenPresented;
@property(nonatomic) _Bool isSkStoreOnSecondPage; // @synthesize isSkStoreOnSecondPage=_isSkStoreOnSecondPage;
- (void)imActionAudioStateChanged:(_Bool)arg1;
- (void)imActionTrackVideoViewabilityForAsset:(id)arg1;
- (double)imActionMinimumVisiblePercentage;
- (_Bool)imActionShouldScrollToTopForRoot:(id)arg1;
- (_Bool)imActionShouldRequireCustomViewabilityTracker:(id)arg1;
- (void)fireWebViewDidInteractWithParams:(id)arg1;
- (void)fireWebViewWillLeaveApplication;
- (void)fireWebViewDidDismissScreen:(id)arg1;
- (void)fireWebViewWillDismissScreen:(id)arg1;
- (void)fireWebViewDidPresentScreen:(id)arg1;
- (void)fireWebViewWillPresentScreen:(id)arg1;
- (void)fireCloseActionFromWebView;
- (void)fireSkipActionFromWebView;
- (void)fireShowEndCardFromWebView;
- (void)imActionMediaStartedPlaying:(id)arg1;
- (void)imActionFoundCompanionExtensionTrackers:(id)arg1;
- (void)imActionShowVideoEndCardForAsset:(id)arg1;
- (_Bool)imActionIsCloseScheduled;
- (void)imNativeLandingPageProcessorDidPresentEmbeddedBrowser:(id)arg1;
- (void)imNativeLandingPageProcessorWillPresentEmbeddedBrowser:(id)arg1;
- (void)imNativeLandingPageProcessorDidDismissEmbeddedBrowser:(id)arg1;
- (void)imNativeLandingPageProcessorWillDismissEmbeddedBrowser:(id)arg1;
- (void)imNativeLandingPageProcessorDidDismissScreen:(id)arg1;
- (void)imNativeLandingPageProcessorWillDismissScreen:(id)arg1;
- (void)imNativeLandingPageProcessorDidPresentScreen:(id)arg1;
- (void)imNativeLandingPageProcessorWillPresentScreen:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)assetDidFinishBuilding:(id)arg1;
- (void)dealloc;
- (void)pauseFirstPageVideo;
- (_Bool)ifVideoHasEnded:(id)arg1;
- (void)helperForFullScreenToInlineVideoAsset:(id)arg1 to:(id)arg2 with:(id)arg3;
- (void)resumeInlineVideoFromFullScreenPoint;
- (void)resumeInlineVideo;
- (void)forceCloseAd;
- (void)closeAd;
- (void)scheduleClose;
- (void)presentSecondScreenHelperMethod;
- (void)presentSecondScreenWithView:(id)arg1;
- (void)presentViewController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fireClientFillBeacon;
- (void)wakeFullScreenVideo;
- (void)hibernateVideo;
- (void)processActionSkipWithReferenceID:(id)arg1;
- (_Bool)performAction:(id)arg1 withReferenceID:(id)arg2;
- (void)prepareSecondPage;
- (void)reloadAssetWithID:(id)arg1;
- (id)getRootViewWithWidth:(double)arg1;
- (void)createSKStoreVCIfNotPresent;
- (void)attachOMViewabilityToVideoAsset:(id)arg1;
- (void)switchViewabilityForMoatToVideoAsset:(id)arg1;
- (id)getVideoProperties;
- (_Bool)startViewabilityTracking;
- (void)recycleView;
- (id)initWithAccountID:(id)arg1;
- (void)loadAdWithPubContentData:(id)arg1 withSafeAreaFrame:(struct CGRect)arg2 withUnsafeAreaColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
