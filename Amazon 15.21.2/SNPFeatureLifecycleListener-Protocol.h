//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, UIView;

@protocol SNPFeatureLifecycleListener <NSObject>
- (void)onFeatureLaunchComplete:(NSString *)arg1 launchPoint:(NSString *)arg2 props:(NSDictionary *)arg3;
- (UIView *)onFeatureLaunchStart:(NSString *)arg1 launchPoint:(NSString *)arg2 props:(NSDictionary *)arg3;
- (UIView *)onSorryScreen:(NSString *)arg1 launchPoint:(NSString *)arg2 props:(NSDictionary *)arg3 error:(NSError *)arg4 displayErrorBanner:(_Bool)arg5 recoveryActionBlock:(void (^)(void))arg6;
@end
