//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GPBDictionaryInternalsProtocol-Protocol.h>
#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/YTGPBDictionary-Protocol.h>

@class GPBMessage, NSMutableDictionary, NSString;

@interface GPBUInt64Int32Dictionary : NSObject <YTGPBDictionary, GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

+ (id)yt_dictionaryWithDictionary:(id)arg1;
- (void)removeAll;
- (void)removeInt32ForKey:(unsigned long long)arg1;
- (void)setInt32:(int)arg1 forKey:(unsigned long long)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (_Bool)getInt32:(int *)arg1 forKey:(unsigned long long)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithInt32s:(const int *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;
- (id)init;
- (void)yt_setValue:(id)arg1 forKey:(id)arg2;
- (void)yt_enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)yt_dictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

