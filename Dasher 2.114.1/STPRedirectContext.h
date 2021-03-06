//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/SFSafariViewControllerDelegate-Protocol.h>
#import <Stripe/STPURLCallbackListener-Protocol.h>

@class NSString, NSURL, SFSafariViewController;

@interface STPRedirectContext : NSObject <SFSafariViewControllerDelegate, STPURLCallbackListener>
{
    _Bool _subscribedToURLNotifications;
    _Bool _subscribedToForegroundNotifications;
    unsigned long long _state;
    SFSafariViewController *_safariVC;
    NSURL *_lastKnownSafariVCURL;
    NSURL *_nativeRedirectURL;
    NSURL *_redirectURL;
    NSURL *_returnURL;
    CDUnknownBlockType _completion;
}

+ (id)nativeRedirectURLForSource:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSURL *returnURL; // @synthesize returnURL=_returnURL;
@property(copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(copy, nonatomic) NSURL *nativeRedirectURL; // @synthesize nativeRedirectURL=_nativeRedirectURL;
@property(nonatomic) _Bool subscribedToForegroundNotifications; // @synthesize subscribedToForegroundNotifications=_subscribedToForegroundNotifications;
@property(nonatomic) _Bool subscribedToURLNotifications; // @synthesize subscribedToURLNotifications=_subscribedToURLNotifications;
@property(retain, nonatomic) NSURL *lastKnownSafariVCURL; // @synthesize lastKnownSafariVCURL=_lastKnownSafariVCURL;
@property(retain, nonatomic) SFSafariViewController *safariVC; // @synthesize safariVC=_safariVC;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)dismissPresentedViewController;
- (void)unsubscribeFromNotifications;
- (void)unsubscribeFromNotificationsAndDismissPresentedViewControllers;
- (void)subscribeToURLAndForegroundNotifications;
- (void)subscribeToURLNotifications;
- (void)handleRedirectCompletionWithError:(id)arg1 shouldDismissViewController:(_Bool)arg2;
- (_Bool)handleURLCallback:(id)arg1;
- (void)handleWillForegroundNotification;
- (void)safariViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)cancel;
- (void)startSafariAppRedirectFlow;
- (void)startSafariViewControllerRedirectFlowFromViewController:(id)arg1;
- (void)startRedirectFlowFromViewController:(id)arg1;
- (void)performAppRedirectIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithNativeRedirectURL:(id)arg1 redirectURL:(id)arg2 returnURL:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithPaymentIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSource:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

