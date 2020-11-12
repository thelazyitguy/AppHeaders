//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Apptentive/ApptentiveState.h>

@class NSString;

@interface ApptentiveVersion : ApptentiveState
{
    long long _major;
    long long _minor;
    long long _patch;
    NSString *_versionString;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, nonatomic) long long patch; // @synthesize patch=_patch;
@property(readonly, nonatomic) long long minor; // @synthesize minor=_minor;
@property(readonly, nonatomic) long long major; // @synthesize major=_major;
- (id)description;
- (long long)compare:(id)arg1;
- (unsigned long long)integerValueForComparison;
- (_Bool)isEqualToVersion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)JSONDictionary;

@end
