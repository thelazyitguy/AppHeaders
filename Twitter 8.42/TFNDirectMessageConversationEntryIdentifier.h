//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/NSSecureCoding-Protocol.h>

@class NSString;

@interface TFNDirectMessageConversationEntryIdentifier : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)uniqueLocalIdentifier;
+ (id)localIdentifierWithRequestID:(id)arg1;
+ (id)canonicalIdentifierWithEventID:(long long)arg1;
+ (_Bool)supportsSecureCoding;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isCanonical) _Bool canonical;
@property(readonly, copy, nonatomic) NSString *localID;
@property(readonly, nonatomic) long long canonicalID;
- (id)initInternal;

@end

