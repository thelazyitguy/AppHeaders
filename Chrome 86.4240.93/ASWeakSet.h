//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/NSFastEnumeration-Protocol.h>

@class NSHashTable;

@interface ASWeakSet : NSObject <NSFastEnumeration>
{
    NSHashTable *_hashTable;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)containsObject:(id)arg1;
- (id)allObjects;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end
