//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, UIImage;
@protocol GIPAccountID;

@interface GSCAccount : NSObject <NSCoding, NSCopying>
{
    id <GIPAccountID> _accountId;
    NSString *_displayName;
    NSDictionary *_attributes;
    NSDictionary *_transientAttributes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *transientAttributes; // @synthesize transientAttributes=_transientAttributes;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) id <GIPAccountID> accountId; // @synthesize accountId=_accountId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)updateWithAccount:(id)arg1;
- (id)toBuilder;
- (id)initWithAccountId:(id)arg1 displayName:(id)arg2 attributes:(id)arg3 transientAttributes:(id)arg4;
- (id)initWithAccountId:(id)arg1 displayName:(id)arg2;
@property(readonly, nonatomic) unsigned long long domainRestriction;
@property(readonly, nonatomic) unsigned long long userGender;
@property(readonly, nonatomic) _Bool isChild;
@property(readonly, copy, nonatomic) NSString *domainName;
- (id)toGPlusAccountBuilder;
@property(readonly, nonatomic) UIImage *coverImage;
@property(readonly, nonatomic) UIImage *avatarImage;
@property(readonly, nonatomic) unsigned long long userType;
@property(readonly, nonatomic) NSString *coverImageURL;
@property(readonly, nonatomic) NSString *avatarURL;
@property(readonly, nonatomic) NSString *emailAddress;
- (id)toSSOAccountBuilder;

@end
