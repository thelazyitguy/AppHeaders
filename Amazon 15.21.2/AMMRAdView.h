//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMAMraidBaseAdView.h"

@class AMMRAdViewDisplayController, NSMutableData;

@interface AMMRAdView : AMAMraidBaseAdView
{
    _Bool _expanded;
    AMMRAdViewDisplayController *_displayController;
    NSMutableData *_data;
    long long _modalViewCount;
}

@property(nonatomic) long long modalViewCount; // @synthesize modalViewCount=_modalViewCount;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) AMMRAdViewDisplayController *displayController; // @synthesize displayController=_displayController;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
- (id)viewControllerForPresentingVideoPlayer;
- (void)videoPlayerManagerDidDismissVideo:(id)arg1;
- (void)videoPlayerManagerWillPresentVideo:(id)arg1;
- (void)videoPlayerManager:(id)arg1 didFailToPlayVideoWithErrorMessage:(id)arg2;
- (void)adViewableDidChange:(_Bool)arg1;
- (void)appShouldResume;
- (void)appShouldSuspend;
- (void)adDidDismissModalView;
- (void)adWillPresentModalView;
- (void)adDidRequestCustomCloseEnabled:(_Bool)arg1;
- (void)adDidExpandToFrame:(struct CGRect)arg1;
- (void)adWillExpandToFrame:(struct CGRect)arg1;
- (void)adDidClose;
- (void)adWillClose;
- (void)adDidFailToLoad;
- (void)adDidLoad;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)adViewDidClickEvent:(id)arg1;
- (void)initializeJavascriptState;
- (void)loadRequest:(id)arg1;
- (struct CGRect)absoluteBounds;
- (void)resizeToDesiredRect:(struct CGRect)arg1 shouldCloseToDefault:(_Bool)arg2;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)tryProcessingPrivateURLStringInMraidContext:(id)arg1;
- (void)loadCreativeWithHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadCreativeFromURL:(id)arg1;
- (id)adManager;
- (void)didClickOnPrivateURL:(id)arg1;
- (void)didDismissModalView;
- (void)willPresentModalView;
- (id)viewControllerForPresentingModalView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 allowsExpansion:(_Bool)arg2 closeButtonStyle:(unsigned long long)arg3 andBridgesEnabled:(id)arg4;

@end
