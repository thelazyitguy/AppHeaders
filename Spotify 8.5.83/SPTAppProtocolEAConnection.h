//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTAppProtocolStreamConnection.h"

#import "EAAccessoryDelegate-Protocol.h"

@class EASession, NSString;

@interface SPTAppProtocolEAConnection : SPTAppProtocolStreamConnection <EAAccessoryDelegate>
{
    EASession *_session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) EASession *session; // @synthesize session=_session;
- (void)accessoryDidDisconnect:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

