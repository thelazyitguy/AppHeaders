//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/NSCopying-Protocol.h>
#import <ChromeInternal/NSSecureCoding-Protocol.h>

@class NSString;
@protocol GRWEventSignature;

@interface GRWEvent : NSObject <NSCopying, NSSecureCoding>
{
    NSObject<GRWEventSignature> *_eventSignature;
    NSString *_sourceBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) NSObject<GRWEventSignature> *eventSignature; // @synthesize eventSignature=_eventSignature;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEventSignature:(id)arg1 sourceBundleIdentifier:(id)arg2;
- (id)initWithProto:(id)arg1;

@end
