//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectMultimap-Protocol.h"
#import "JavaObject-Protocol.h"

@protocol JavaLangIterable, JavaUtilList, JavaUtilMap;

@protocol ComGoogleCommonCollectListMultimap <ComGoogleCommonCollectMultimap, JavaObject>
- (_Bool)isEqual:(id)arg1;
- (id <JavaUtilMap>)asMap;
- (id <JavaUtilList>)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id <JavaLangIterable>)arg2;
- (id <JavaUtilList>)removeAllWithId:(id)arg1;
- (id <JavaUtilList>)getWithId:(id)arg1;
@end
