//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GDTCORReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilityQueue;
    unsigned int _callbackFlags;
    unsigned int _flags;
}

+ (unsigned int)currentFlags;
+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)setCallbackFlags:(unsigned int)arg1;
- (id)init;

@end
