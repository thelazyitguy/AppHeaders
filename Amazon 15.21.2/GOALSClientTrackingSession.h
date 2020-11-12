//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOALSSerializable-Protocol.h"

@class NSString;

@interface GOALSClientTrackingSession : NSObject <GOALSSerializable>
{
    NSString *_sessionId;
    NSString *_trackingSessionStatus;
}

@property(readonly, nonatomic) NSString *trackingSessionStatus; // @synthesize trackingSessionStatus=_trackingSessionStatus;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithSessionId:(id)arg1 trackingSessionStatus:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
