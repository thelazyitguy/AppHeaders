//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingCollection.h"

#import "JavaUtilSet-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectForwardingSet : ComGoogleCommonCollectForwardingCollection <JavaUtilSet>
{
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)spliterator;
- (int)standardHashCode;
- (_Bool)standardEqualsWithId:(id)arg1;
- (_Bool)standardRemoveAllWithJavaUtilCollection:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
