//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SunNioChInvoker : NSObject
{
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)invokeIndirectlyWithSunNioChPendingFuture:(id)arg1;
+ (void)invokeWithSunNioChPendingFuture:(id)arg1;
+ (void)invokeUncheckedWithSunNioChPendingFuture:(id)arg1;
+ (void)invokeOnThreadInThreadPoolWithSunNioChGroupable:(id)arg1 withJavaLangRunnable:(id)arg2;
+ (void)invokeIndirectlyWithJavaNioChannelsCompletionHandler:(id)arg1 withId:(id)arg2 withId:(id)arg3 withJavaLangThrowable:(id)arg4 withJavaUtilConcurrentExecutor:(id)arg5;
+ (void)invokeIndirectlyWithJavaNioChannelsAsynchronousChannel:(id)arg1 withJavaNioChannelsCompletionHandler:(id)arg2 withId:(id)arg3 withId:(id)arg4 withJavaLangThrowable:(id)arg5;
+ (void)invokeWithJavaNioChannelsAsynchronousChannel:(id)arg1 withJavaNioChannelsCompletionHandler:(id)arg2 withId:(id)arg3 withId:(id)arg4 withJavaLangThrowable:(id)arg5;
+ (void)invokeDirectWithSunNioChInvoker_GroupAndInvokeCount:(id)arg1 withJavaNioChannelsCompletionHandler:(id)arg2 withId:(id)arg3 withId:(id)arg4 withJavaLangThrowable:(id)arg5;
+ (void)invokeUncheckedWithJavaNioChannelsCompletionHandler:(id)arg1 withId:(id)arg2 withId:(id)arg3 withJavaLangThrowable:(id)arg4;
+ (_Bool)mayInvokeDirectWithSunNioChInvoker_GroupAndInvokeCount:(id)arg1 withSunNioChAsynchronousChannelGroupImpl:(id)arg2;
+ (_Bool)isBoundToAnyGroup;
+ (id)getGroupAndInvokeCount;
+ (void)bindToGroupWithSunNioChAsynchronousChannelGroupImpl:(id)arg1;
- (id)initPackagePrivate;

@end
