//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractCollection.h"

@protocol JavaUtilMap;

@interface ComGoogleCommonCollectMaps_Values : JavaUtilAbstractCollection
{
    id <JavaUtilMap> map_;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)__javaClone:(id)arg1;
- (void)clear;
- (_Bool)containsWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (_Bool)retainAllWithJavaUtilCollection:(id)arg1;
- (_Bool)removeAllWithJavaUtilCollection:(id)arg1;
- (_Bool)removeWithId:(id)arg1;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)iterator;
- (id)map;

@end
