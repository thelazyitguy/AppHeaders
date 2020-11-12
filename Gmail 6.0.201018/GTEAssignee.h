//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTESecondaryValueType-Protocol.h"

@class GTEAssigneeIdentity, NSString;

@interface GTEAssignee : NSObject <GTESecondaryValueType>
{
    _Bool _avatarURLRequired;
    GTEAssigneeIdentity *_identity;
    NSString *_fullName;
    NSString *_avatarURL;
    long long _roomPresenceStatus;
}

+ (_Bool)supportsSecureCoding;
+ (void)load;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool avatarURLRequired; // @synthesize avatarURLRequired=_avatarURLRequired;
@property(readonly, nonatomic) long long roomPresenceStatus; // @synthesize roomPresenceStatus=_roomPresenceStatus;
@property(readonly, copy, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) GTEAssigneeIdentity *identity; // @synthesize identity=_identity;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isFullyResolved) _Bool fullyResolved;
- (id)initWithIdentity:(id)arg1 fullName:(id)arg2 avatarURL:(id)arg3 roomPresenceStatus:(long long)arg4;
- (id)initWithIdentity:(id)arg1 fullName:(id)arg2 avatarURL:(id)arg3 avatarURLRequired:(_Bool)arg4 roomPresenceStatus:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
