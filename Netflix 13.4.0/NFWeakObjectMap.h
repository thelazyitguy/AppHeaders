//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface NFWeakObjectMap : NSObject
{
    NSMapTable *_mappedObjects;
    NSMutableDictionary *_keyToTokens;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *keyToTokens; // @synthesize keyToTokens=_keyToTokens;
@property(retain, nonatomic) NSMapTable *mappedObjects; // @synthesize mappedObjects=_mappedObjects;
- (id)objectsForKey:(id)arg1;
- (void)removeObjectForToken:(id)arg1;
- (id)addObject:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

