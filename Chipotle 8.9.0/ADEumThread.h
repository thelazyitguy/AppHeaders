//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PLCrashReportThreadInfo;

@interface ADEumThread : NSObject
{
    PLCrashReportThreadInfo *_details;
    NSArray *_stackFrames;
}

+ (id)convertStackFrames:(id)arg1 fromCrashReport:(id)arg2;
@property(retain, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(retain, nonatomic) PLCrashReportThreadInfo *details; // @synthesize details=_details;
- (void).cxx_destruct;
- (id)initWithThread:(id)arg1 fromCrashReport:(id)arg2;

@end
