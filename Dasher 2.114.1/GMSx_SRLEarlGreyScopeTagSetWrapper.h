//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSCopying-Protocol.h>
#import <NavigationFramework/NSSecureCoding-Protocol.h>

@class NSArray;

@interface GMSx_SRLEarlGreyScopeTagSetWrapper : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_tags;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (_Bool)edo_isEDOValueType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTagSet:(struct SRLScopeTagSet)arg1;
- (id)initWithTags:(id)arg1;

@end

