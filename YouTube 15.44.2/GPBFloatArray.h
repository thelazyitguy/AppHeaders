//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/YTGPBArray-Protocol.h>

@class GPBMessage, NSString;

@interface GPBFloatArray : NSObject <YTGPBArray, NSCopying>
{
    GPBMessage *_autocreator;
    float *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)arrayWithValueArray:(id)arg1;
+ (id)arrayWithValue:(float)arg1;
+ (id)array;
+ (id)yt_arrayWithArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)addValuesFromArray:(id)arg1;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(float)arg2;
- (void)insertValue:(float)arg1 atIndex:(unsigned long long)arg2;
- (void)addValues:(const float *)arg1 count:(unsigned long long)arg2;
- (void)addValue:(float)arg1;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (float)valueAtIndex:(unsigned long long)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithValues:(const float *)arg1 count:(unsigned long long)arg2;
- (id)initWithValueArray:(id)arg1;
- (id)init;
- (void)yt_addNumber:(id)arg1;
- (id)yt_array;
- (id)yt_numberAtIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

