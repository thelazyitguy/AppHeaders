//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SunNioChKQueue : NSObject
{
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)keventPollWithInt:(int)arg1 withLong:(long long)arg2 withInt:(int)arg3;
+ (int)keventRegisterWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (int)kqueue;
+ (int)flagsOffset;
+ (int)filterOffset;
+ (int)identOffset;
+ (int)keventSize;
+ (int)getFlagsWithLong:(long long)arg1;
+ (int)getFilterWithLong:(long long)arg1;
+ (int)getDescriptorWithLong:(long long)arg1;
+ (long long)getEventWithLong:(long long)arg1 withInt:(int)arg2;
+ (void)freePollArrayWithLong:(long long)arg1;
+ (long long)allocatePollArrayWithInt:(int)arg1;
- (id)initPackagePrivate;

@end

