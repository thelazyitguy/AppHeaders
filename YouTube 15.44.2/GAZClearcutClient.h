//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCTClearcutLogger;

@interface GAZClearcutClient : NSObject
{
    CCTClearcutLogger *_logger;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)logWithEvent:(id)arg1 userID:(id)arg2;
- (void)logWithEvent:(id)arg1;
- (id)initWithLogger:(id)arg1;

@end

