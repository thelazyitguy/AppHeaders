//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASThreadUtil : NSObject
{
}

+ (id)invokeOnDispatchQueueNamed:(id)arg1 withConcurrency:(_Bool)arg2 asSynced:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
+ (void)invokeOnDispatchQueueAsSynced:(_Bool)arg1 forPriority:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
+ (void)invokeOnMainThreadAsSynced:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (_Bool)isRunningOnMainThread;

@end
