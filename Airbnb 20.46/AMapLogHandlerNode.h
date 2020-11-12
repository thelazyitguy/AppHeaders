//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapLogHandler;
@protocol OS_dispatch_queue;

@interface AMapLogHandlerNode : NSObject
{
    AMapLogHandler *_logHandler;
    NSObject<OS_dispatch_queue> *_logHandlerQueue;
}

+ (id)nodeWithLogger:(id)arg1 logHandlerQueue:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *logHandlerQueue; // @synthesize logHandlerQueue=_logHandlerQueue;
@property(readonly, nonatomic) AMapLogHandler *logHandler; // @synthesize logHandler=_logHandler;
- (id)initWithLogger:(id)arg1 logHandlerQueue:(id)arg2;

@end
