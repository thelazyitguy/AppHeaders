//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface A9VSFezKeyValueStore : NSObject
{
    NSMutableDictionary *_keyValuePairs;
}

+ (id)standard;
@property(retain, nonatomic) NSMutableDictionary *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
- (void).cxx_destruct;
- (void)incrementNumberForKey:(id)arg1 revision:(long long)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2 revision:(long long)arg3;
- (id)numberForKey:(id)arg1 revision:(long long)arg2;
- (id)formattedKeyForKey:(id)arg1 revision:(long long)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 revision:(long long)arg3;
- (id)objectForKey:(id)arg1 revision:(long long)arg2;
- (id)init;

@end
