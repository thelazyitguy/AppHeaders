//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTContact-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchContactImpl, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchContactImpl_ContactImpl : NSObject <JBTContact>
{
    ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchContactImpl *this$0_;
}

- (void)dealloc;
- (id)getSmimeCertificate;
- (id)getOutboundEncryptionPrediction;
- (_Bool)isTlsPlaceholder;
- (id)getLocations;
- (id)getPhoneNumbers;
- (id)getEmailAddresses;
- (_Bool)hasProfilePhotoUrl;
- (id)getPhotoUrlWithInt:(int)arg1;
- (id)getPrimaryEmail;
- (id)getFullName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
