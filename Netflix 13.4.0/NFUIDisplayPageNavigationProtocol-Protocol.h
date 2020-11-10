//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ViewControllerOverContextDelegateProtocol-Protocol.h"

@class DisplayPageRequest, NSDictionary, NSNumber, UIViewController;
@protocol NFUIDisplayPageProtocol, NFUIDisplayPageStackControllerProtocol, NFUIPreviewsDisplayPagePresentationDelegate, ViewControllerOverContextDelegateProtocol;

@protocol NFUIDisplayPageNavigationProtocol <ViewControllerOverContextDelegateProtocol>
- (void)close:(void (^)(void))arg1;
- (void)back:(void (^)(void))arg1;
- (void)didShowDisplayPage:(id <NFUIDisplayPageProtocol>)arg1 animated:(_Bool)arg2;
- (void)showNewDisplayPageWithVideoId:(NSNumber *)arg1 trackId:(NSNumber *)arg2;
- (void)showNewDisplayPageWithRequest:(DisplayPageRequest *)arg1 completion:(void (^)(void))arg2;
- (void)displayPageWithRequest:(DisplayPageRequest *)arg1 completion:(void (^)(id <NFUIDisplayPageProtocol>))arg2;
@property(nonatomic) long long lastIntendedOperation;
@property(nonatomic) long long initialNavigationLevelCount;
@property(nonatomic, copy) NSDictionary *transitionOptions;
@property(nonatomic) __weak id <NFUIPreviewsDisplayPagePresentationDelegate> previewsDisplayPagePresentationDelegate;
@property(nonatomic) __weak id <ViewControllerOverContextDelegateProtocol> presentationDelegate;
@property(nonatomic, readonly) UIViewController<NFUIDisplayPageStackControllerProtocol> *stackController;
@property(nonatomic, copy) CDUnknownBlockType operationCompletionBlock;
@property(nonatomic, copy) CDUnknownBlockType closeCompletionBlock;
@property(nonatomic, copy) CDUnknownBlockType closeExecutionBlock;
@end
