//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSSecureCoding-Protocol.h>

@class NSString;

@interface T1SiriDirectMessageDonationLogEntry : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_conversationID;
    long long _recipientID;
    long long _adminID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long adminID; // @synthesize adminID=_adminID;
@property(readonly, nonatomic) long long recipientID; // @synthesize recipientID=_recipientID;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 conversation:(id)arg3;
- (id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 conversationID:(id)arg3 recipientID:(long long)arg4 adminID:(long long)arg5;

@end

