//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilConcurrentExecutor, JavaUtilSet;

@interface ComGoogleAppsTasksSharedAccountImplResourceExecutor : NSObject
{
    id <JavaUtilConcurrentExecutor> tasksSequentialExecutor_;
    id <JavaUtilSet> currentExecutingFutures_;
    _Bool released_;
}

+ (void)initialize;
- (void)dealloc;
- (id)release__;
- (id)executeWithComGoogleAppsTasksSharedUtilsSupplier:(id)arg1 withComGoogleCommonBaseFunction:(id)arg2;

@end
