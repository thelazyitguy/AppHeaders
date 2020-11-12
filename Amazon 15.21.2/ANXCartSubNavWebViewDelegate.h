//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIWebViewControllerDelegate-Protocol.h"

@class AMIWebViewController, NSString;
@protocol ANPAutoHidableChrome;

@interface ANXCartSubNavWebViewDelegate : NSObject <AMIWebViewControllerDelegate>
{
    _Bool _isRefactoredTopNav;
    id <ANPAutoHidableChrome> _chrome;
    AMIWebViewController *_cartViewController;
    NSString *_cartViewBaseURL;
}

@property(retain, nonatomic) NSString *cartViewBaseURL; // @synthesize cartViewBaseURL=_cartViewBaseURL;
@property(retain, nonatomic) AMIWebViewController *cartViewController; // @synthesize cartViewController=_cartViewController;
@property(nonatomic) _Bool isRefactoredTopNav; // @synthesize isRefactoredTopNav=_isRefactoredTopNav;
@property(retain, nonatomic) id <ANPAutoHidableChrome> chrome; // @synthesize chrome=_chrome;
- (void).cxx_destruct;
- (_Bool)isRedirectOnCartPage:(id)arg1;
- (void)webViewController:(id)arg1 webViewDidStartLoad:(id)arg2;
- (_Bool)isCartSubNavFixedOnScroll;
- (_Bool)isProceedToCheckoutButtonFixEnabled;
- (_Bool)isCartViewController:(id)arg1;
- (_Bool)isCartSubNavBarVisible;
- (void)adjustCartWebViewContainerFrameForSubNavigationBar:(id)arg1;
- (void)didShowViewController:(id)arg1;
- (void)willShowViewController:(id)arg1;
- (id)initWithChrome:(id)arg1 isFromRefactoredTopNav:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
