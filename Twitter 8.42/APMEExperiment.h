//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/NSCopying-Protocol.h>

@class APMPBExperiment, GULMutableDictionary, NSArray, NSNumber;

@interface APMEExperiment : NSObject <NSCopying>
{
    GULMutableDictionary *_flagsByName;
    NSNumber *_experimentID;
}

@property(readonly, nonatomic) NSNumber *experimentID; // @synthesize experimentID=_experimentID;
- (void).cxx_destruct;
@property(readonly, nonatomic) APMPBExperiment *proto;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)flagWithName:(id)arg1;
- (void)addFlag:(id)arg1;
@property(readonly, nonatomic) NSArray *flags;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithExperimentID:(id)arg1 flags:(id)arg2;

@end

