//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPKitConfiguration, MParticleUser, NSDictionary, NSNumber;

@interface FilteredMParticleUser : NSObject
{
    MParticleUser *_user;
    MPKitConfiguration *_kitConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPKitConfiguration *kitConfiguration; // @synthesize kitConfiguration=_kitConfiguration;
@property(retain, nonatomic) MParticleUser *user; // @synthesize user=_user;
@property(readonly) NSDictionary *userAttributes;
@property(readonly) NSDictionary *userIdentities;
@property(readonly) _Bool isLoggedIn;
@property(readonly) NSNumber *userId;
- (id)initWithMParticleUser:(id)arg1 kitConfiguration:(id)arg2;

@end

