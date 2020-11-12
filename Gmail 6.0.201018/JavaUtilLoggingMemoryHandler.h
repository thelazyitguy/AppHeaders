//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilLoggingHandler.h"

@class IOSObjectArray;

@interface JavaUtilLoggingMemoryHandler : JavaUtilLoggingHandler
{
    int start_;
    int count_;
    unsigned long long pushLevel_;
    int size_;
    JavaUtilLoggingHandler *target_;
    IOSObjectArray *buffer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (_Bool)isLoggableWithJavaUtilLoggingLogRecord:(id)arg1;
- (id)getPushLevel;
- (void)setPushLevelWithJavaUtilLoggingLevel:(id)arg1;
- (void)close;
- (void)flush;
- (void)push;
- (void)publishWithJavaUtilLoggingLogRecord:(id)arg1;
- (id)initWithJavaUtilLoggingHandler:(id)arg1 withInt:(int)arg2 withJavaUtilLoggingLevel:(id)arg3;
- (void)init__;
- (id)init;
- (void)configure;

@end
