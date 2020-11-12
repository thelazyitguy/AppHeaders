//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol LHLSDisplayDelegate, OS_dispatch_semaphore;

@interface LHLSDisplayLink : NSObject
{
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_semaphore> *_displayLinkActive;
    id <LHLSDisplayDelegate> _displayDelegate;
}

- (void).cxx_destruct;
- (void)displayLinkCallback:(id)arg1;
- (void)shutdown;
- (id)initWithDisplayDelegate:(id)arg1;
- (id)init;

@end
