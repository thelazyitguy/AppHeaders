//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, YTGoogleAccount, YTIAccountItemRenderer, YTIGaiaAuthenticatedIdentity, YTIUnauthenticatedIdentity, YTIUserProfile, YTIdentity, YTIdentityStatePOD;

@interface YTIdentityState : NSObject
{
    _Bool _isDelegated;
    YTGoogleAccount *_googleAccount;
    YTIAccountItemRenderer *_accountItemRenderer;
    YTIUnauthenticatedIdentity *_unauthenticatedIdentity;
    YTIdentity *_identity;
    YTIGaiaAuthenticatedIdentity *_gaiaAuthenticatedIdentity;
    YTIUserProfile *_userProfile;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTIUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(readonly, nonatomic) YTIGaiaAuthenticatedIdentity *gaiaAuthenticatedIdentity; // @synthesize gaiaAuthenticatedIdentity=_gaiaAuthenticatedIdentity;
@property(readonly, nonatomic) YTIdentity *identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) YTIUnauthenticatedIdentity *unauthenticatedIdentity; // @synthesize unauthenticatedIdentity=_unauthenticatedIdentity;
@property(nonatomic) _Bool isDelegated; // @synthesize isDelegated=_isDelegated;
@property(readonly, nonatomic) YTIAccountItemRenderer *accountItemRenderer; // @synthesize accountItemRenderer=_accountItemRenderer;
@property(readonly, nonatomic) YTGoogleAccount *googleAccount; // @synthesize googleAccount=_googleAccount;
- (_Bool)isValid;
- (id)initWithGoogleAccount:(id)arg1 accountItemRenderer:(id)arg2 unauthenticatedIdentity:(id)arg3 authenticatedIdentity:(id)arg4 userProfile:(id)arg5 identity:(id)arg6 isDelegated:(_Bool)arg7;
- (id)serialize;
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *userID;
@property(readonly, nonatomic) NSString *identityID;
- (_Bool)isChildAccountPreexisting;
- (_Bool)isChildAccountParentCreated;
- (_Bool)isChildUnder13;
- (_Bool)isChildOver13;
- (_Bool)isAdult;
- (_Bool)isChild;
@property(readonly, nonatomic) YTIdentityStatePOD *plainOldData;
@property(readonly, nonatomic) NSString *incognitoVisitorData;
@property(readonly, nonatomic) NSURL *avatarURL;
- (id)pageID;
- (id)authorization;
- (id)initWithUnauthenticatedIdentity:(id)arg1;
- (id)initWithAuthenticatedIdentity:(id)arg1 userProfile:(id)arg2 googleAccount:(id)arg3;
- (id)initForSignedInWithGoogleAccount:(id)arg1 accountItemRenderer:(id)arg2;

@end
