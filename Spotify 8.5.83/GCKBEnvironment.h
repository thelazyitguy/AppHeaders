//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GCKBEnvironment : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (id)currentEnvironment;
- (void).cxx_destruct;
- (void)removeKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)toDictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

