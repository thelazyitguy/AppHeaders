//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GSCProfileIdentity : NSObject <NSCopying>
{
    NSString *_identifier;
    long long _identityType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long identityType; // @synthesize identityType=_identityType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithVanityId:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithGaiaId:(id)arg1;
- (id)initWithEmail:(id)arg1;
- (id)initWithId:(id)arg1 type:(long long)arg2;
- (id)pst_asPILLookupID;

@end
