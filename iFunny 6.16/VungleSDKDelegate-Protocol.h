//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, VungleViewInfo;

@protocol VungleSDKDelegate <NSObject>

@optional
- (void)vungleSDKFailedToInitializeWithError:(NSError *)arg1;
- (void)vungleSDKDidInitialize;
- (void)vungleDidCloseAdWithViewInfo:(VungleViewInfo *)arg1 placementID:(NSString *)arg2;
- (void)vungleSDKwillCloseProductSheet:(id)arg1;
- (void)vungleSDKwillCloseAdWithViewInfo:(NSDictionary *)arg1 willPresentProductSheet:(_Bool)arg2;
- (void)vungleWillCloseAdWithViewInfo:(VungleViewInfo *)arg1 placementID:(NSString *)arg2;
- (void)vungleDidShowAdForPlacementID:(NSString *)arg1;
- (void)vungleWillShowAdForPlacementID:(NSString *)arg1;
- (void)vungleAdPlayabilityUpdate:(_Bool)arg1 placementID:(NSString *)arg2;
- (void)vungleAdPlayabilityUpdate:(_Bool)arg1 placementID:(NSString *)arg2 error:(NSError *)arg3;
@end
