//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface ExperimentVariant : NSObject <NSSecureCoding>
{
    NSString *_experimentId;
    NSString *_experimentName;
    NSString *_name;
    NSString *_version;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *experimentName; // @synthesize experimentName=_experimentName;
@property(readonly, copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphQLData:(id)arg1;

@end
