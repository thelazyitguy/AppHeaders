//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEntitlementRefreshProtocol-Protocol.h>
#import <Module_Framework/YTInnerTubeUIService-Protocol.h>

@class YTIGetSettingsRequest;

@protocol YTSettingsServiceProtocol <YTInnerTubeUIService, YTEntitlementRefreshProtocol>
- (void)makeSettingsRequest:(YTIGetSettingsRequest *)arg1 refresh:(_Bool)arg2 responseBlock:(void (^)(id, _Bool))arg3 errorBlock:(void (^)(NSError *))arg4;
@end

