//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplLockerApiLockerToken-Protocol.h"

@class ComGoogleCaribouLockerProtoLockerProto_LockerAuthToken, NSString;

@interface ComGoogleAppsBigtopSyncClientImplLockerLockerTokenImpl : NSObject <ComGoogleAppsBigtopSyncClientImplLockerApiLockerToken>
{
    ComGoogleCaribouLockerProtoLockerProto_LockerAuthToken *authTokenProto_;
}

- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getAuthTokenString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
