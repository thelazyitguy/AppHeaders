//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBridge.h"

@class BFTaskCompletionSource, NSString;
@protocol NSObject;

@interface SNPBridge : RCTBridge
{
    _Bool _isErrored;
    NSString *_sorryScreenErrorText;
    BFTaskCompletionSource *_runningExecutorLatch;
    id <NSObject> _lowMemorySubscription;
    id <NSObject> _debugLaunchSubscription;
}

+ (void)initialize;
@property(retain, nonatomic) id <NSObject> debugLaunchSubscription; // @synthesize debugLaunchSubscription=_debugLaunchSubscription;
@property(retain, nonatomic) id <NSObject> lowMemorySubscription; // @synthesize lowMemorySubscription=_lowMemorySubscription;
@property(retain, nonatomic) BFTaskCompletionSource *runningExecutorLatch; // @synthesize runningExecutorLatch=_runningExecutorLatch;
@property(retain, nonatomic) NSString *sorryScreenErrorText; // @synthesize sorryScreenErrorText=_sorryScreenErrorText;
@property(nonatomic) _Bool isErrored; // @synthesize isErrored=_isErrored;
- (void).cxx_destruct;
- (id)sideLoadJavaScript:(id)arg1 fromURL:(id)arg2;
- (void)handleInvalidationEvent:(id)arg1;
- (void)loadingDidComplete:(id)arg1;
- (void)commonInit;
- (_Bool)isVisibleSsnapViewController;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 launchOptions:(id)arg2;

@end
