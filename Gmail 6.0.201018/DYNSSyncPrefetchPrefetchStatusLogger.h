//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSSyncPrefetchPrefetchLogger, DYNSSyncPrefetchPrefetchStatusController;

@interface DYNSSyncPrefetchPrefetchStatusLogger : NSObject
{
    id lock_;
    DYNSSyncPrefetchPrefetchLogger *prefetchLogger_;
    DYNSSyncPrefetchPrefetchStatusController *prefetchStatusController_;
}

- (void)dealloc;
- (void)logWithDYNSDataModelsGroup:(id)arg1 withDYNSSyncPrefetchApiPrefetchType:(id)arg2;

@end
