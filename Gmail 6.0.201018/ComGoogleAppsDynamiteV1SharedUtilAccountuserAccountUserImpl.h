//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsDynamiteV1SharedUtilAccountuserSettableAccountUser-Protocol.h"
#import "DYNAccountUser-Protocol.h"

@class JavaUtilOptional, NSString;
@protocol DYNOrganizationInfo, DYNSCapabilitiesApiSharedUserScopedCapabilitiesFactory, DYNSCommonKeyValueStore, DYNSFlagsSharedConfiguration, DYNUserId;

@interface ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUserImpl : NSObject <DYNAccountUser, ComGoogleAppsDynamiteV1SharedUtilAccountuserSettableAccountUser>
{
    id <DYNSCommonKeyValueStore> keyValueStore_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
    id <DYNSCapabilitiesApiSharedUserScopedCapabilitiesFactory> sharedUserScopedCapabilitiesFactory_;
    JavaUtilOptional *dasherDomainPolicies_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getUserScopedCapabilities;
- (id)getAccountUserCapabilitiesWithoutContextGroup;
@property(readonly, nonatomic) _Bool isConsumerUser;
@property(readonly, nonatomic) _Bool isDasherUser;
- (id)getOrganizationInfo;
- (void)invalidate;
- (_Bool)hasCheckedInternalUser;
- (void)checkAndSetIsInternalUserWithJavaUtilOptional:(id)arg1;
- (id)getDasherDomainPolicies;
- (void)setDasherDomainPoliciesWithDYNSModelsCommonDasherDomainPolicies:(id)arg1;
- (void)setIdAndOrganizationInfoWithNSString:(id)arg1 withDYNSCommonOrganizationInfo:(id)arg2;
- (void)setIdWithNSString:(id)arg1;
@property(readonly, nonatomic) _Bool isInternalUser;
@property(readonly, nonatomic) _Bool isValid;
- (id)getUserId;
- (id)getId;
@property(readonly, nonatomic) id <DYNOrganizationInfo> organizationInfo;
@property(readonly, nonatomic) id <DYNUserId> userId;
@property(readonly, nonatomic) NSString *gaiaId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
