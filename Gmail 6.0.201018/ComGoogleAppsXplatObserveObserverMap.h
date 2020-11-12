//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilMap;

@interface ComGoogleAppsXplatObserveObserverMap : NSObject
{
    id lock_;
    int size_;
    id <JavaUtilMap> observersByKey_;
}

+ (void)initialize;
- (void)dealloc;
- (int)size;
- (id)getSettableForWithId:(id)arg1;
- (id)getObserverHolderForKeyWithId:(id)arg1;
- (void)removeObserverWithId:(id)arg1 withComGoogleAppsXplatObserveObserver:(id)arg2;
- (void)addObserverWithId:(id)arg1 withComGoogleAppsXplatObserveObserver:(id)arg2 withJavaUtilConcurrentExecutor:(id)arg3;

@end
