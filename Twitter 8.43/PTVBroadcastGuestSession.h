//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface PTVBroadcastGuestSession : NSObject <NSSecureCoding>
{
    NSString *_sessionUUID;
    NSDate *_start;
    NSDate *_end;
    NSString *_userID;
    NSString *_username;
    NSString *_displayName;
    NSURL *_avatarURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) NSDate *end; // @synthesize end=_end;
@property(readonly, nonatomic) NSDate *start; // @synthesize start=_start;
@property(readonly, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (unsigned long long)hash;
- (_Bool)isEqualToBroadcastGuestSession:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)bestKnownDisplayName;
- (id)guestSessionJSON;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
