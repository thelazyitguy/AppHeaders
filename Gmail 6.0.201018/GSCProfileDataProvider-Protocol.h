//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, GSCProfile, NSArray, NSSet;
@protocol CSTTracer;

@protocol GSCProfileDataProvider <NSObject>
@property(readonly, nonatomic) NSSet *dataKeys;
@property(readonly, nonatomic) _Bool isEnabled;
- (GPCPromise *)remoteDataForProfile:(GSCProfile *)arg1 forKeys:(NSSet *)arg2 withTracer:(id <CSTTracer>)arg3;
- (NSArray *)localDataForProfile:(GSCProfile *)arg1 forKeys:(NSSet *)arg2;
@end
