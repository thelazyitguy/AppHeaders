//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable, XPTImmutableMultimap, XPTMultimap;

@protocol XPTMultimap <JavaObject>
- (id <XPTImmutableMultimap>)toImmutableMultimap;
- (ComGoogleCommonCollectImmutableMap *)toImmutableMap;
- (id <JavaLangIterable>)entries;
- (id <JavaLangIterable>)values;
- (id <JavaLangIterable>)keys;
- (_Bool)isEmpty;
- (int)countWithId:(id)arg1;
- (int)countKeys;
- (int)size;
- (void)clear;
- (_Bool)removeAllWithJavaLangIterable:(id <JavaLangIterable>)arg1;
- (_Bool)removeAllWithId:(id)arg1;
- (_Bool)removeWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsEntryWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsKeyWithId:(id)arg1;
- (id <JavaLangIterable>)getWithId:(id)arg1;
- (_Bool)putAllWithJavaLangIterable:(id <JavaLangIterable>)arg1;
- (_Bool)putAllWithXPTMultimap:(id <XPTMultimap>)arg1;
- (_Bool)putAllWithId:(id)arg1 withJavaLangIterable:(id <JavaLangIterable>)arg2;
- (_Bool)putWithId:(id)arg1 withId:(id)arg2;
@end

