//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUserIdentityInstance, NSDate;

@interface MPUserIdentityChange : NSObject
{
    _Bool _changed;
    MPUserIdentityInstance *_userIdentityNew;
    MPUserIdentityInstance *_userIdentityOld;
    NSDate *_timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) MPUserIdentityInstance *userIdentityOld; // @synthesize userIdentityOld=_userIdentityOld;
@property(retain, nonatomic) MPUserIdentityInstance *userIdentityNew; // @synthesize userIdentityNew=_userIdentityNew;
- (id)initWithNewUserIdentity:(id)arg1 oldUserIdentity:(id)arg2 timestamp:(id)arg3 userIdentities:(id)arg4;
- (id)initWithNewUserIdentity:(id)arg1 userIdentities:(id)arg2;

@end
