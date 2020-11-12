//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDSStorageService-Protocol.h"

@class MDSMetricsLogger, MMKV, NSString;

@interface MDSStorageServiceImpl : NSObject <MDSStorageService>
{
    MMKV *_mmkvInstance;
    MDSMetricsLogger *_metricsLogger;
    NSString *_featureID;
}

@property(retain, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(retain, nonatomic) MDSMetricsLogger *metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(retain, nonatomic) MMKV *mmkvInstance; // @synthesize mmkvInstance=_mmkvInstance;
- (void).cxx_destruct;
- (void)recordMetric:(id)arg1 success:(_Bool)arg2 startDate:(id)arg3;
- (id)metricNameWithOp:(id)arg1 success:(_Bool)arg2;
- (_Bool)containsKey:(id)arg1;
- (_Bool)clear;
- (_Bool)deleteByKey:(id)arg1;
- (id)getAllKeys;
- (id)getDictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getDictionaryForKey:(id)arg1;
- (id)getNSDataForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getNSDataForKey:(id)arg1;
- (id)getNSDateForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getNSDateForKey:(id)arg1;
- (id)getStringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)getStringForKey:(id)arg1;
- (double)getDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (double)getDoubleForKey:(id)arg1;
- (float)getFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (float)getFloatForKey:(id)arg1;
- (int)getIntForKey:(id)arg1 defaultValue:(int)arg2;
- (int)getIntForKey:(id)arg1;
- (_Bool)getBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)getBoolForKey:(id)arg1;
- (_Bool)setDictionary:(id)arg1 forKey:(id)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (_Bool)setDate:(id)arg1 forKey:(id)arg2;
- (_Bool)setString:(id)arg1 forKey:(id)arg2;
- (_Bool)setDouble:(double)arg1 forKey:(id)arg2;
- (_Bool)setFloat:(float)arg1 forKey:(id)arg2;
- (_Bool)setInt:(int)arg1 forKey:(id)arg2;
- (_Bool)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)initStorageWithFeatureID:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
