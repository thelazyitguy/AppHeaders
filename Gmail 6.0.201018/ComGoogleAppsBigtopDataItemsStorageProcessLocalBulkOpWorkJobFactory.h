//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsXplatJobsJobQueue;
@protocol DaggerLazy;

@interface ComGoogleAppsBigtopDataItemsStorageProcessLocalBulkOpWorkJobFactory : NSObject
{
    ComGoogleAppsXplatJobsJobQueue *jobQueue_;
    id <DaggerLazy> localBulkOpWorkProcessor_;
}

- (void)dealloc;
- (id)createStartupJob;
- (void)createAndEnqueueJobWithInt:(int)arg1;

@end
