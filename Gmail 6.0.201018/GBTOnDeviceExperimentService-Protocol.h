//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBInt32Array, NSString;

@protocol GBTOnDeviceExperimentService <NSObject>
- (GPBInt32Array *)experimentIds;
- (void)setExperimentStatus:(long long)arg1 forExperimentId:(NSString *)arg2;
- (long long)experimentStatusForExperimentId:(NSString *)arg1;
@end
