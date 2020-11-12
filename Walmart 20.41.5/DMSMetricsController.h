//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DMSResolver, NSOperationQueue, NSString;

@interface DMSMetricsController : NSObject
{
    unsigned long long _usedTypes;
    unsigned long long _reportedTypes;
    NSString *_appVersion;
    NSOperationQueue *_operationQueue;
    DMSResolver *_resolver;
}

+ (id)sharedInstance;
@property(retain) DMSResolver *resolver; // @synthesize resolver=_resolver;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)reportApplicationLaunch;
- (void)updateSavedState;
- (void)reportTypes:(unsigned long long)arg1;
- (void)loadTypesFromUserDefaults;
- (id)initAndReportImmedidately:(_Bool)arg1;

@end
