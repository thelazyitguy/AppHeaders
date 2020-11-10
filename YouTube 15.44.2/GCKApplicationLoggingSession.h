//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GCKAnalyticsLoggingSession.h>

#import <Module_Framework/NSSecureCoding-Protocol.h>

@class GCKDevice, NSString;

@interface GCKApplicationLoggingSession : GCKAnalyticsLoggingSession <NSSecureCoding>
{
    _Bool _isReconnect;
    GCKDevice *_device;
    NSString *_applicationID;
    NSString *_receiverSessionID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *receiverSessionID; // @synthesize receiverSessionID=_receiverSessionID;
@property(readonly, nonatomic) _Bool isReconnect; // @synthesize isReconnect=_isReconnect;
@property(copy, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(copy, nonatomic) GCKDevice *device; // @synthesize device=_device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkID:(id)arg1 partialSenderIPAddresses:(id)arg2 sessionID:(long long)arg3 device:(id)arg4 applicationID:(id)arg5 isReconnect:(_Bool)arg6;
- (id)initWithDevice:(id)arg1 applicationID:(id)arg2 isReconnect:(_Bool)arg3;

@end

