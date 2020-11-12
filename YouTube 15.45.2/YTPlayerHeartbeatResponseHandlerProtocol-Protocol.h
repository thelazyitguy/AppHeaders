//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTICommand, YTIHeartbeatParams, YTIHeartbeatRequestParams, YTIPlayabilityStatus;
@protocol YTSingleVideoObservable;

@protocol YTPlayerHeartbeatResponseHandlerProtocol <NSObject>
- (void)populateHeartbeatRequestParams:(YTIHeartbeatRequestParams *)arg1;
- (void)processPlayabilityStatus:(YTIPlayabilityStatus *)arg1 heartbeatParams:(YTIHeartbeatParams *)arg2;
- (_Bool)heartbeatShouldRunForPlayabilityStatus:(YTIPlayabilityStatus *)arg1;

@optional
- (_Bool)willHandleStreamTransitionEndpoint:(YTICommand *)arg1 timing:(int)arg2 video:(id <YTSingleVideoObservable>)arg3;
- (_Bool)needsDeviceID;
@end
