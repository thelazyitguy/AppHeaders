//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, UIViewController;

@protocol MRNativeCommandHandlerDelegate <NSObject>
- (_Bool)handlingWebviewRequests;
- (_Bool)userInteractedWithWebView;
- (unsigned long long)adViewPlacementType;
- (UIViewController *)viewControllerForPresentingModalView;
- (void)nativeCommandFailed:(NSString *)arg1 withMessage:(NSString *)arg2;
- (void)nativeCommandCompleted:(NSString *)arg1;
- (void)nativeCommandDidDismissModalView;
- (void)nativeCommandWillPresentModalView;
- (void)handleMRAIDOpenCallForURL:(NSURL *)arg1;
- (void)handleMRAIDClose;
- (void)handleMRAIDResizeWithParameters:(NSDictionary *)arg1;
- (void)handleMRAIDExpandWithParameters:(NSDictionary *)arg1;
- (void)handleMRAIDSetOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg1;
- (void)handleMRAIDUseCustomClose:(_Bool)arg1;
@end
