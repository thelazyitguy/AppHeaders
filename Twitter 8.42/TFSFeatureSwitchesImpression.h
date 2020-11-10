//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSFeatureSwitches/NSSecureCoding-Protocol.h>

@class NSString;

@interface TFSFeatureSwitchesImpression : NSObject <NSSecureCoding>
{
    NSString *_key;
    NSString *_bucket;
    long long _version;
}

+ (id)impressionWithDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void)logImpressionWithEventLogger:(id)arg1;
- (_Bool)isEqualToImpression:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 bucket:(id)arg2 version:(long long)arg3;

@end

