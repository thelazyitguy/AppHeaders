//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplLockerApiInternalLockerRecipients-Protocol.h"

@class ComGoogleCommonCollectImmutableMap, NSString;
@protocol JavaUtilMap;

@interface ComGoogleAppsBigtopSyncClientImplLockerLockerRecipientsImpl : NSObject <ComGoogleAppsBigtopSyncClientImplLockerApiInternalLockerRecipients>
{
    ComGoogleCommonCollectImmutableMap *emailToContactMap_;
    id <JavaUtilMap> emailToPhoneMap_;
}

- (void)dealloc;
- (id)toProto;
- (_Bool)hasPhoneNumbersForAllContacts;
- (_Bool)containsExactlyWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3;
- (id)getPhoneNumberWithNSString:(id)arg1;
- (void)setPhoneNumberWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getContacts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
