//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSSecureCoding-Protocol.h>
#import <TFSTwitterCore/TFSEncodable-Protocol.h>

@class TFSTwitterUserReference;

@interface TFSTwitterEntityMediaSourceUser : NSObject <NSSecureCoding, TFSEncodable>
{
    _Bool _verified;
    long long _identityType;
    TFSTwitterUserReference *_userReference;
}

+ (id)encodableName;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference; // @synthesize userReference=_userReference;
@property(readonly, nonatomic) long long identityType; // @synthesize identityType=_identityType;
@property(readonly, nonatomic, getter=isVerified) _Bool verified; // @synthesize verified=_verified;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithEncoder:(id)arg1;
- (id)initWithDecoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 fromGraphQL:(_Bool)arg2;
- (id)initWithUserReference:(id)arg1 verified:(_Bool)arg2 identityType:(long long)arg3;

@end

