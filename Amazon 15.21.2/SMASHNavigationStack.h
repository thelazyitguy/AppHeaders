//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SMASHApplication, UINavigationController;
@protocol SMASHNavigationDelegate, SMASHNavigationStackDelegate, SMASHSlidingWindowStrategy;

@interface SMASHNavigationStack : NSObject
{
    UINavigationController *_internalNavigationController;
    id <SMASHNavigationStackDelegate> _navigationStackDelegate;
    id <SMASHNavigationDelegate> _navigationEngine;
    id <SMASHSlidingWindowStrategy> _slidingWindowStrategy;
    SMASHApplication *_smashApplication;
}

@property(retain, nonatomic) SMASHApplication *smashApplication; // @synthesize smashApplication=_smashApplication;
@property(readonly, nonatomic) id <SMASHSlidingWindowStrategy> slidingWindowStrategy; // @synthesize slidingWindowStrategy=_slidingWindowStrategy;
@property(readonly, nonatomic) id <SMASHNavigationDelegate> navigationEngine; // @synthesize navigationEngine=_navigationEngine;
@property(readonly, nonatomic) id <SMASHNavigationStackDelegate> navigationStackDelegate; // @synthesize navigationStackDelegate=_navigationStackDelegate;
@property(readonly, nonatomic) UINavigationController *internalNavigationController; // @synthesize internalNavigationController=_internalNavigationController;
- (void).cxx_destruct;
- (void)pruneWebViewsInBackStack;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)smashGoBack:(id)arg1 animated:(_Bool)arg2;
- (id)presentingNavigationStack;
- (_Bool)isInModalState;
- (void)modalCloseAnimated:(_Bool)arg1;
- (void)markTopViewControllerAsBlank;
- (void)presentModalNavigationStackWithRequest:(id)arg1 animated:(_Bool)arg2;
- (_Bool)executeNavigation:(id)arg1 viewController:(id)arg2;
- (_Bool)executeNavigation:(id)arg1 request:(id)arg2 viewControllerFactory:(CDUnknownBlockType)arg3 originatingViewController:(id)arg4;
- (void)registerAnimationCompleteCallbackForOneTimeUse:(CDUnknownBlockType)arg1;
- (unsigned long long)totalLogicalPagesCount;
- (unsigned long long)viewControllersCountInStack;
- (id)goBack:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)intraPageNavigationWithDOMChange:(_Bool)arg1;
- (_Bool)isEmpty;
- (void)navigateInPlace:(id)arg1 interceptionBehavior:(int)arg2;
- (void)navigateInPlace:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)replace:(id)arg1;
- (_Bool)loadNewUrlRequest:(id)arg1 withClickTime:(unsigned long long)arg2;
- (_Bool)loadNewUrlRequest:(id)arg1;
- (_Bool)loadNewUrlRequest:(id)arg1 withOriginatingViewController:(id)arg2 withNavigationHint:(id)arg3 withInterceptionBehavior:(int)arg4;
- (_Bool)loadNewUrlRequest:(id)arg1 withOriginatingViewController:(id)arg2 replaceTop:(_Bool)arg3;
- (_Bool)loadNewUrlRequest:(id)arg1 withOriginatingViewController:(id)arg2;
- (_Bool)sendRequestIntoInterceptionPipeline:(id)arg1 navigationHint:(id)arg2 originatingViewController:(id)arg3;
- (_Bool)sendRequestIntoInterceptionPipeline:(id)arg1 navigationHint:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 pruneWebViews:(_Bool)arg3;
- (id)initWithNavigationStackDelegate:(id)arg1 navigationEngine:(id)arg2 smashApplication:(id)arg3 slidingWindowStrategy:(id)arg4;
- (id)initWithInternalNavigationController:(id)arg1 navigationEngine:(id)arg2 smashApplication:(id)arg3 slidingWindowStrategy:(id)arg4;

@end

