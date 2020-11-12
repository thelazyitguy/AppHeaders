//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@protocol MDSStorageService <NSObject>
- (_Bool)containsKey:(NSString *)arg1;
- (_Bool)clear;
- (_Bool)deleteByKey:(NSString *)arg1;
- (NSArray *)getAllKeys;
- (NSDictionary *)getDictionaryForKey:(NSString *)arg1 defaultValue:(NSDictionary *)arg2;
- (NSDictionary *)getDictionaryForKey:(NSString *)arg1;
- (NSData *)getNSDataForKey:(NSString *)arg1 defaultValue:(NSData *)arg2;
- (NSData *)getNSDataForKey:(NSString *)arg1;
- (NSDate *)getNSDateForKey:(NSString *)arg1 defaultValue:(NSDate *)arg2;
- (NSDate *)getNSDateForKey:(NSString *)arg1;
- (NSString *)getStringForKey:(NSString *)arg1 defaultValue:(NSString *)arg2;
- (NSString *)getStringForKey:(NSString *)arg1;
- (double)getDoubleForKey:(NSString *)arg1 defaultValue:(double)arg2;
- (double)getDoubleForKey:(NSString *)arg1;
- (float)getFloatForKey:(NSString *)arg1 defaultValue:(float)arg2;
- (float)getFloatForKey:(NSString *)arg1;
- (int)getIntForKey:(NSString *)arg1 defaultValue:(int)arg2;
- (int)getIntForKey:(NSString *)arg1;
- (_Bool)getBoolForKey:(NSString *)arg1 defaultValue:(_Bool)arg2;
- (_Bool)getBoolForKey:(NSString *)arg1;
- (_Bool)setDictionary:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (_Bool)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (_Bool)setDate:(NSDate *)arg1 forKey:(NSString *)arg2;
- (_Bool)setString:(NSString *)arg1 forKey:(NSString *)arg2;
- (_Bool)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (_Bool)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (_Bool)setInt:(int)arg1 forKey:(NSString *)arg2;
- (_Bool)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
@end
