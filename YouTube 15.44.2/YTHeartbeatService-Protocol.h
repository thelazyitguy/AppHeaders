//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSData, YTIHeartbeatRequest;

@protocol YTHeartbeatService <NSObject>
+ (id)new;
+ (id)alloc;
- (void)makeHeartbeatRequest:(YTIHeartbeatRequest *)arg1 trackingParams:(NSData *)arg2 sendDeviceID:(_Bool)arg3 responseBlock:(void (^)(YTIHeartbeatResponse *))arg4 errorBlock:(void (^)(NSError *))arg5;
@end
