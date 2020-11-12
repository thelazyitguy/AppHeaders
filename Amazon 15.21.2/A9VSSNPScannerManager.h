//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "A9VSSNPScannerManagerInterface-Protocol.h"

@class A9VSSNPScannerPresenter, NSString;

@interface A9VSSNPScannerManager : NSObject <A9VSSNPScannerManagerInterface>
{
    A9VSSNPScannerPresenter *_presenter;
    CDUnknownBlockType _successCallback;
    NSString *_refMarker;
    unsigned long long _currentState;
}

@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSString *refMarker; // @synthesize refMarker=_refMarker;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(retain, nonatomic) A9VSSNPScannerPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)networkRequestWithPostURL:(id)arg1 forHeader:(id)arg2 withData:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)networkRequestWithURL:(id)arg1 forHeader:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (id)getPostURLForKuberServiceWithRefMarker:(id)arg1;
- (id)getURLForKuberServiceFor:(id)arg1 andCode:(id)arg2 andRefMarker:(id)arg3;
- (id)getURLForRecentPayemntsFor:(id)arg1;
- (void)updateViewsForA9VSSNPScanPullUpRecentPayments;
- (void)updateViewsForA9VSSNPScanPullDownRecentPayments;
- (void)updateViewsForA9VSSNPShowCode;
- (void)updateViewsForA9VSSNPScanFailure;
- (void)updateViewsForA9VSSNPScanNetworkError;
- (void)updateViewsForA9VSSNPScanSuccess;
- (void)updateViewsForA9VSSNPScanTimeout;
- (void)updateViewsForA9VSSNPScanPause;
- (void)updateViewsForA9VSSNPScanStart;
- (void)pullUpRecentPayments;
- (_Bool)canMoveToStartState;
- (void)viewDidLoad;
- (void)hadleTapGesture;
- (void)handleSwipeDownGesture;
- (void)handleSwipeUpGesture;
- (void)didFinishPullDownRecentPayments;
- (void)didInteractWithRecentPaymentsViews;
- (void)didDetectedUnknownCode;
- (void)didScanSucceedForPost:(id)arg1 withCode:(id)arg2;
- (void)didSelectMerchantWithURL:(id)arg1;
- (void)shouldGetRecentPaymentsFor:(id)arg1;
- (void)didTouchShowMyBracode;
- (void)didTouchRescan;
- (void)didTouchGotIt;
- (void)didTimeoutScanning;
- (void)viewDidBecomeInActive;
- (void)viewDidBecomeActive;
- (double)recentPaymentsHeight;
- (id)initScannerWith:(id)arg1 successCallback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
