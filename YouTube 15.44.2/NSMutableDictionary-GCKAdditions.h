//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

#import <Module_Framework/YTGPBDictionary-Protocol.h>
#import <Module_Framework/YTGPBEntityDictionary-Protocol.h>

@class NSDate, NSString;

@interface NSMutableDictionary (GCKAdditions) <YTGPBDictionary, YTGPBEntityDictionary>
+ (id)gck_buildURLWithName:(id)arg1;
+ (void)gck_deleteCacheWithName:(id)arg1;
+ (id)gck_loadFromCacheWithName:(id)arg1;
+ (id)yt_dictionaryWithDictionary:(id)arg1 valueConversion:(CDUnknownBlockType)arg2;
+ (id)yt_dictionaryWithDictionary:(id)arg1;
- (void)gck_setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (void)gck_setDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)gck_setUIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)gck_setIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)gck_setStringValue:(id)arg1 forKey:(id)arg2;
- (_Bool)gck_trimToTargetSize:(unsigned long long)arg1;
- (_Bool)gck_removeOldestItem;
- (_Bool)gck_removeItemsOlderThan:(double)arg1;
- (void)gck_writeToCacheWithName:(id)arg1;
- (void)gckb_setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (void)gckb_setDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)gckb_setUlonglongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)gckb_setUIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)gckb_setIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)gckb_setStringValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSDate *lastAccessTime;
@property(nonatomic) unsigned long long lastAccessSequence;
@property(nonatomic) unsigned long long size;
@property(retain, nonatomic) NSString *fileName;
@property(retain, nonatomic) NSString *key;
- (void)yt_setValue:(id)arg1 forKey:(id)arg2;
- (void)yt_enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)yt_dictionaryWithValueConversion:(CDUnknownBlockType)arg1;
- (id)yt_dictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
