//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GMSx_CCTBackgroundTask : NSObject
{
    CDUnknownBlockType _expirationHandler;
    NSString *_name;
    unsigned long long _backgroundTaskID;
    union _CCTLock _lock;
}

+ (id)beginWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)begin;
- (void)end;
- (void)dealloc;
- (id)initWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;

@end
