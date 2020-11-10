//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>
#import <RedditCore/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface DiscoveryLayout : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    NSString *_name;
    NSArray *_unitDescriptors;
    unsigned long long _orderType;
    NSNumber *_start;
    NSNumber *_distance;
    NSString *_minAppVersion;
}

+ (unsigned long long)orderTypeForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *minAppVersion; // @synthesize minAppVersion=_minAppVersion;
@property(retain, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
@property(nonatomic) unsigned long long orderType; // @synthesize orderType=_orderType;
@property(copy, nonatomic) NSArray *unitDescriptors; // @synthesize unitDescriptors=_unitDescriptors;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)overwriteEnabledForMinimumAppVersion:(id)arg1;
- (void)updateModelWithData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

