//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoFilterInputStream.h"

@class SunNetProgressSource;

@interface SunNetWwwMeteredStream : JavaIoFilterInputStream
{
    _Bool closed_;
    long long expected_;
    long long count_;
    long long markedCount_;
    int markLimit_;
    SunNetProgressSource *pi_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)java_finalize;
- (_Bool)markSupported;
- (void)reset;
- (void)markWithInt:(int)arg1;
- (int)available;
- (void)close;
- (long long)skipWithLong:(long long)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (_Bool)isMarked;
- (void)justReadWithLong:(long long)arg1;
- (id)initWithJavaIoInputStream:(id)arg1 withSunNetProgressSource:(id)arg2 withLong:(long long)arg3;

@end
