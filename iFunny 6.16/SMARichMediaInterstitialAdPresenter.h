//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAAdContentViewDelegate-Protocol.h>
#import <Funny/SMAAdDisplayerDelegate-Protocol.h>
#import <Funny/SMAInteractorDelegate-Protocol.h>
#import <Funny/SMAInterstitialAdPresenting-Protocol.h>
#import <Funny/SMAInterstitialViewControllerDelegate-Protocol.h>
#import <Funny/SMARichMediaDelegate-Protocol.h>

@class NSString, SMAAdContentDisplayer, SMAAdContentView, SMAAdInteractor, SMAInterstitialViewController, SMARichMediaAdObject, UIViewController;
@protocol SMAAdPresentingDelegate, SMAInterstitialAdPresenterDelegate, SMARichMediaViewConfiguring, SMAViewabilityWebViewTracking;

@interface SMARichMediaInterstitialAdPresenter : NSObject <SMAAdContentViewDelegate, SMAAdDisplayerDelegate, SMARichMediaDelegate, SMAInterstitialViewControllerDelegate, SMAInterstitialAdPresenting, SMAInteractorDelegate>
{
    _Bool shouldShowCloseButton;
    _Bool isValid;
    id <SMAInterstitialAdPresenterDelegate> delegate;
    unsigned long long adFormat;
    SMAAdInteractor *_adInteractor;
    double adTTL;
    SMARichMediaAdObject *_adObject;
    id <SMARichMediaViewConfiguring> _richMediaConfigurator;
    SMAAdContentView *_adContentView;
    SMAAdContentDisplayer *_adDisplayer;
    UIViewController *_presentingViewController;
    SMAInterstitialViewController *_interstitialViewController;
    id <SMAViewabilityWebViewTracking> _viewabilityTracker;
    unsigned long long _forceOrientationMask;
}

@property(nonatomic) unsigned long long forceOrientationMask; // @synthesize forceOrientationMask=_forceOrientationMask;
@property(retain, nonatomic) id <SMAViewabilityWebViewTracking> viewabilityTracker; // @synthesize viewabilityTracker=_viewabilityTracker;
@property(retain, nonatomic) SMAInterstitialViewController *interstitialViewController; // @synthesize interstitialViewController=_interstitialViewController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) SMAAdContentDisplayer *adDisplayer; // @synthesize adDisplayer=_adDisplayer;
@property(retain, nonatomic) SMAAdContentView *adContentView; // @synthesize adContentView=_adContentView;
@property(retain, nonatomic) id <SMARichMediaViewConfiguring> richMediaConfigurator; // @synthesize richMediaConfigurator=_richMediaConfigurator;
@property(retain, nonatomic) SMARichMediaAdObject *adObject; // @synthesize adObject=_adObject;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(nonatomic) _Bool shouldShowCloseButton; // @synthesize shouldShowCloseButton;
@property(nonatomic) double adTTL; // @synthesize adTTL;
@property(nonatomic) __weak SMAAdInteractor *adInteractor; // @synthesize adInteractor=_adInteractor;
@property(readonly, nonatomic) unsigned long long adFormat; // @synthesize adFormat;
@property(nonatomic) __weak id <SMAAdPresentingDelegate> delegate;
- (void).cxx_destruct;
- (void)addItemsForViewabilityTracking:(id)arg1;
- (void)stopViewabilityTrackingOnAdView:(id)arg1;
- (void)startViewabilityTrackingOnAdView:(id)arg1 internalWebView:(id)arg2;
- (void)trackDisplaying;
- (void)trackImpression;
- (void)openAdLink:(id)arg1;
- (void)renderRichMediaWithCompletion:(CDUnknownBlockType)arg1;
- (void)interstitialViewControllerDidDisappear:(id)arg1;
- (void)interstitialViewControllerWillDisappear:(id)arg1;
- (void)interstitialViewControllerDidAppear:(id)arg1;
- (void)interstitialViewControllerWillAppear:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)adInteractorTTLExpired:(id)arg1;
- (void)richMedia:(id)arg1 didReceiveOrientationMask:(unsigned long long)arg2;
- (void)richMedia:(id)arg1 richMediaViolation:(unsigned long long)arg2 violatedURL:(id)arg3 redirectURL:(id)arg4;
- (void)richMedia:(id)arg1 willCollapseFromView:(id)arg2;
- (void)richMediaDidUnload:(id)arg1;
- (void)richMedia:(id)arg1 willExpandToView:(id)arg2;
- (void)richMediaWillShowVideo:(id)arg1;
- (void)richMedia:(id)arg1 navigateWithURL:(id)arg2;
- (void)richMedia:(id)arg1 didRenderInWebView:(id)arg2;
- (void)adContentDisplayerWillLeaveApplication:(id)arg1;
- (void)adContentDisplayerDidDismissModalContent:(id)arg1;
- (void)adContentDisplayerDidPresentModalContent:(id)arg1;
- (void)adContentDisplayerWillPresentModalContent:(id)arg1;
- (id)presentingViewControllerForAdDisplayer:(id)arg1;
- (void)adContentDisplayerDidFinish:(id)arg1;
- (void)adContentView:(id)arg1 clickedAtPoint:(struct CGPoint)arg2;
- (void)adContentViewImpressed:(id)arg1;
- (void)adContentViewRemovedFromWindow:(id)arg1;
- (void)adContentViewMovedToWindow:(id)arg1;
- (void)applyCustomInterstitialSettings:(id)arg1;
- (void)showFromViewController:(id)arg1;
- (void)processNewAdState:(long long)arg1;
- (void)prerenderContentIfPossible:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *sci;
@property(readonly, nonatomic) NSString *sessionId;
- (id)initWithRichMediaConfigurator:(id)arg1 adObject:(id)arg2 viewabilityTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

