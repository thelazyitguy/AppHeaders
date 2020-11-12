//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePlatform/CMRNetworkSessionHandler-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface LocalSecureSocketNetworkSessionHandler : NSObject <CMRNetworkSessionHandler>
{
    NSMutableDictionary *_activeSessions;
    NSOperationQueue *_sessionStartEndQueue;
}

- (void).cxx_destruct;
- (void)readBinary:(id)arg1 attributes:(id)arg2;
- (void)sendJSONWithCallback:(id)arg1 json:(id)arg2 attributes:(id)arg3 callback:(id)arg4;
- (void)sendBinary:(id)arg1 data:(id)arg2 attributes:(id)arg3;
- (id)sessionForAttributes:(id)arg1;
- (_Bool)sessionStarted:(id)arg1;
- (void)endSession:(id)arg1;
- (void)sessionDisconnectedNotification:(id)arg1;
- (void)startSession:(id)arg1;
@property(readonly, nonatomic) NSOperationQueue *sessionStartEndQueue; // @synthesize sessionStartEndQueue=_sessionStartEndQueue;
@property(readonly, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
