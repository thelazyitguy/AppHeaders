//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractCollection.h"

#import "JavaUtilSet-Protocol.h"

@class NSString;

@interface JavaUtilAbstractSet : JavaUtilAbstractCollection <JavaUtilSet>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)spliterator;
- (_Bool)removeAllWithJavaUtilCollection:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
