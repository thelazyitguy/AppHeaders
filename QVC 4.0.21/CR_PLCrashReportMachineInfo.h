//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CR_PLCrashReportProcessorInfo, NSString;

@interface CR_PLCrashReportMachineInfo : NSObject
{
    NSString *_modelName;
    CR_PLCrashReportProcessorInfo *_processorInfo;
    unsigned long long _processorCount;
    unsigned long long _logicalProcessorCount;
}

@property(readonly, nonatomic) unsigned long long logicalProcessorCount; // @synthesize logicalProcessorCount=_logicalProcessorCount;
@property(readonly, nonatomic) unsigned long long processorCount; // @synthesize processorCount=_processorCount;
@property(readonly, nonatomic) CR_PLCrashReportProcessorInfo *processorInfo; // @synthesize processorInfo=_processorInfo;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void)dealloc;
- (id)initWithModelName:(id)arg1 processorInfo:(id)arg2 processorCount:(unsigned long long)arg3 logicalProcessorCount:(unsigned long long)arg4;

@end
