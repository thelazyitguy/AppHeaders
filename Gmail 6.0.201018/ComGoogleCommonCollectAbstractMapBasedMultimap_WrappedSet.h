//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection.h"

#import "JavaUtilSet-Protocol.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap, NSString;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSet : ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection <JavaUtilSet>
{
    ComGoogleCommonCollectAbstractMapBasedMultimap *this$1_;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)__javaClone:(id)arg1;
- (_Bool)removeAllWithJavaUtilCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
