//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber, NSString;

@interface AWSKMSListGrantsResponse : AWSModel
{
    NSArray *_grants;
    NSString *_nextMarker;
    NSNumber *_truncated;
}

+ (id)grantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *truncated; // @synthesize truncated=_truncated;
@property(retain, nonatomic) NSString *nextMarker; // @synthesize nextMarker=_nextMarker;
@property(retain, nonatomic) NSArray *grants; // @synthesize grants=_grants;
- (void).cxx_destruct;

@end
