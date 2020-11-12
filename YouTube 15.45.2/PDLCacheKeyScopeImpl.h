//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PDLCacheKeyScope-Protocol.h>

@class NSString;

@interface PDLCacheKeyScopeImpl : NSObject <PDLCacheKeyScope>
{
    long long _cacheKey;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long cacheKey; // @synthesize cacheKey=_cacheKey;
- (_Bool)edo_isEDOValueType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCacheKey:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
