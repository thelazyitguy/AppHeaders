//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop;

@interface MAEngineThreadUserData : NSObject
{
    _Bool _isRunning;
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSourceRef;
}

@property(nonatomic) struct __CFRunLoopSource *runLoopSourceRef; // @synthesize runLoopSourceRef=_runLoopSourceRef;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void).cxx_destruct;
- (void)triggerSignal;
- (void)dealloc;

@end

